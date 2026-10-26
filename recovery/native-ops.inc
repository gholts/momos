// Static C arithmetic generated from DrWhax/unfairplay 6022acd8 (MIT).
static inline __attribute__((always_inline, unused)) void compactAnd32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) & ((uint32_t)(s->x[right])))));
}

static inline __attribute__((always_inline, unused)) void compactAdd32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) + ((uint32_t)(s->x[right])))));
}

static inline __attribute__((always_inline, unused)) void compactLoadSXTW32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = r_load(s, (s->x[left] + shiftLeft(signExtend32(((uint32_t)(s->x[right]))), ((int64_t)(i_shift)), 64)), 4);
    s->x[d] = ((uint64_t)(((uint32_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactXor64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] ^ s->x[right]);
}

static inline __attribute__((always_inline, unused)) void compactAddLSR64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] + shiftRight(s->x[right], ((int64_t)(i_shift)), 64));
}

static inline __attribute__((always_inline, unused)) void compactUMADDL(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((((uint64_t)(((uint32_t)(s->x[left])))) * ((uint64_t)(((uint32_t)(s->x[right]))))) + s->x[i_accumulator]);
}

static inline __attribute__((always_inline, unused)) void compactAndLSL64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] & shiftLeft(s->x[right], ((int64_t)(i_shift)), 64));
}

static inline __attribute__((always_inline, unused)) void compactLSLImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = shiftLeft(s->x[left], ((int64_t)(i_shift)), 64);
}

static inline __attribute__((always_inline, unused)) void compactMovImm64Shift(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = (((uint64_t)(i_immediate)) << i_shift);
}

static inline __attribute__((always_inline, unused)) void compactXorLSL64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] ^ shiftLeft(s->x[right], ((int64_t)(i_shift)), 64));
}

static inline __attribute__((always_inline, unused)) void compactCSet32LO(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
}

static inline __attribute__((always_inline, unused)) void compactOrLSL32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) | ((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactAndImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type immediate = ((((uint32_t)(i_immediate)) | (((uint32_t)(i_right)) << 16)) | (((uint32_t)(i_accumulator)) << 24));
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) & immediate)));
}

static inline __attribute__((always_inline, unused)) void compactOrNotLSL32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) | (~((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 32)))))));
}

static inline __attribute__((always_inline, unused)) void compactRORImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)(((uint32_t)(rotateRight(((uint64_t)(((uint32_t)(s->x[left])))), ((int64_t)(i_shift)), 32)))));
}

static inline __attribute__((always_inline, unused)) void compactXorROR32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) ^ ((uint32_t)(rotateRight(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactOrROR32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) | ((uint32_t)(rotateRight(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactCSELZeroEq32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, right = i_right;
    if (r_condition(s, "eq"))
    {
        s->x[d] = 0;
    }
    else
    {
        s->x[d] = ((uint64_t)(((uint32_t)(s->x[right]))));
    }
}

static inline __attribute__((always_inline, unused)) void compactCSet32EQ(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
}

static inline __attribute__((always_inline, unused)) void compactLoadBase64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = r_load(s, s->x[left], 8);
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactLoadPostIndex8(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = r_load(s, s->x[left], 1);
    s->x[d] = ((uint64_t)(((uint32_t)(value))));
    s->x[left] += ((uint64_t)(i_immediate));
}

static inline __attribute__((always_inline, unused)) void compactLSLReg32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[left])))), ((int64_t)(s->x[right])), 32)))));
}

static inline __attribute__((always_inline, unused)) void compactStoreBase64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = s->x[d];
    }
    r_storeValue(s, s->x[left], value, 8);
}

static inline __attribute__((always_inline, unused)) void compactCMNImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    (void)r_addWithCarry(s, ((uint64_t)(((uint32_t)(s->x[left])))), ((uint64_t)(((uint32_t)(i_immediate)))), false, 32);
}

static inline __attribute__((always_inline, unused)) void compactOr64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] | s->x[right]);
}

static inline __attribute__((always_inline, unused)) void compactMovImm64Repeat16(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    __auto_type value = ((uint64_t)(i_immediate));
    s->x[d] = (((value | (value << 16)) | (value << 32)) | (value << 48));
}

static inline __attribute__((always_inline, unused)) void compactAddLSL64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] + shiftLeft(s->x[right], ((int64_t)(i_shift)), 64));
}

static inline __attribute__((always_inline, unused)) void compactLoadBaseImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = r_load(s, addOffset(s->x[left], ((int64_t)(i_immediate))), 8);
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactAddImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] + ((uint64_t)(i_immediate)));
}

static inline __attribute__((always_inline, unused)) void compactLoadBase32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = r_load(s, s->x[left], 4);
    s->x[d] = ((uint64_t)(((uint32_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactStoreSP64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    __auto_type value = ((uint64_t)(0));
    if ((i_left < 31))
    {
        value = s->x[left];
    }
    r_storeValue(s, addOffset(s->sp, ((int64_t)(i_immediate))), value, 8);
}

static inline __attribute__((always_inline, unused)) void compactMovNegImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = (((uint64_t)(0)) - ((uint64_t)(i_immediate)));
}

static inline __attribute__((always_inline, unused)) void compactCmp64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left, right = i_right;
    r_compare64(s, s->x[left], s->x[right]);
}

static inline __attribute__((always_inline, unused)) void compactSubImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] - ((uint64_t)(i_immediate)));
}

static inline __attribute__((always_inline, unused)) void compactStoreXIndex8(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = ((uint64_t)(((uint8_t)(s->x[d]))));
    }
    r_storeValue(s, (s->x[left] + s->x[right]), value, 1);
}

static inline __attribute__((always_inline, unused)) void compactCmpImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    r_compare64(s, s->x[left], ((uint64_t)(i_immediate)));
}

static inline __attribute__((always_inline, unused)) void compactOrImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] | ((uint64_t)(i_immediate)));
}

static inline __attribute__((always_inline, unused)) void compactXorImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] ^ ((uint64_t)(i_immediate)));
}

static inline __attribute__((always_inline, unused)) void compactStoreUXTW32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type address = (s->x[left] + shiftLeft(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 64));
    r_storeValue(s, address, ((uint64_t)(((uint32_t)(s->x[d])))), 4);
}

static inline __attribute__((always_inline, unused)) void compactNoop(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {

}

static inline __attribute__((always_inline, unused)) void compactMovImm48(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = ((((((uint64_t)(i_immediate)) | (((uint64_t)(i_left)) << 16)) | (((uint64_t)(i_right)) << 24)) | (((uint64_t)(i_accumulator)) << 32)) | (((uint64_t)(i_shift)) << 40));
}

static inline __attribute__((always_inline, unused)) void compactAddSPImm(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {

    s->sp += shiftLeft(((uint64_t)(i_immediate)), ((int64_t)(i_shift)), 64);
}

static inline __attribute__((always_inline, unused)) void compactSubSPImm(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {

    s->sp -= shiftLeft(((uint64_t)(i_immediate)), ((int64_t)(i_shift)), 64);
}

static inline __attribute__((always_inline, unused)) void compactLoadSignedOffset32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = r_load(s, addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate))))), 4);
    s->x[d] = ((uint64_t)(((uint32_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactLoadSignedOffset64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = r_load(s, addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate))))), 8);
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactStoreSignedOffset32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = ((uint64_t)(((uint32_t)(s->x[d]))));
    }
    r_storeValue(s, addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate))))), value, 4);
}

static inline __attribute__((always_inline, unused)) void compactStoreSignedOffset64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = s->x[d];
    }
    r_storeValue(s, addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate))))), value, 8);
}

static inline __attribute__((always_inline, unused)) void compactLoadSignedOffset8(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = r_load(s, addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate))))), 1);
    s->x[d] = ((uint64_t)(((uint8_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactLoadSignedByte32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = r_load(s, addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate))))), 1);
    s->x[d] = ((uint64_t)(((uint32_t)(((int32_t)(((int8_t)(value))))))));
}

static inline __attribute__((always_inline, unused)) void compactStoreSignedOffset8(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    r_storeValue(s, addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate))))), ((uint64_t)(((uint8_t)(s->x[d])))), 1);
}

static inline __attribute__((always_inline, unused)) void compactBic32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) & ~(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 32)))))));
}

static inline __attribute__((always_inline, unused)) void compactBic64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] & ~(shiftLeft(s->x[right], ((int64_t)(i_shift)), 64)));
}

static inline __attribute__((always_inline, unused)) void compactSXT8To32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)(((uint32_t)(((int32_t)(((int8_t)(s->x[left]))))))));
}

static inline __attribute__((always_inline, unused)) void compactSXT32To64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)(((int64_t)(((int32_t)(s->x[left]))))));
}

static inline __attribute__((always_inline, unused)) void compactNeg32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)((((uint32_t)(0)) - ((uint32_t)(s->x[left])))));
}

static inline __attribute__((always_inline, unused)) void compactNeg64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (((uint64_t)(0)) - s->x[left]);
}

static inline __attribute__((always_inline, unused)) void compactTst32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left, right = i_right;
    r_test32(s, (((uint32_t)(s->x[left])) & ((uint32_t)(s->x[right]))));
}

static inline __attribute__((always_inline, unused)) void compactTstImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    __auto_type immediate = ((((uint32_t)(i_immediate)) | (((uint32_t)(i_right)) << 16)) | (((uint32_t)(i_accumulator)) << 24));
    r_test32(s, (((uint32_t)(s->x[left])) & immediate));
}

static inline __attribute__((always_inline, unused)) void compactCSet32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    s->x[d] = ((uint64_t)(((uint32_t)(boolValue(matches)))));
}

static inline __attribute__((always_inline, unused)) void compactCSEL32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    __auto_type value = ((uint64_t)(0));
    if ((i_right < 31))
    {
        value = s->x[right];
    }
    if (matches)
    {
        value = 0;
        if ((i_left < 31))
        {
            value = s->x[left];
        }
    }
    {
        value = ((uint64_t)(((uint32_t)(value))));
    }
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactCSEL64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    __auto_type value = ((uint64_t)(0));
    if ((i_right < 31))
    {
        value = s->x[right];
    }
    if (matches)
    {
        value = 0;
        if ((i_left < 31))
        {
            value = s->x[left];
        }
    }

    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactCInc32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    __auto_type value = s->x[left];
    if (matches)
    {
        value++;
    }
    {
        value = ((uint64_t)(((uint32_t)(value))));
    }
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactCInc64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    __auto_type value = s->x[left];
    if (matches)
    {
        value++;
    }

    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactCNeg32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    __auto_type value = ((uint32_t)(s->x[left]));
    if (matches)
    {
        value = (0 - value);
    }
    s->x[d] = ((uint64_t)(value));
}

static inline __attribute__((always_inline, unused)) void compactLoadHalf32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type offset = ((int64_t)(0));

    __auto_type value = r_load(s, addOffset(s->x[left], offset), 2);
    s->x[d] = ((uint64_t)(((uint32_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactLoadSignedOffsetHalf32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type offset = ((int64_t)(0));
    {
        offset = ((int64_t)(((int16_t)(i_immediate))));
    }
    __auto_type value = r_load(s, addOffset(s->x[left], offset), 2);
    s->x[d] = ((uint64_t)(((uint32_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactStoreHalf32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type offset = ((int64_t)(0));

    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = ((uint64_t)(((uint16_t)(s->x[d]))));
    }
    r_storeValue(s, addOffset(s->x[left], offset), value, 2);
}

static inline __attribute__((always_inline, unused)) void compactStoreSignedOffsetHalf32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type offset = ((int64_t)(0));
    {
        offset = ((int64_t)(((int16_t)(i_immediate))));
    }
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = ((uint64_t)(((uint16_t)(s->x[d]))));
    }
    r_storeValue(s, addOffset(s->x[left], offset), value, 2);
}

static inline __attribute__((always_inline, unused)) void compactPairLoad32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type base = ((uint64_t)(0));
    if ((i_left == 31))
    {
        base = s->sp;
    }
    else
    {
        base = s->x[left];
    }
    __auto_type offset = ((int64_t)(((int16_t)(i_immediate))));
    __auto_type address = base;
    if ((i_accumulator == 0))
    {
        address = addOffset(base, offset);
    }
    if ((i_accumulator == 1))
    {
        base = addOffset(base, offset);
        address = base;
        if ((i_left == 31))
        {
            s->sp = base;
        }
        else
        {
            s->x[left] = base;
        }
    }
    int64_t width = 8;
    {
        width = 4;
    }
    {
        __auto_type first = r_load(s, address, width);
        __auto_type second = r_load(s, (address + ((uint64_t)(width))), width);
        if ((i_destination < 31))
        {
            s->x[d] = first;
        }
        if ((i_right < 31))
        {
            s->x[right] = second;
        }
    }
    if ((i_accumulator == 2))
    {
        base = addOffset(base, offset);
        if ((i_left == 31))
        {
            s->sp = base;
        }
        else
        {
            s->x[left] = base;
        }
    }
}

static inline __attribute__((always_inline, unused)) void compactPairLoad64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type base = ((uint64_t)(0));
    if ((i_left == 31))
    {
        base = s->sp;
    }
    else
    {
        base = s->x[left];
    }
    __auto_type offset = ((int64_t)(((int16_t)(i_immediate))));
    __auto_type address = base;
    if ((i_accumulator == 0))
    {
        address = addOffset(base, offset);
    }
    if ((i_accumulator == 1))
    {
        base = addOffset(base, offset);
        address = base;
        if ((i_left == 31))
        {
            s->sp = base;
        }
        else
        {
            s->x[left] = base;
        }
    }
    int64_t width = 8;

    {
        __auto_type first = r_load(s, address, width);
        __auto_type second = r_load(s, (address + ((uint64_t)(width))), width);
        if ((i_destination < 31))
        {
            s->x[d] = first;
        }
        if ((i_right < 31))
        {
            s->x[right] = second;
        }
    }
    if ((i_accumulator == 2))
    {
        base = addOffset(base, offset);
        if ((i_left == 31))
        {
            s->sp = base;
        }
        else
        {
            s->x[left] = base;
        }
    }
}

static inline __attribute__((always_inline, unused)) void compactPairStore32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type base = ((uint64_t)(0));
    if ((i_left == 31))
    {
        base = s->sp;
    }
    else
    {
        base = s->x[left];
    }
    __auto_type offset = ((int64_t)(((int16_t)(i_immediate))));
    __auto_type address = base;
    if ((i_accumulator == 0))
    {
        address = addOffset(base, offset);
    }
    if ((i_accumulator == 1))
    {
        base = addOffset(base, offset);
        address = base;
        if ((i_left == 31))
        {
            s->sp = base;
        }
        else
        {
            s->x[left] = base;
        }
    }
    int64_t width = 8;
    {
        width = 4;
    }
    {
        __auto_type assign0 = ((uint64_t)(0));
        __auto_type assign1 = ((uint64_t)(0));
        __auto_type first = assign0;
        __auto_type second = assign1;
        if ((i_destination < 31))
        {
            first = s->x[d];
        }
        if ((i_right < 31))
        {
            second = s->x[right];
        }
        if ((width == 4))
        {
            {
                __auto_type assign0 = ((uint64_t)(((uint32_t)(first))));
                __auto_type assign1 = ((uint64_t)(((uint32_t)(second))));
                first = assign0;
                second = assign1;
            }
        }
        r_storeValue(s, address, first, width);
        r_storeValue(s, (address + ((uint64_t)(width))), second, width);
    }
    if ((i_accumulator == 2))
    {
        base = addOffset(base, offset);
        if ((i_left == 31))
        {
            s->sp = base;
        }
        else
        {
            s->x[left] = base;
        }
    }
}

static inline __attribute__((always_inline, unused)) void compactPairStore64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type base = ((uint64_t)(0));
    if ((i_left == 31))
    {
        base = s->sp;
    }
    else
    {
        base = s->x[left];
    }
    __auto_type offset = ((int64_t)(((int16_t)(i_immediate))));
    __auto_type address = base;
    if ((i_accumulator == 0))
    {
        address = addOffset(base, offset);
    }
    if ((i_accumulator == 1))
    {
        base = addOffset(base, offset);
        address = base;
        if ((i_left == 31))
        {
            s->sp = base;
        }
        else
        {
            s->x[left] = base;
        }
    }
    int64_t width = 8;

    {
        __auto_type assign0 = ((uint64_t)(0));
        __auto_type assign1 = ((uint64_t)(0));
        __auto_type first = assign0;
        __auto_type second = assign1;
        if ((i_destination < 31))
        {
            first = s->x[d];
        }
        if ((i_right < 31))
        {
            second = s->x[right];
        }
        if ((width == 4))
        {
            {
                __auto_type assign0 = ((uint64_t)(((uint32_t)(first))));
                __auto_type assign1 = ((uint64_t)(((uint32_t)(second))));
                first = assign0;
                second = assign1;
            }
        }
        r_storeValue(s, address, first, width);
        r_storeValue(s, (address + ((uint64_t)(width))), second, width);
    }
    if ((i_accumulator == 2))
    {
        base = addOffset(base, offset);
        if ((i_left == 31))
        {
            s->sp = base;
        }
        else
        {
            s->x[left] = base;
        }
    }
}

static inline __attribute__((always_inline, unused)) void compactLoadBaseImm8(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type base = s->x[left];

    __auto_type value = r_load(s, addOffset(base, ((int64_t)(i_immediate))), 1);
    s->x[d] = ((uint64_t)(((uint8_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactLoadSPImm8(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    __auto_type base = s->sp;
    __auto_type value = r_load(s, addOffset(base, ((int64_t)(i_immediate))), 1);
    s->x[d] = ((uint64_t)(((uint8_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactLoadXIndex8(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    int64_t width = 1;

    __auto_type value = r_load(s, (s->x[left] + s->x[right]), width);
    if ((width == 4))
    {
        value = ((uint64_t)(((uint32_t)(value))));
    }
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactLoadXIndex32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    int64_t width = 1;
    {
        width = 4;
    }
    __auto_type value = r_load(s, (s->x[left] + s->x[right]), width);
    if ((width == 4))
    {
        value = ((uint64_t)(((uint32_t)(value))));
    }
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactLoadXIndex64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    int64_t width = 1;
    {
        width = 8;
    }
    __auto_type value = r_load(s, (s->x[left] + s->x[right]), width);
    if ((width == 4))
    {
        value = ((uint64_t)(((uint32_t)(value))));
    }
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactStoreBaseImm8(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type base = s->x[left];

    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = ((uint64_t)(((uint8_t)(s->x[d]))));
    }
    r_storeValue(s, addOffset(base, ((int64_t)(i_immediate))), value, 1);
}

static inline __attribute__((always_inline, unused)) void compactStoreSPImm8(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    __auto_type base = s->sp;
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = ((uint64_t)(((uint8_t)(s->x[d]))));
    }
    r_storeValue(s, addOffset(base, ((int64_t)(i_immediate))), value, 1);
}

static inline __attribute__((always_inline, unused)) void compactStoreXIndex32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    int64_t width = 8;
    {
        width = 4;
    }
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = s->x[d];
    }
    if ((width == 4))
    {
        value = ((uint64_t)(((uint32_t)(value))));
    }
    r_storeValue(s, (s->x[left] + s->x[right]), value, width);
}

static inline __attribute__((always_inline, unused)) void compactStoreXIndex64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    int64_t width = 8;

    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = s->x[d];
    }
    if ((width == 4))
    {
        value = ((uint64_t)(((uint32_t)(value))));
    }
    r_storeValue(s, (s->x[left] + s->x[right]), value, width);
}

static inline __attribute__((always_inline, unused)) void compactLoadUXTW64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = r_load(s, (s->x[left] + shiftLeft(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 64)), 8);
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactStoreBaseImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = s->x[d];
    }
    r_storeValue(s, addOffset(s->x[left], ((int64_t)(i_immediate))), value, 8);
}

static inline __attribute__((always_inline, unused)) void compactAddExt32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type extended = ((uint64_t)(((uint8_t)(s->x[right]))));
    if ((i_accumulator == 1))
    {
        extended = ((uint64_t)(((uint32_t)(s->x[right]))));
    }
    else
    if ((i_accumulator == 2))
    {
        extended = ((uint64_t)(((int64_t)(((int32_t)(s->x[right]))))));
    }
    else
    if ((i_accumulator == 3))
    {
        extended = ((uint64_t)(((uint16_t)(s->x[right]))));
    }
    __auto_type value = (s->x[left] + shiftLeft(extended, ((int64_t)(i_shift)), 64));
    {
        value = ((uint64_t)(((uint32_t)(value))));
    }
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactAddExt64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type extended = ((uint64_t)(((uint8_t)(s->x[right]))));
    if ((i_accumulator == 1))
    {
        extended = ((uint64_t)(((uint32_t)(s->x[right]))));
    }
    else
    if ((i_accumulator == 2))
    {
        extended = ((uint64_t)(((int64_t)(((int32_t)(s->x[right]))))));
    }
    else
    if ((i_accumulator == 3))
    {
        extended = ((uint64_t)(((uint16_t)(s->x[right]))));
    }
    __auto_type value = (s->x[left] + shiftLeft(extended, ((int64_t)(i_shift)), 64));

    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactMovSP(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    s->sp = s->x[left];
}

static inline __attribute__((always_inline, unused)) void compactSubSPFromX(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    s->sp = (s->x[left] - shiftLeft(((uint64_t)(i_immediate)), ((int64_t)(i_shift)), 64));
}

static inline __attribute__((always_inline, unused)) void compactOrImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type immediate = ((((uint32_t)(i_immediate)) | (((uint32_t)(i_right)) << 16)) | (((uint32_t)(i_accumulator)) << 24));
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) | immediate)));
}

static inline __attribute__((always_inline, unused)) void compactOrLSL64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] | shiftLeft(s->x[right], ((int64_t)(i_shift)), 64));
}

static inline __attribute__((always_inline, unused)) void compactAndLSR32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) & ((uint32_t)(shiftRight(s->x[right], ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactCmpExtByte32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left, right = i_right;
    __auto_type rightValue = ((uint32_t)(((uint8_t)(s->x[right]))));
    if ((i_shift != 0))
    {
        rightValue = ((uint32_t)(((int32_t)(((int8_t)(s->x[right]))))));
    }
    r_compare32(s, ((uint32_t)(s->x[left])), rightValue);
}

static inline __attribute__((always_inline, unused)) void compactCmpLSR32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left, right = i_right;
    r_compare32(s, ((uint32_t)(s->x[left])), ((uint32_t)(shiftRight(s->x[right], ((int64_t)(i_shift)), 32))));
}

static inline __attribute__((always_inline, unused)) void compactCCmpReg32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left, right = i_right;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    if ((!matches))
    {
        r_setNZCV(s, ((int64_t)(i_accumulator)));
        return;
    }
    __auto_type rightValue = s->x[right];

    {
        r_compare32(s, ((uint32_t)(s->x[left])), ((uint32_t)(rightValue)));
    }
}

static inline __attribute__((always_inline, unused)) void compactCCmpReg64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left, right = i_right;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    if ((!matches))
    {
        r_setNZCV(s, ((int64_t)(i_accumulator)));
        return;
    }
    __auto_type rightValue = s->x[right];

    {
        r_compare64(s, s->x[left], rightValue);
    }
}

static inline __attribute__((always_inline, unused)) void compactCCmpImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    if ((!matches))
    {
        r_setNZCV(s, ((int64_t)(i_accumulator)));
        return;
    }
    __auto_type rightValue = ((uint64_t)(i_immediate));
    {
        r_compare32(s, ((uint32_t)(s->x[left])), ((uint32_t)(rightValue)));
    }
}

static inline __attribute__((always_inline, unused)) void compactCCmpImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    if ((!matches))
    {
        r_setNZCV(s, ((int64_t)(i_accumulator)));
        return;
    }
    __auto_type rightValue = ((uint64_t)(i_immediate));
    {
        r_compare64(s, s->x[left], rightValue);
    }
}

static inline __attribute__((always_inline, unused)) void compactAdds32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = r_addWithCarry(s, ((uint64_t)(((uint32_t)(s->x[left])))), ((uint64_t)(((uint32_t)(s->x[right])))), false, 32);
}

static inline __attribute__((always_inline, unused)) void compactSubs32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = r_subtractWithFlags(s, ((uint64_t)(((uint32_t)(s->x[left])))), ((uint64_t)(((uint32_t)(s->x[right])))), 32);
}

static inline __attribute__((always_inline, unused)) void compactSubs64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = r_subtractWithFlags(s, s->x[left], s->x[right], 64);
}

static inline __attribute__((always_inline, unused)) void compactSubsImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = r_subtractWithFlags(s, ((uint64_t)(((uint32_t)(s->x[left])))), ((uint64_t)(i_immediate)), 32);
}

static inline __attribute__((always_inline, unused)) void compactSubsImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = r_subtractWithFlags(s, s->x[left], ((uint64_t)(i_immediate)), 64);
}

static inline __attribute__((always_inline, unused)) void compactSMull32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((int64_t)(((int32_t)(s->x[left])))) * ((int64_t)(((int32_t)(s->x[right])))))));
}

static inline __attribute__((always_inline, unused)) void compactUBFIZ32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    int64_t width = 64;
    {
        width = 32;
    }
    s->x[d] = shiftLeft((s->x[left] & bitMask(((int64_t)(i_immediate)), width)), ((int64_t)(i_shift)), width);
}

static inline __attribute__((always_inline, unused)) void compactUBFIZ64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    int64_t width = 64;

    s->x[d] = shiftLeft((s->x[left] & bitMask(((int64_t)(i_immediate)), width)), ((int64_t)(i_shift)), width);
}

static inline __attribute__((always_inline, unused)) void compactUBFX32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    int64_t width = 64;
    {
        width = 32;
    }
    s->x[d] = (shiftRight(s->x[left], ((int64_t)(i_shift)), width) & bitMask(((int64_t)(i_immediate)), width));
}

static inline __attribute__((always_inline, unused)) void compactUBFX64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    int64_t width = 64;

    s->x[d] = (shiftRight(s->x[left], ((int64_t)(i_shift)), width) & bitMask(((int64_t)(i_immediate)), width));
}

static inline __attribute__((always_inline, unused)) void compactBFI32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = insertBits(((uint64_t)(((uint32_t)(s->x[d])))), ((uint64_t)(((uint32_t)(s->x[left])))), ((int64_t)(i_shift)), ((int64_t)(i_immediate)), 32);
}

static inline __attribute__((always_inline, unused)) void compactBFXIL32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = insertBits(((uint64_t)(((uint32_t)(s->x[d])))), shiftRight(s->x[left], ((int64_t)(i_shift)), 32), 0, ((int64_t)(i_immediate)), 32);
}

static inline __attribute__((always_inline, unused)) void compactOrNotShift32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    int64_t width = 64;
    {
        width = 32;
    }
    __auto_type shifted = shiftLeft(s->x[right], ((int64_t)(i_shift)), width);
    if ((i_accumulator == 1))
    {
        shifted = shiftRight(s->x[right], ((int64_t)(i_shift)), width);
    }
    __auto_type value = (s->x[left] | (~shifted));
    if ((width == 32))
    {
        value = ((uint64_t)(((uint32_t)(value))));
    }
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactOrNotShift64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    int64_t width = 64;

    __auto_type shifted = shiftLeft(s->x[right], ((int64_t)(i_shift)), width);
    if ((i_accumulator == 1))
    {
        shifted = shiftRight(s->x[right], ((int64_t)(i_shift)), width);
    }
    __auto_type value = (s->x[left] | (~shifted));
    if ((width == 32))
    {
        value = ((uint64_t)(((uint32_t)(value))));
    }
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactNot64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (~s->x[left]);
}

static inline __attribute__((always_inline, unused)) void compactLSLReg64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = shiftLeft(s->x[left], ((int64_t)(s->x[right])), 64);
}

static inline __attribute__((always_inline, unused)) void compactLSRReg64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = shiftRight(s->x[left], ((int64_t)(s->x[right])), 64);
}

static inline __attribute__((always_inline, unused)) void compactAndImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] & ((uint64_t)(i_immediate)));
}

static inline __attribute__((always_inline, unused)) void compactAndImmShift64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] & ((((uint64_t)(i_immediate)) << i_shift)));
}

static inline __attribute__((always_inline, unused)) void compactXorNotImm16Shift64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] ^ (~((((uint64_t)(i_immediate)) << i_shift))));
}

static inline __attribute__((always_inline, unused)) void compactAddImmShift64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] + shiftLeft(((uint64_t)(i_immediate)), ((int64_t)(i_shift)), 64));
}

static inline __attribute__((always_inline, unused)) void compactSubImmShift64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] - shiftLeft(((uint64_t)(i_immediate)), ((int64_t)(i_shift)), 64));
}

static inline __attribute__((always_inline, unused)) void compactMovFromSP(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = s->sp;
}

static inline __attribute__((always_inline, unused)) void compactAddLSR32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) + ((uint32_t)(shiftRight(s->x[right], ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactSubLSL64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] - shiftLeft(s->x[right], ((int64_t)(i_shift)), 64));
}

static inline __attribute__((always_inline, unused)) void compactSubExt32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) - ((uint32_t)(((uint8_t)(s->x[right])))))));
}

static inline __attribute__((always_inline, unused)) void compactLoadXIndexShift32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = r_load(s, (s->x[left] + shiftLeft(s->x[right], ((int64_t)(i_shift)), 64)), 4);
    s->x[d] = ((uint64_t)(((uint32_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactStoreXIndexShift32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    r_storeValue(s, (s->x[left] + shiftLeft(s->x[right], ((int64_t)(i_shift)), 64)), ((uint64_t)(((uint32_t)(s->x[d])))), 4);
}

static inline __attribute__((always_inline, unused)) void compactLoadPreIndex32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[left] = addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate)))));
    __auto_type value = r_load(s, s->x[left], 4);
    s->x[d] = ((uint64_t)(((uint32_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactStorePreIndex64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[left] = addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate)))));
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = s->x[d];
    }
    r_storeValue(s, s->x[left], value, 8);
}

static inline __attribute__((always_inline, unused)) void compactLoadSignedWord64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = r_load(s, addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate))))), 4);
    s->x[d] = ((uint64_t)(((int64_t)(((int32_t)(value))))));
}

static inline __attribute__((always_inline, unused)) void compactAnds32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = (((uint32_t)(s->x[left])) & ((uint32_t)(s->x[right])));
    s->x[d] = ((uint64_t)(value));
    r_test32(s, value);
}

static inline __attribute__((always_inline, unused)) void compactBics32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = (((uint32_t)(s->x[left])) & ~(((uint32_t)(s->x[right]))));
    if ((i_destination < 31))
    {
        s->x[d] = ((uint64_t)(value));
    }
    r_test32(s, value);
}

static inline __attribute__((always_inline, unused)) void compactCCmnImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    if (matches)
    {
        (void)r_addWithCarry(s, ((uint64_t)(((uint32_t)(s->x[left])))), ((uint64_t)(i_immediate)), false, 32);
    }
    else
    {
        r_setNZCV(s, ((int64_t)(i_accumulator)));
    }
}

static inline __attribute__((always_inline, unused)) void compactCLZ32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)(((uint32_t)(bits_LeadingZeros32(((uint32_t)(s->x[left])))))));
}

static inline __attribute__((always_inline, unused)) void compactCMNImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    (void)r_addWithCarry(s, s->x[left], ((uint64_t)(i_immediate)), false, 64);
}

static inline __attribute__((always_inline, unused)) void compactMovNegImm48(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    __auto_type magnitude = ((((((uint64_t)(i_immediate)) | (((uint64_t)(i_left)) << 16)) | (((uint64_t)(i_right)) << 24)) | (((uint64_t)(i_accumulator)) << 32)) | (((uint64_t)(i_shift)) << 40));
    s->x[d] = (((uint64_t)(0)) - magnitude);
}

static inline __attribute__((always_inline, unused)) void compactMovNegImm16Shift64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = (((uint64_t)(0)) - ((((uint64_t)(i_immediate)) << i_shift)));
}

static inline __attribute__((always_inline, unused)) void compactMovNegRepeat16PlusOne(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    __auto_type value = ((uint64_t)(i_immediate));
    __auto_type magnitude = (((value | (value << 16)) | (value << 32)) | (value << 48));
    s->x[d] = (((uint64_t)(0)) - ((magnitude + 1)));
}

static inline __attribute__((always_inline, unused)) void compactAndNotImm16Shift64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] & (~((((uint64_t)(i_immediate)) << i_shift))));
}

static inline __attribute__((always_inline, unused)) void compactCASAL32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left, right = i_right;
    __auto_type value = r_load(s, s->x[i_accumulator], 4);
    if ((((uint32_t)(value)) == ((uint32_t)(s->x[left]))))
    {
        r_storeValue(s, s->x[i_accumulator], ((uint64_t)(((uint32_t)(s->x[right])))), 4);
    }
    s->x[left] = ((uint64_t)(((uint32_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactStorePostIndex32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    r_storeValue(s, s->x[left], ((uint64_t)(((uint32_t)(s->x[d])))), 4);
    s->x[left] = addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate)))));
}

static inline __attribute__((always_inline, unused)) void compactStorePostIndex64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    r_storeValue(s, s->x[left], s->x[d], 8);
    s->x[left] = addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate)))));
}

static inline __attribute__((always_inline, unused)) void compactMovMaxInt(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = ((uint64_t)(0x7fffffffffffffff));
}

static inline __attribute__((always_inline, unused)) void compactLoadPreIndex64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[left] = addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate)))));
    __auto_type value = r_load(s, s->x[left], 8);
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactXorSelectionMask64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] ^ ((uint64_t)(0x3ffffffffffffff0)));
}

static inline __attribute__((always_inline, unused)) void compactSXT16To32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)(((uint32_t)(((int32_t)(((int16_t)(s->x[left]))))))));
}

static inline __attribute__((always_inline, unused)) void compactStoreHalfPostIndex32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    r_storeValue(s, s->x[left], ((uint64_t)(((uint16_t)(s->x[d])))), 2);
    s->x[left] = addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate)))));
}

static inline __attribute__((always_inline, unused)) void compactSubUXTH32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) - ((uint32_t)(((uint16_t)(s->x[right])))))));
}

static inline __attribute__((always_inline, unused)) void compactUDiv64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = unsignedDivide(s->x[left], s->x[right], 64);
}

static inline __attribute__((always_inline, unused)) void compactLoadHalfXIndexShift32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = r_load(s, (s->x[left] + shiftLeft(s->x[right], ((int64_t)(i_shift)), 64)), 2);
    s->x[d] = ((uint64_t)(((uint16_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactStorePreIndex32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[left] = addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate)))));
    r_storeValue(s, s->x[left], ((uint64_t)(((uint32_t)(s->x[d])))), 4);
}

static inline __attribute__((always_inline, unused)) void compactAddASR32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) + ((uint32_t)(shiftRightArithmetic(s->x[right], ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactAddUXTH64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] + ((uint64_t)(((uint16_t)(s->x[right])))));
}

static inline __attribute__((always_inline, unused)) void compactXorLSR64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] ^ shiftRight(s->x[right], ((int64_t)(i_shift)), 64));
}

static inline __attribute__((always_inline, unused)) void compactXorImm16Shift64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] ^ (((uint64_t)(i_immediate)) << i_shift));
}

static inline __attribute__((always_inline, unused)) void compactLoadSignedWordBase64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type base = ((uint64_t)(0));
    if ((i_left == 31))
    {
        base = s->sp;
    }
    else
    {
        base = s->x[left];
    }
    __auto_type value = r_load(s, addOffset(base, ((int64_t)(((int16_t)(i_immediate))))), 4);
    s->x[d] = ((uint64_t)(((int64_t)(((int32_t)(value))))));
}

static inline __attribute__((always_inline, unused)) void compactLoadHalfXIndex32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = r_load(s, (s->x[left] + s->x[right]), 2);
    s->x[d] = ((uint64_t)(((uint16_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactLoadSPHalf32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    __auto_type value = r_load(s, addOffset(s->sp, ((int64_t)(i_immediate))), 2);
    s->x[d] = ((uint64_t)(((uint16_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactMNeg64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (((uint64_t)(0)) - (s->x[left] * s->x[right]));
}

static inline __attribute__((always_inline, unused)) void compactMSub64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[i_accumulator] - (s->x[left] * s->x[right]));
}

static inline __attribute__((always_inline, unused)) void compactSBFIZ64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = shiftLeft(signExtendBits(s->x[left], ((int64_t)(i_immediate)), 64), ((int64_t)(i_shift)), 64);
}

static inline __attribute__((always_inline, unused)) void compactStoreUXTW64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type address = (s->x[left] + shiftLeft(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 64));
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = s->x[d];
    }
    r_storeValue(s, address, value, 8);
}

static inline __attribute__((always_inline, unused)) void compactStorePostIndex8(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = ((uint64_t)(((uint8_t)(s->x[d]))));
    }
    r_storeValue(s, s->x[left], value, 1);
    s->x[left] = addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate)))));
}

static inline __attribute__((always_inline, unused)) void compactVectorDup32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    r_vectorDup(s, d, ((int64_t)(i_immediate)), 32, ((uint64_t)(((uint32_t)(s->x[left])))));
}

static inline __attribute__((always_inline, unused)) void compactLoadVector(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    r_loadVector(s, d, addOffset(s->x[left], ((int64_t)(i_immediate))), ((int64_t)(i_accumulator)));
}

static inline __attribute__((always_inline, unused)) void compactASRImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)(((uint32_t)(shiftRightArithmetic(s->x[left], ((int64_t)(i_shift)), 32)))));
}

static inline __attribute__((always_inline, unused)) void compactAndsLSR32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = (((uint32_t)(s->x[left])) & ((uint32_t)(shiftRight(s->x[right], ((int64_t)(i_shift)), 32))));
    s->x[d] = ((uint64_t)(value));
    r_test32(s, value);
}

static inline __attribute__((always_inline, unused)) void compactBicsLSR32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = (((uint32_t)(s->x[left])) & ~(((uint32_t)(shiftRight(s->x[right], ((int64_t)(i_shift)), 32)))));
    if ((i_destination < 31))
    {
        s->x[d] = ((uint64_t)(value));
    }
    r_test32(s, value);
}

static inline __attribute__((always_inline, unused)) void compactCCmnImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    if (matches)
    {
        (void)r_addWithCarry(s, s->x[left], ((uint64_t)(i_immediate)), false, 64);
    }
    else
    {
        r_setNZCV(s, ((int64_t)(i_accumulator)));
    }
}

static inline __attribute__((always_inline, unused)) void compactCSInc32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type matches = r_conditionIndex(s, ((int)(i_shift)));
    if (matches)
    {
        s->x[d] = ((uint64_t)(((uint32_t)(s->x[left]))));
    }
    else
    {
        __auto_type value = ((uint32_t)(0));
        if ((i_right < 31))
        {
            value = ((uint32_t)(s->x[right]));
        }
        s->x[d] = ((uint64_t)((value + 1)));
    }
}

static inline __attribute__((always_inline, unused)) void compactTstImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    r_test64(s, (s->x[left] & ((uint64_t)(i_immediate))));
}

static inline __attribute__((always_inline, unused)) void compactEon32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) ^ (~((uint32_t)(s->x[right]))))));
}

static inline __attribute__((always_inline, unused)) void compactVectorImmediate(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    r_clearVector(s, d);
    __auto_type value = (((uint64_t)(i_immediate)) << i_shift);
    for (int64_t lane = 0; (lane < ((int64_t)(i_right))); lane++)
    {
        r_setVectorLane(s, d, lane, ((int64_t)(i_left)), value);
    }
}

static inline __attribute__((always_inline, unused)) void compactVectorBinary(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type operation = (const char *[]){"add", "sub", "mul", "eor"}[i_accumulator];
    r_vectorBinary(s, operation, d, left, right, ((int64_t)(i_immediate)), ((int64_t)(i_shift)));
}

static inline __attribute__((always_inline, unused)) void compactVectorMAC(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    r_vectorMultiplyAccumulate(s, d, left, right, ((int64_t)(i_immediate)), ((int64_t)(i_shift)), (i_accumulator != 0));
}

static inline __attribute__((always_inline, unused)) void compactVectorUnsignedShiftLong(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type lanes = ((int64_t)(((uint8_t)(i_immediate))));
    __auto_type inputBits = ((int64_t)(((uint8_t)((i_immediate >> 8)))));
    r_vectorUnsignedShiftLong(s, d, left, lanes, inputBits, ((int64_t)(i_shift)), (i_accumulator != 0));
}

static inline __attribute__((always_inline, unused)) void compactVectorMove64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = r_vectorLane(s, left, 0, 64);
    r_clearVector(s, d);
    r_setVectorLane(s, d, 0, 64, value);
}

static inline __attribute__((always_inline, unused)) void compactStoreVector(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type base = ((uint64_t)(0));
    if ((i_left == 31))
    {
        base = s->sp;
    }
    else
    {
        base = s->x[left];
    }
    r_storeVector(s, d, addOffset(base, ((int64_t)(((int16_t)(i_immediate))))), ((int64_t)(i_accumulator)));
}

static inline __attribute__((always_inline, unused)) void compactVectorUnsignedMultiplyLong(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    r_vectorUnsignedMultiplyLong(s, d, left, right, ((int64_t)(i_immediate)), ((int64_t)(i_shift)), (i_accumulator != 0));
}

static inline __attribute__((always_inline, unused)) void compactVectorEor3(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    r_vectorEor3(s, d, left, right, ((int64_t)(i_accumulator)));
}

static inline __attribute__((always_inline, unused)) void compactPairStoreVector(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type base = s->x[left];
    __auto_type address = addOffset(base, ((int64_t)(((int16_t)(i_immediate)))));
    r_storeVector(s, d, address, 16);
    r_storeVector(s, ((int64_t)(i_right)), (address + 16), 16);
}

static inline __attribute__((always_inline, unused)) void compactVectorTable1(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    r_vectorTable(s, d, (int64_t[]){left}, right, 1);
}

static inline __attribute__((always_inline, unused)) void compactVectorTable4(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    r_vectorTable(s, d, (int64_t[]){left, (left + 1), (left + 2), (left + 3)}, right, 4);
}

static inline __attribute__((always_inline, unused)) void compactVectorExtractNarrow(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    r_vectorExtractNarrow(s, d, left, ((int64_t)(i_immediate)), ((int64_t)(i_shift)));
}

static inline __attribute__((always_inline, unused)) void compactVectorShiftRightNarrow(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    r_vectorShiftRightNarrow(s, d, left, ((int64_t)(i_immediate)), ((int64_t)(i_accumulator)), ((int64_t)(i_shift)));
}

static inline __attribute__((always_inline, unused)) void compactVectorUnzipEven(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    r_vectorUnzipEven(s, d, left, right, ((int64_t)(i_immediate)), ((int64_t)(i_shift)));
}

static inline __attribute__((always_inline, unused)) void compactVectorNegateFloat64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = (r_vectorLane(s, left, 0, 64) ^ ((((uint64_t)(1)) << 63)));
    r_clearVector(s, d);
    r_setVectorLane(s, d, 0, 64, value);
}

static inline __attribute__((always_inline, unused)) void compactVectorUnsignedShiftRight(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    r_vectorUnsignedShiftRight(s, d, left, ((int64_t)(i_immediate)), ((int64_t)(i_accumulator)), ((int64_t)(i_shift)));
}

static inline __attribute__((always_inline, unused)) void compactVectorToW(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)(((uint32_t)(r_vectorLane(s, left, ((int64_t)(i_immediate)), 32)))));
}

static inline __attribute__((always_inline, unused)) void compactVectorUnsignedShift(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    r_vectorUnsignedShift(s, d, left, right, ((int64_t)(i_immediate)), ((int64_t)(i_shift)));
}

static inline __attribute__((always_inline, unused)) void compactVectorMove128(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    memcpy(s->vectors[d], s->vectors[left], 16);
}

static inline __attribute__((always_inline, unused)) void compactWToVectorLane(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    r_setVectorLane(s, d, ((int64_t)(i_immediate)), 32, ((uint64_t)(((uint32_t)(s->x[left])))));
}

static inline __attribute__((always_inline, unused)) void compactAndsImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type immediate = ((((uint32_t)(i_immediate)) | (((uint32_t)(i_right)) << 16)) | (((uint32_t)(i_accumulator)) << 24));
    __auto_type value = (((uint32_t)(s->x[left])) & immediate);
    s->x[d] = ((uint64_t)(value));
    r_test32(s, value);
}

static inline __attribute__((always_inline, unused)) void compactASRReg32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)(((uint32_t)(shiftRightArithmetic(s->x[left], ((int64_t)(s->x[right])), 32)))));
}

static inline __attribute__((always_inline, unused)) void compactASRImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = shiftRightArithmetic(s->x[left], ((int64_t)(i_shift)), 64);
}

static inline __attribute__((always_inline, unused)) void compactBFI64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = insertBits(s->x[d], s->x[left], ((int64_t)(i_shift)), ((int64_t)(i_immediate)), 64);
}

static inline __attribute__((always_inline, unused)) void compactBicLSR32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) & ~(((uint32_t)(shiftRight(s->x[right], ((int64_t)(i_shift)), 32)))))));
}

static inline __attribute__((always_inline, unused)) void compactCMNLSL64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left, right = i_right;
    (void)r_addWithCarry(s, s->x[left], shiftLeft(s->x[right], ((int64_t)(i_shift)), 64), false, 64);
}

static inline __attribute__((always_inline, unused)) void compactCmpUXTH32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left, right = i_right;
    r_compare32(s, ((uint32_t)(s->x[left])), ((uint32_t)(((uint16_t)(s->x[right])))));
}

static inline __attribute__((always_inline, unused)) void compactEon64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] ^ (~s->x[right]));
}

static inline __attribute__((always_inline, unused)) void compactXorASR32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) ^ ((uint32_t)(shiftRightArithmetic(s->x[right], ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactLoadPostIndex32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    int64_t width = 8;
    {
        width = 4;
    }
    __auto_type value = r_load(s, s->x[left], width);
    if ((width == 4))
    {
        value = ((uint64_t)(((uint32_t)(value))));
    }
    s->x[d] = value;
    s->x[left] = addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate)))));
}

static inline __attribute__((always_inline, unused)) void compactLoadPostIndex64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    int64_t width = 8;

    __auto_type value = r_load(s, s->x[left], width);
    if ((width == 4))
    {
        value = ((uint64_t)(((uint32_t)(value))));
    }
    s->x[d] = value;
    s->x[left] = addOffset(s->x[left], ((int64_t)(((int16_t)(i_immediate)))));
}

static inline __attribute__((always_inline, unused)) void compactLoadHalfUXTW32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = r_load(s, (s->x[left] + shiftLeft(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 64)), 2);
    s->x[d] = ((uint64_t)(((uint16_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactMovMaxIntMinusOne(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = ((uint64_t)(0x7ffffffffffffffe));
}

static inline __attribute__((always_inline, unused)) void compactOrLSR32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) | ((uint32_t)(shiftRight(s->x[right], ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactOrHigh32Imm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = (s->x[left] | ((uint64_t)(0xffffffff00000000)));
}

static inline __attribute__((always_inline, unused)) void compactRev32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)(bits_ReverseBytes32(((uint32_t)(s->x[left])))));
}

static inline __attribute__((always_inline, unused)) void compactSBFIZ32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = shiftLeft(signExtendBits(s->x[left], ((int64_t)(i_immediate)), 32), ((int64_t)(i_shift)), 32);
}

static inline __attribute__((always_inline, unused)) void compactSBFX32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = signExtendBits(shiftRight(s->x[left], ((int64_t)(i_shift)), 32), ((int64_t)(i_immediate)), 32);
}

static inline __attribute__((always_inline, unused)) void compactStoreSPHalf32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    r_storeValue(s, addOffset(s->sp, ((int64_t)(i_immediate))), ((uint64_t)(((uint16_t)(s->x[d])))), 2);
}

static inline __attribute__((always_inline, unused)) void compactSub64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] - s->x[right]);
}

static inline __attribute__((always_inline, unused)) void compactAdd64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] + s->x[right]);
}

static inline __attribute__((always_inline, unused)) void compactXor32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) ^ ((uint32_t)(s->x[right])))));
}

static inline __attribute__((always_inline, unused)) void compactStoreSXTW32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type address = (s->x[left] + shiftLeft(signExtend32(((uint32_t)(s->x[right]))), ((int64_t)(i_shift)), 64));
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = ((uint64_t)(((uint32_t)(s->x[d]))));
    }
    r_storeValue(s, address, value, 4);
}

static inline __attribute__((always_inline, unused)) void compactCmp32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left, right = i_right;
    r_compare32(s, ((uint32_t)(s->x[left])), ((uint32_t)(s->x[right])));
}

static inline __attribute__((always_inline, unused)) void compactMul32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) * ((uint32_t)(s->x[right])))));
}

static inline __attribute__((always_inline, unused)) void compactLoadSXTW64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = r_load(s, (s->x[left] + shiftLeft(signExtend32(((uint32_t)(s->x[right]))), ((int64_t)(i_shift)), 64)), 8);
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactMov64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = s->x[left];
}

static inline __attribute__((always_inline, unused)) void compactMovImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = ((uint64_t)(i_immediate));
}

static inline __attribute__((always_inline, unused)) void compactStoreSP32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    __auto_type value = ((uint64_t)(0));
    if ((i_left < 31))
    {
        value = ((uint64_t)(((uint32_t)(s->x[left]))));
    }
    r_storeValue(s, addOffset(s->sp, ((int64_t)(i_immediate))), value, 4);
}

static inline __attribute__((always_inline, unused)) void compactMovImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = ((uint64_t)(((uint32_t)(i_immediate))));
}

static inline __attribute__((always_inline, unused)) void compactMovK32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[d])))), ((uint64_t)(i_immediate)), ((int64_t)(i_shift)), 16, 32)))));
}

static inline __attribute__((always_inline, unused)) void compactUDiv32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)(((uint32_t)(unsignedDivide(((uint64_t)(((uint32_t)(s->x[left])))), ((uint64_t)(((uint32_t)(s->x[right])))), 32)))));
}

static inline __attribute__((always_inline, unused)) void compactMSub32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[i_accumulator])) - (((uint32_t)(s->x[left])) * ((uint32_t)(s->x[right]))))));
}

static inline __attribute__((always_inline, unused)) void compactLoadSP32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    __auto_type value = r_load(s, addOffset(s->sp, ((int64_t)(i_immediate))), 4);
    s->x[d] = ((uint64_t)(((uint32_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactUMull32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (((uint64_t)(((uint32_t)(s->x[left])))) * ((uint64_t)(((uint32_t)(s->x[right])))));
}

static inline __attribute__((always_inline, unused)) void compactLoadUXTW8(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = r_load(s, (s->x[left] + ((uint64_t)(((uint32_t)(s->x[right]))))), 1);
    s->x[d] = ((uint64_t)(((uint32_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactLSRImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = shiftRight(s->x[left], ((int64_t)(i_shift)), 64);
}

static inline __attribute__((always_inline, unused)) void compactMov32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)(((uint32_t)(s->x[left]))));
}

static inline __attribute__((always_inline, unused)) void compactOr32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) | ((uint32_t)(s->x[right])))));
}

static inline __attribute__((always_inline, unused)) void compactSub32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) - ((uint32_t)(s->x[right])))));
}

static inline __attribute__((always_inline, unused)) void compactAndLSL32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) & ((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactAddSPShiftImm64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = (s->sp + shiftLeft(((uint64_t)(i_immediate)), ((int64_t)(i_shift)), 64));
}

static inline __attribute__((always_inline, unused)) void compactLoadBaseImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = r_load(s, addOffset(s->x[left], ((int64_t)(i_immediate))), 4);
    s->x[d] = ((uint64_t)(((uint32_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactExtract32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)(((uint32_t)(extractPair(((uint64_t)(((uint32_t)(s->x[left])))), ((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 32)))));
}

static inline __attribute__((always_inline, unused)) void compactNot32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)((~((uint32_t)(s->x[left])))));
}

static inline __attribute__((always_inline, unused)) void compactLSRImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[left])))), ((int64_t)(i_shift)), 32)))));
}

static inline __attribute__((always_inline, unused)) void compactLoadSP64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    __auto_type value = r_load(s, addOffset(s->sp, ((int64_t)(i_immediate))), 8);
    s->x[d] = value;
}

static inline __attribute__((always_inline, unused)) void compactMovImm32High(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = ((uint64_t)((((uint32_t)(i_immediate)) << 16)));
}

static inline __attribute__((always_inline, unused)) void compactAddImmShift32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) + (((uint32_t)(i_immediate)) << i_shift))));
}

static inline __attribute__((always_inline, unused)) void compactLSLImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[left])))), ((int64_t)(i_shift)), 32)))));
}

static inline __attribute__((always_inline, unused)) void compactXorLSL32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) ^ ((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactStoreBase32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    r_storeValue(s, s->x[left], ((uint64_t)(((uint32_t)(s->x[d])))), 4);
}

static inline __attribute__((always_inline, unused)) void compactLoadUXTW32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type value = r_load(s, (s->x[left] + shiftLeft(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 64)), 4);
    s->x[d] = ((uint64_t)(((uint32_t)(value))));
}

static inline __attribute__((always_inline, unused)) void compactMovNegOne32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = ((uint64_t)((~((uint32_t)(0)))));
}

static inline __attribute__((always_inline, unused)) void compactMovK64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = insertBits(s->x[d], ((uint64_t)(i_immediate)), ((int64_t)(i_shift)), 16, 64);
}

static inline __attribute__((always_inline, unused)) void compactAddLSL32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) + ((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactXorLSR32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) ^ ((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactLSRReg32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[left])))), ((int64_t)(s->x[right])), 32)))));
}

static inline __attribute__((always_inline, unused)) void compactStoreUXTW8(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type address = (s->x[left] + ((uint64_t)(((uint32_t)(s->x[right])))));
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = ((uint64_t)(((uint8_t)(s->x[d]))));
    }
    r_storeValue(s, address, value, 1);
}

static inline __attribute__((always_inline, unused)) void compactUMulH64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = multiplyHigh64(s->x[left], s->x[right]);
}

static inline __attribute__((always_inline, unused)) void compactMAdd32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)(((((uint32_t)(s->x[left])) * ((uint32_t)(s->x[right]))) + ((uint32_t)(s->x[i_accumulator])))));
}

static inline __attribute__((always_inline, unused)) void compactMAdd64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((s->x[left] * s->x[right]) + s->x[i_accumulator]);
}

static inline __attribute__((always_inline, unused)) void compactAdds64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = r_addWithCarry(s, s->x[left], s->x[right], false, 64);
}

static inline __attribute__((always_inline, unused)) void compactADC32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    __auto_type assign0 = ((uint32_t)(0));
    __auto_type assign1 = ((uint32_t)(0));
    __auto_type leftValue = assign0;
    __auto_type rightValue = assign1;
    if ((i_left < 31))
    {
        leftValue = ((uint32_t)(s->x[left]));
    }
    if ((i_right < 31))
    {
        rightValue = ((uint32_t)(s->x[right]));
    }
    s->x[d] = ((uint64_t)(((leftValue + rightValue) + ((uint32_t)(boolValue(s->c))))));
}

static inline __attribute__((always_inline, unused)) void compactCMN64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left, right = i_right;
    (void)r_addWithCarry(s, s->x[left], s->x[right], false, 64);
}

static inline __attribute__((always_inline, unused)) void compactCmpImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int left = i_left;
    r_compare32(s, ((uint32_t)(s->x[left])), ((uint32_t)(i_immediate)));
}

static inline __attribute__((always_inline, unused)) void compactCSet32HI(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "hi"))))));
}

static inline __attribute__((always_inline, unused)) void compactStoreBaseImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type value = ((uint64_t)(0));
    if ((i_destination < 31))
    {
        value = ((uint64_t)(((uint32_t)(s->x[d]))));
    }
    r_storeValue(s, addOffset(s->x[left], ((int64_t)(i_immediate))), value, 4);
}

static inline __attribute__((always_inline, unused)) void compactMul64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] * s->x[right]);
}

static inline __attribute__((always_inline, unused)) void compactSubImmShift32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) - (((uint32_t)(i_immediate)) << i_shift))));
}

static inline __attribute__((always_inline, unused)) void compactXorImm32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left;
    __auto_type immediate = ((((uint32_t)(i_immediate)) | (((uint32_t)(i_right)) << 16)) | (((uint32_t)(i_accumulator)) << 24));
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) ^ immediate)));
}

static inline __attribute__((always_inline, unused)) void compactSubLSL32(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = ((uint64_t)((((uint32_t)(s->x[left])) - ((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[right])))), ((int64_t)(i_shift)), 32))))));
}

static inline __attribute__((always_inline, unused)) void compactMovImm32Wide(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination;
    s->x[d] = ((uint64_t)(((((uint32_t)(i_immediate)) | (((uint32_t)(i_right)) << 16)) | (((uint32_t)(i_accumulator)) << 24))));
}

static inline __attribute__((always_inline, unused)) void compactAnd64(RState *s, uint8_t i_destination, uint8_t i_left, uint8_t i_right, uint8_t i_accumulator, uint8_t i_shift, uint16_t i_immediate) {
    int d = i_destination, left = i_left, right = i_right;
    s->x[d] = (s->x[left] & s->x[right]);
}
