#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct stack {
    int* data;
    int top;
    int size;
};

Stack* new_stack(int size) {
    Stack* s = (Stack*) malloc(sizeof(Stack));
    s->data = (int*) malloc(sizeof(int) * size);
    s->top = 0;
    s->size = size;
    return s;
}

void stack_push(Stack* s, int value) {
    if (s->top == s->size) {
        printf("Erro: pilha cheia.\n");
        return;
    }
    s->data[s->top++] = value;
}

int stack_pop(Stack* s) {
    if (s->top == 0) {
        printf("Erro: pilha vazia.\n");
        return -1;
    }
    return s->data[--s->top];
}

void stack_print(Stack* s) {
    printf("Pilha: ");
    for (int i = 0; i < s->top; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

int stack_is_empty(Stack* s) {
    return s->top == 0;
}

void free_stack(Stack* s) {
    free(s->data);
    free(s);
}
