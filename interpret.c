#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interpret.h"
#include "stack.h"

static Stack* s;

void interpreter_init() {
    s = new_stack(100);
}

void interpret(const char* source) {
    printf("[DEBUG] interpret foi chamado com: %s\n", source);

    char op[32] = {0};
    char arg[32] = {0};

    char copia[128];
strncpy(copia, source, sizeof(copia));
copia[strcspn(copia, "\n")] = 0; 

char* token = strtok(copia, " ");
if (token != NULL) {
    strncpy(op, token, sizeof(op));
    token = strtok(NULL, " ");
    if (token != NULL) {
        strncpy(arg, token, sizeof(arg));
    }
}
    printf("operação: %s\n", op);
    printf("argumento: %s\n", arg);


    if (strcmp(op, "push") == 0) {
        printf("empilhar %s\n", arg); 
        int value = atoi(arg);
        stack_push(s, value);
        printf("empilhar %s\n", arg);

    } else if (strcmp(op, "pop") == 0) {
        printf("desempilhar\n");
        stack_pop(s);
    } else if (strcmp(op, "add") == 0) {
        printf("somar dois valores do topo\n");
        int b = stack_pop(s);
        int a = stack_pop(s);
        stack_push(s, a + b);
    } else if (strcmp(op, "sub") == 0) {
        printf("subtrair dois valores do topo\n");
        int b = stack_pop(s);
        int a = stack_pop(s);
        stack_push(s, a - b);
    } else if (strcmp(op, "mul") == 0) {
        printf("multiplicar dois valores do topo\n");
        int b = stack_pop(s);
        int a = stack_pop(s);
        stack_push(s, a * b);
    } else if (strcmp(op, "div") == 0) {
        printf("dividir dois valores do topo\n");
        int b = stack_pop(s);
        int a = stack_pop(s);
        if (b != 0) {
            stack_push(s, a / b);
        } else {
            printf("Erro: divisão por zero.\n");
        }
    } else if (strcmp(op, "print") == 0) {
        printf("exibir valores da pilha\n");
        stack_print(s);
    } else {
        printf("Comando inválido: %s\n", op);
    }
}
