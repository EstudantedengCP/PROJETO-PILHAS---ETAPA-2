#ifndef LISTA_H
#define LISTA_H

struct node {
    char key[15];
    int value;
    struct node* next;
};

struct list {
    struct node* first;
};

// Insere ou atualiza uma variável
void set_variable(struct list* l, const char* key, int value);

// Busca uma variável
int get_variable(struct list* l, const char* key, int* found);

// Inicializa lista
void init_list(struct list* l);

#endif
