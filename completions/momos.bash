# Bash 3.2+; no bash-completion package required.
_momos() {
    local current="${COMP_WORDS[COMP_CWORD]}" previous="${COMP_WORDS[COMP_CWORD-1]}"
    local item word files=false
    COMPREPLY=()
    for word in "${COMP_WORDS[@]:1:COMP_CWORD-1}"; do
        [[ "$word" == -- ]] && files=true
    done
    if [[ "$previous" != --model && "$files" == false && "$current" == -* ]]; then
        while IFS= read -r item; do COMPREPLY[${#COMPREPLY[@]}]="$item"; done < <(
            compgen -W '--model --help -h --version --' -- "$current"
        )
    else
        while IFS= read -r item; do COMPREPLY[${#COMPREPLY[@]}]="$item"; done < <(
            compgen -f -- "$current"
        )
    fi
}
complete -o default -o filenames -F _momos momos
