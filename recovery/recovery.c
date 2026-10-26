// Native recovery adapted from DrWhax/unfairplay; see THIRD-PARTY-NOTICES.txt.
#include "recovery.h"
#include "native-runtime.h"
#include "native-blocks/blocks.inc"
#include "native-known/known-blocks.inc"
#include "native-known/kernels.h"
#include "constants.inc"
#include <zlib.h>
typedef struct { RFile *file; size_t offset; } ROpen;
typedef struct {
    RFile files[64]; size_t fileCount;
    ROpen opened[4096]; uint64_t nextFD, nextAllocation;
    uint64_t tokens[256]; size_t tokenCount;
    uint8_t mac[6];
    uint32_t nextIterator, nextService, iterators[128];
    struct { uint64_t address; unsigned kind; } cf[128];
    size_t cfCount;
} RRuntime;
static void r_string(RState *s,uint64_t address,char output[4096]) {
    for(size_t i=0;i<4096;++i){output[i]=(char)r_load(s,address+i,1);if(!output[i])return;}
    r_fail(s,"unterminated recovery path");
}
static RFile *matchingFile(RRuntime *runtime,const char *name) {
    size_t length=strlen(name),best=0;RFile *result=NULL;
    for(size_t i=0;i<runtime->fileCount;++i){
        size_t n=strlen(runtime->files[i].suffix);
        if(n<=length&&n>best&&!memcmp(name+length-n,runtime->files[i].suffix,n)){best=n;result=&runtime->files[i];}
    }
    return result;
}
static uint64_t allocateData(RState *s,RRuntime *runtime,uint64_t size) {
    if(size>0x10000000)r_fail(s,"recovery allocation limit");
    uint64_t address=runtime->nextAllocation;
    uint64_t mapped=(size+4095)&~UINT64_C(4095);if(mapped<0x100000)mapped=0x100000;
    if (mapped > UINT64_MAX - address) r_fail(s,"recovery allocation overflow");
    runtime->nextAllocation += mapped;
    r_mapZero(s,address,mapped);return address;
}
static void setError(RState *s,uint32_t error){r_storeValue(s,UINT64_C(0x7100fff00000),error,4);}
static void writeStat(RState *s,uint64_t address,size_t size){
    uint8_t bytes[144]={0};bytes[4]=0xa4;bytes[5]=0x81;bytes[6]=1;
    for(int i=0;i<8;++i)bytes[96+i]=(uint8_t)((uint64_t)size>>(8*i));
    r_write(s,address,bytes,sizeof(bytes));
}
static uint64_t externalCall(RState *s,RRuntime *runtime,uint64_t pc){
    uint64_t resume=s->x[30];
    switch(pc){
        case UINT64_C(0xf100000000006000):
        case UINT64_C(0xf1000000000e4000):break;
        case UINT64_C(0xf100000000007000):s->x[0]=allocateData(s,runtime,s->x[0]);break;
        case UINT64_C(0xf10000000001f000):{
            char path[4096];r_string(s,s->x[0],path);RFile *file=matchingFile(runtime,path);
            if(!file){setError(s,2);s->x[0]=UINT32_MAX;break;}
            if(runtime->nextFD>=4096)r_fail(s,"recovery descriptor limit");
            uint64_t fd=runtime->nextFD++;runtime->opened[fd]=(ROpen){file,0};s->x[0]=fd;break;
        }
        case UINT64_C(0xf10000000004d000):{
            uint64_t fd=s->x[0];ROpen *entry=fd<4096?&runtime->opened[fd]:NULL;
            if(!entry||!entry->file){setError(s,9);s->x[0]=UINT32_MAX;break;}
            writeStat(s,s->x[1],entry->file->size);s->x[0]=0;break;
        }
        case UINT64_C(0xf100000000023000):{
            uint64_t fd=s->x[4];ROpen *entry=fd<4096?&runtime->opened[fd]:NULL;
            if(!entry||!entry->file){s->x[0]=UINT64_MAX;break;}
            uint64_t length=s->x[1];
            if(length>0x10000000)r_fail(s,"recovery mapping limit");
            uint64_t accessible=(length+0x3fff)&~UINT64_C(0x3fff);
            uint64_t address=allocateData(s,runtime,accessible);
            size_t start=s->x[5]<entry->file->size?(size_t)s->x[5]:entry->file->size;
            size_t count=entry->file->size-start;if(accessible<count)count=(size_t)accessible;
            r_write(s,address,entry->file->data+start,count);s->x[0]=address;break;
        }
        case UINT64_C(0xf100000000050000):s->x[0]=0;break;
        case UINT64_C(0xf10000000001a000):
            if(s->x[0]<4096)runtime->opened[s->x[0]]=(ROpen){0};s->x[0]=0;break;
        case UINT64_C(0xf10000000006e000):{
            char path[4096];r_string(s,s->x[0],path);RFile *file=matchingFile(runtime,path);
            if(!file){setError(s,2);s->x[0]=UINT32_MAX;break;}
            writeStat(s,s->x[1],file->size);s->x[0]=0;break;
        }
        case UINT64_C(0xf100000000008000):{
            uint64_t fd=s->x[0];ROpen *entry=fd<4096?&runtime->opened[fd]:NULL;
            if(!entry||!entry->file){setError(s,9);s->x[0]=UINT32_MAX;break;}
            uint64_t count=s->x[2];if(count>0x10000000)count=0x10000000;
            size_t left=entry->file->size-entry->offset;if(count>left)count=left;
            r_write(s,s->x[1],entry->file->data+entry->offset,(size_t)count);entry->offset+=(size_t)count;s->x[0]=count;break;
        }
        case UINT64_C(0xf10000000001b000):s->x[0]=UINT64_C(0x7100fff00000);break;
        case UINT64_C(0xf100000000003000):
            if(s->x[0]){r_storeValue(s,s->x[0],1700000000,8);r_storeValue(s,s->x[0]+8,0,8);}s->x[0]=0;break;
        case UINT64_C(0xf10000000002f000):
            if(s->x[1])r_storeValue(s,s->x[1],1,4);s->x[0]=0;break;
        case UINT64_C(0xf1000000000a1000):s->x[0]=UINT64_C(0x710200000000);break;
        case UINT64_C(0xf100000000043000):{
            uint32_t iterator=runtime->nextIterator++,service=runtime->nextService++;
            if(iterator-0x100>=128)r_fail(s,"recovery iterator limit");
            runtime->iterators[iterator-0x100]=service;r_storeValue(s,s->x[2],iterator,4);s->x[0]=0;break;
        }
        case UINT64_C(0xf10000000002c000):{
            uint32_t index=(uint32_t)s->x[0]-0x100;
            s->x[0]=index<128?runtime->iterators[index]:0;if(index<128)runtime->iterators[index]=0;break;
        }
        case UINT64_C(0xf10000000004e000):{
            uint64_t pointer=r_load(s,s->x[1]+16,8),length=r_load(s,s->x[1]+24,8);
            if(length>4096)r_fail(s,"invalid recovery property");
            char key[4097];r_read(s,pointer,key,(size_t)length);key[length]=0;
            unsigned kind=!strcmp(key,"IOBuiltin")?1:!strcmp(key,"IOMACAddress")?2:0;
            if(!kind||strlen(key)!=length||runtime->cfCount>=128)r_fail(s,"unsupported recovery property");
            uint64_t address=allocateData(s,runtime,1);size_t index=runtime->cfCount++;
            runtime->cf[index].address=address;runtime->cf[index].kind=kind;s->x[0]=address;break;
        }
        case UINT64_C(0xf10000000000c000):{
            bool found=false;for(size_t i=0;i<runtime->cfCount;++i)if(runtime->cf[i].address==s->x[0]&&runtime->cf[i].kind==1)found=true;
            if(!found)r_fail(s,"invalid recovery boolean");s->x[0]=1;break;
        }
        case UINT64_C(0xf100000000019000):
            for(size_t i=0;i<runtime->cfCount;++i)if(runtime->cf[i].address==s->x[0])runtime->cf[i].kind=0;break;
        case UINT64_C(0xf1000000000a2000):
            r_storeValue(s,s->x[2],runtime->nextService++,4);s->x[0]=0;break;
        case UINT64_C(0xf10000000007c000):{
            bool found=false;for(size_t i=0;i<runtime->cfCount;++i)if(runtime->cf[i].address==s->x[0]&&runtime->cf[i].kind==2)found=true;
            if(!found)r_fail(s,"invalid recovery byte array");
            size_t start=s->x[1]<6?(size_t)s->x[1]:6,count=6-start;if(s->x[2]<count)count=(size_t)s->x[2];
            r_write(s,s->x[3],runtime->mac+start,count);break;
        }
        case UINT64_C(0xf100000000034000):s->x[0]=0;break;
        case UINT64_C(0xf100000000025000):{
            bool initialized=false;for(size_t i=0;i<runtime->tokenCount;++i)initialized|=runtime->tokens[i]==s->x[0];
            r_storeValue(s,s->sp-16,s->x[29],8);r_storeValue(s,s->sp-8,resume,8);
            if(initialized){s->x[1]=UINT64_C(0x720000000000);s->x[0]=0;break;}
            if(runtime->tokenCount>=256)r_fail(s,"recovery initialization limit");
            runtime->tokens[runtime->tokenCount++]=s->x[0];s->sp-=16;s->x[29]=s->sp;
            s->x[30]=UINT64_C(0xf10000000002500c);return s->x[1];
        }
        case UINT64_C(0xf10000000002500c):
            s->x[29]=r_load(s,s->sp,8);s->x[30]=r_load(s,s->sp+8,8);s->sp+=16;s->x[0]=0;return s->x[30];
        case UINT64_C(0x720000000000):break;
        case UINT64_C(0xf10000000000e000):
        case UINT64_C(0xf100000000040000):
        case UINT64_C(0xf10000000005c000):
        case UINT64_C(0xf100000000065000):s->x[0]=0;break;
        default:r_fail(s,"unsupported native recovery external");
    }
    return resume;
}
static uint64_t executeKnown(RState *s,size_t group,uint64_t pc,bool *found){
    const RKnownBlock *entries=r_known_groups[group].entries;
    size_t low=0,high=r_known_groups[group].count;
    while(low<high){size_t mid=low+(high-low)/2;uint64_t address=entries[mid].address;
        if(address<pc)low=mid+1;else if(address>pc)high=mid;else{*found=true;return entries[mid].function(s);}
    }
    *found=false;return 0;
}
static uint64_t executeBlock(RState *s,uint64_t pc){
    size_t low=0,high=sizeof(r_missing_blocks)/sizeof(r_missing_blocks[0]);
    while(low<high){size_t mid=low+(high-low)/2;uint64_t address=r_missing_blocks[mid].address;
        if(address<pc)low=mid+1;else if(address>pc)high=mid;else return r_missing_blocks[mid].function(s);
    }
    for(size_t group=0;group<sizeof(r_known_groups)/sizeof(r_known_groups[0]);++group){
        bool found;uint64_t next=executeKnown(s,group,pc,&found);if(found)return next;
    }
    r_fail(s,"missing compiled recovery block");
}
void r_kernel_loop(RState *s,int kind){
    if(kind==0)r_kernel_digestprologue(s);
    for(unsigned iteration=0;iteration<1024;++iteration){
        if (*s->cancelled) r_fail(s,"cancelled");
        bool done=false;
        switch(kind){
            case 0:r_kernel_digest(s);done=s->z;if(!done)r_kernel_digestprologue(s);break;
            case 2:done=(uint32_t)((uint32_t)s->x[12]+2)>0x63;r_kernel_even(s);break;
            case 3:done=(uint32_t)((uint32_t)s->x[1]+UINT32_C(0x9fce627f))>0x64;r_kernel_odd(s);break;
            case 4:done=(uint32_t)((uint32_t)s->x[3]+UINT32_C(0x9fce627e))>=0x12c;r_kernel_tail(s);break;
            case 5:done=(uint32_t)((uint32_t)s->x[1]+UINT32_C(0x9fce627e))>0xc7;r_kernel_writer(s);break;
            case 6:
                r_kernel_outer(s);
                if(s->x[12]==UINT64_C(0x1007822cc)){
                    r_kernel_cycle(s);if(s->x[9]==UINT64_C(0x10046119c))r_kernel_cyclefinal(s);
                    done=s->x[9]!=UINT64_C(0x1005b7438)&&s->x[8]!=UINT64_C(0x1005b7438);
                }else done=s->x[12]!=UINT64_C(0x1005b7438);
                break;
            default:r_fail(s,"invalid native recovery loop");
        }
        if(done)return;
    }
    r_fail(s,"native recovery loop limit");
}
static void runCFG(RState *s,RRuntime *runtime,const char *name,uint64_t start,uint64_t stop){
    size_t group=0;for(;group<sizeof(r_known_groups)/sizeof(r_known_groups[0]);++group)if(!strcmp(name,r_known_groups[group].name))break;
    if(group==sizeof(r_known_groups)/sizeof(r_known_groups[0]))r_fail(s,"missing native startup group");
    s->pc=start;
    for(unsigned count=0;count<1000000;++count){
        if (*s->cancelled) r_fail(s,"cancelled");
        if(s->pc==stop)return;
        if(s->pc>=UINT64_C(0xf000000000000000)||s->pc==UINT64_C(0x720000000000))s->pc=externalCall(s,runtime,s->pc);
        else{bool found;uint64_t next=executeKnown(s,group,s->pc,&found);s->pc=found?next:executeBlock(s,s->pc);}
    }
    r_fail(s,"native startup block limit");
}

extern const uint8_t momos_recovery_data[], momos_recovery_data_end[];
static void put32(uint8_t *p, uint32_t n) {
    for (unsigned i=0;i<4;++i) p[i]=(uint8_t)(n>>(8*i));
}
static uint64_t readWord(RState *s, const uint8_t **cursor, const uint8_t *end, size_t n) {
    if ((size_t)(end-*cursor)<n) r_fail(s,"truncated recovery constants");
    uint64_t value=0;
    for(size_t i=0;i<n;++i)value|=(uint64_t)(*cursor)[i]<<(8*i);
    *cursor+=n;return value;
}
static void loadConstants(RState *s, const uint8_t *data, size_t size, uint8_t hash[32]) {
    const uint8_t *p=data,*end=data+size;
    if(size<316 || memcmp(p,"FPGOOR1\0",8))r_fail(s,"invalid recovery constants");
    p+=8;if(readWord(s,&p,end,4)!=2)r_fail(s,"invalid recovery constants version");
    memcpy(hash,p,32);p+=32;(void)readWord(s,&p,end,8);
    for(int i=0;i<31;++i)s->x[i]=readWord(s,&p,end,8);
    s->sp=readWord(s,&p,end,8);
    s->n=readWord(s,&p,end,1);s->z=readWord(s,&p,end,1);
    s->c=readWord(s,&p,end,1);s->v=readWord(s,&p,end,1);
    uint64_t count=readWord(s,&p,end,4);
    if(count>RPageSlots*3/4)r_fail(s,"too many recovery constants");
    for(uint64_t i=0;i<count;++i){
        uint64_t address=readWord(s,&p,end,8);
        if((address&4095)||(size_t)(end-p)<4096)r_fail(s,"invalid recovery constant page");
        memcpy(r_page(s,address,true),p,4096);p+=4096;
    }
    if(readWord(s,&p,end,4)!=0||p!=end)r_fail(s,"unexpected recovery constant tail");
}
bool RecoverEnrollment(const RFile *files, size_t count, const uint8_t mac[6],
                       const char *executablePath, const uint8_t payload[432],
                       uint32_t user, uint32_t keyID,
                       const volatile sig_atomic_t *cancelled,
                       uint8_t output[4184], char error[160]) {
    memset(output,0,4184);error[0]=0;
    if(!files||!count||count>64||!mac||!executablePath||strlen(executablePath)>=4096||!payload||!cancelled){
        snprintf(error,160,"invalid recovery input");return false;
    }
    RState *s=calloc(1,sizeof(*s));RRuntime *runtime=calloc(1,sizeof(*runtime));
    // Fixed bound for the bundled public snapshot; no untrusted compressed input.
    size_t capacity=8*1024*1024;
    uint8_t *constants=malloc(capacity);
    if(s)s->pages=calloc(RPageSlots,sizeof(*s->pages));
    if(!s||!runtime||!constants||!s->pages){
        snprintf(error,160,"cannot allocate recovery state");
        r_destroy(s);free(runtime);free(constants);return false;
    }
    s->cancelled=cancelled;
    volatile bool success=false;
    if(setjmp(s->failure)==0){
        z_stream stream={0};
        stream.next_in=(Bytef *)momos_recovery_data;
        stream.avail_in=(uInt)(momos_recovery_data_end-momos_recovery_data);
        stream.next_out=constants;stream.avail_out=(uInt)capacity;
        if(inflateInit2(&stream,15+16)!=Z_OK)r_fail(s,"cannot initialize recovery constants");
        int status=inflate(&stream,Z_FINISH);
        size_t size=stream.total_out;bool ended=status==Z_STREAM_END&&!stream.avail_in;
        inflateEnd(&stream);
        if(!ended)r_fail(s,"invalid compressed recovery constants");
        loadConstants(s,constants,size,output+16);
        memcpy(runtime->files,files,count*sizeof(*files));runtime->fileCount=count;
        memcpy(runtime->mac,mac,6);
        runtime->nextFD=100;runtime->nextAllocation=UINT64_C(0x710100000000);
        runtime->nextIterator=0x100;runtime->nextService=0x200;
        uint64_t maximum=0;
        for(size_t i=0;i<RPageSlots;++i)
            if(s->pages[i].bytes&&s->pages[i].address>=UINT64_C(0x700010000000)&&
               s->pages[i].address<UINT64_C(0x700020000000)&&s->pages[i].address>maximum)
                maximum=s->pages[i].address;
        if(maximum)runtime->nextAllocation=(maximum+0x100000)&~UINT64_C(0xfffff);
        uint64_t tokens[]={0x1010746b0,0x101075b48,0x101081348,0x101081358};
        memcpy(runtime->tokens,tokens,sizeof(tokens));runtime->tokenCount=4;
        r_write(s,UINT64_C(0x700000200000),executablePath,strlen(executablePath)+1);
        r_mapZero(s,UINT64_C(0x7100fff00000),4096);
        r_mapZero(s,UINT64_C(0xf1000000000d8000),4096);
        r_mapZero(s,UINT64_C(0xf1000000000e3000),4096);
        runCFG(s,runtime,"compact26A428AccountEntryBlocks",UINT64_C(0x100cd1c18),UINT64_C(0x10057ae74));
        runCFG(s,runtime,"compact26A428BootstrapBlocks",UINT64_C(0x10057ae74),UINT64_C(0x1005b7438));
        r_kernel_loop(s,6);s->pc=UINT64_C(0x1006b10a0);
        bool matched=false;
        for(uint64_t blocks=0;blocks<8000000;++blocks){
            if(*cancelled)r_fail(s,"cancelled");
            if(s->pc==UINT64_C(0x10015321c)){
                uint8_t candidate[432];r_read(s,s->x[23],candidate,sizeof(candidate));
                matched=!memcmp(candidate,payload,sizeof(candidate));r_wipe(candidate,sizeof(candidate));
            }
            if(matched&&s->pc==UINT64_C(0x100234cdc)){
                r_read(s,s->x[29]-0x70,output+0x38,16);
                for(unsigned i=0;i<16;++i)output[0x38+i]^=kKeyMask[i];
                memcpy(output,"FPSENR2\0",8);put32(output+8,2);put32(output+12,4184);
                put32(output+0x30,user);put32(output+0x34,keyID);
                memcpy(output+0x48,kWhitening,16);memcpy(output+0x58,kInputDecode,4096);
                success=true;break;
            }
            s->pc=(s->pc>=UINT64_C(0xf000000000000000)||s->pc==UINT64_C(0x720000000000))?
                externalCall(s,runtime,s->pc):executeBlock(s,s->pc);
        }
        if(!success)r_fail(s,"native recovery block limit");
    }else snprintf(error,160,"%s",s->error);
    r_destroy(s);r_wipe(runtime,sizeof(*runtime));free(runtime);free(constants);
    if(!success)r_wipe(output,4184);
    return success;
}
