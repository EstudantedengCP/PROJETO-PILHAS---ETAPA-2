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
    char op[10];
    char arg[10];
    sscanf(source, "%s %s", op, arg);

    if (strcmp(op, "push") == 0) {
        int value = atoi(arg);
        stack_push(s, value);
    } else if (strcmp(op, "pop") == 0) {
        stack_pop(s);
    } else if (strcmp(op, "add") == 0) {
        int b = stack_pop(s);
        int a = stack_pop(s);
        stack_push(s, a + b);
    } else if (strcmp(op, "sub") == 0) {
        int b = stack_pop(s);
        int a = stack_pop(s);
        stack_push(s, a - b);
    } else if (strcmp(op, "mul") == 0) {
        int b = stack_pop(s);
        int a = stack_pop(s);
        stack_push(s, a * b);
    } else if (strcmp(op, "div") == 0) {
        int b = stack_pop(s);
        int a = stack_pop(s);
        if (b != 0) stack_push(s, a / b);
        else printf("Erro: divisão por zero.\n");
    } else if (strcmp(op, "print") == 0) {
        stack_print(s);
    } else {
        printf("Comando inválido: %s\n", op);
    }
}
