#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"
#include "lista.h"

extern struct stack s;
extern struct list vars;

void interpret(char* line) {
    char cmd[20], arg[20];
    int x, found;

    if (sscanf(line, "push %s", arg) == 1) {
        if (sscanf(arg, "%d", &x) == 1) {
            push(&s, x);  // Número inteiro
        } else {
            int val = get_variable(&vars, arg, &found);
            if (found) {
                push(&s, val);
            } else {
                printf("Erro: Variável '%s' não encontrada\n", arg);
            }
        }
    } else if (sscanf(line, "pop %s", arg) == 1) {
        if (pop(&s, &x)) {
            set_variable(&vars, arg, x);
        } else {
            printf("Erro: pilha vazia\n");
        }
    }
    // outros comandos (add, sub, print etc.)
}
