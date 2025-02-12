/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
estrutura de dados - pilha
06/02/2025

implementar:
fila - inserção, remoção e impressão
pilha - empilhar, desempilhar, topo, impressão(apenas para visualizacao)

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// Definicao da estrutura fila
struct est_fila{
    int vet_fila[MAX];
    int cont;
};

typedef struct est_fila tipo_fila;

//definicao da estrutura pilha
struct est_pilha{
    int vet_pilha[MAX];
    int cont;
};

typedef struct est_pilha tipo_pilha;

// Protótipo das funcoes
void insere_fila(tipo_fila *, int);
int remove_fila (tipo_fila*);
void imprime_fila(tipo_fila);

void empilha(tipo_pilha*, int);
int desempilha(tipo_pilha*);
int topo(tipo_pilha);
void imprime_pilha(tipo_pilha);

// Função principal

int main(/*int argc, char *argv[]*/){//procurar sobre os arg do parametro
    tipo_fila minha_fila;
    tipo_pilha minha_pilha;
    minha_fila.cont = 0;
    minha_pilha.cont = 0;
    int valor;

    for(int i = 0; i < 10; i++){
        scanf("%d", &valor);
        insere_fila(&minha_fila, valor);
    }


    empilha(&minha_pilha, 11); 
    empilha(&minha_pilha, 22);
    empilha(&minha_pilha, 33);
    empilha(&minha_pilha, 44);

    imprime_fila(minha_fila);
    imprime_pilha(minha_pilha);

    printf("Removido: %d\n", remove_fila(&minha_fila));
    printf("Removido: %d\n", desempilha(&minha_pilha));

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

//funcao que empilha
void empilha(tipo_pilha *pl, int vl){
    if(pl->cont < MAX){
        pl->vet_pilha[pl->cont] = vl;
        pl->cont++;
    }
    else{
        printf("[ATENCAO] Estrutura PILHA esta cheia! Valor nao foi inserido.\n");
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

//funcao imprime pilha


/*---------------------------------
--diferença entre o . para acessar memoria e a ->:-
o ponto usamos quando queremos acesar diretamente aql variavel sem interferir, 
já a setinha usamos no lugar do * quando estamos manipulando ponteiro
---------------------------------*/

//funcao topo
int topo(tipo_pilha pl){
    int aux;

    //verifica se a pilha tem valor
    if(pl.cont > 0){
        aux = pl.vet_pilha[pl.cont];
    }
    else{
        printf("[ATENCAO] Pilha esta vazia. Nao ha valor a ser retornado.\n");
    }
    return aux;
}

//funcao desempilha
int desempilha(tipo_pilha *pl){
    int aux;
    if(pl->cont > 0){
        aux = pl->vet_pilha[pl->cont];
        for(int i = pl->cont; pl->cont-1;i++){
            pl->vet_pilha[i] = 0;
        }
        pl->cont--;
    }
    else{
        printf("[ATENCAO] Pilha esta vazia. Nao ha valor a ser retornado.\n");
    }
    return aux;
}


//remove fila
int remove_fila(tipo_fila *fl){
    int aux;
    //verifica se fila tem valor
    if(fl->cont > 0){
        aux = fl->vet_fila[0]; //armazena o primeiro valor da fila, para retorna-lo
        for(int i = 0; fl->cont-1;i++){
            fl->vet_fila[i]=fl->vet_fila[i+1];
        }
        fl->cont--;
    }
    else{
        printf("[ATENCAO] Fila esta vazia. Nao ha valor a ser retornado.\n");
    }
    return aux;
}
