/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
estrutura de dados - fila
03/02/2025

defina a estrutura da fila
implemente insercao
implemente remocao
implemente impressao

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// Definicao da estrutura
struct est_fila{
    vet_fila[MAX];
    int cont;
};

typedef struct est_fila tipo_fila;

// Protótipo das funcoes
void insere_fila(tipo_fila *, int);
int remove_fila (tipo_fila*);
void imprime_fila(tipo_fila);

// Função principal

int main(int argc, char *argv[]){//procurar sobre os arg do parametro
    tipo_fila minha_fila;
    minha_fila.cont = 0;

    insere_fila(&minha_fila, 10); 
    insere_fila(&minha_fila, 20);
    insere_fila(&minha_fila, 30);
    insere_fila(&minha_fila, 40);

    imprime_fila(minha_fila);

    printf("Removido: %d\n", remove_fila(&minha_fila));
    printf("Removido: %d\n", remove_fila(&minha_fila));

    return 0;
}

//FUNCAO INSERCAOO NA FILA
void insere_fila(tipo_fila *fl, int vl){
    //verifica se a fila esta cheia
    if(fl->cont < MAX){//entender o ->
        fl->vet_fila[fl->cont++] = vl;
    }else{
        printf("[ATENCAO] Estrutura FILA esta cheia! Valor nao foi inserido.\n");
    }
}

//impreme a fila
void imprime_fila(tipo_fila fl){
    if(fl.cont == 0){
        printf("Fila vazia/n");
    }
    else{
        printf("FILA: [");
        for(int i = 0; i < fl.cont; i++){
            printf("%d ", fl.vet_fila[i]);
        }
        printf("]\t\n");
    }
}