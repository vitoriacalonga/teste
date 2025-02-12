//FILA
#ifndef _PILHA_H_
#define _PILHA_H_

//inclusao das bibliotecas
#include<stdio.h>
#include<stdlib.h>

#define MAX 10

// Definicao da estrutura fila
struct est_pilha{
    int vet_pilha[MAX];
    int cont;
};

typedef struct est_pilha tipo_pilha;
// Protótipo das funcoes
void insere_fila(tipo_pilha*, int);
int remove_fila (tipo_pilha*);
void imprime_fila(tipo_pilha);

#endif