//FILA
#ifndef _FILA_H_
#define _FILA_H_

//inclusao das bibliotecas
#include<stdio.h>
#include<stdlib.h>

#define MAX 10

// Definicao da estrutura fila
struct est_fila{
    int vet_fila[MAX];
    int cont;
};

typedef struct est_fila tipo_fila;
// Protótipo das funcoes
void insere_fila(tipo_fila *, int);
int remove_fila (tipo_fila*);
void imprime_fila(tipo_fila);

#endif