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

/**
 * @brief Estrutura para representar uma fila.
 */
struct est_fila{
    int vet_fila[MAX]; /**< Vetor que armazena os elementos da fila. */
    int cont; /**< Contador que indica o número de elementos na fila. */
};

typedef struct est_fila tipo_fila;

/**
 * @brief Estrutura para representar uma pilha.
 */
struct est_pilha{
    int vet_pilha[MAX]; /**< Vetor que armazena os elementos da pilha. */
    int cont; /**< Contador que indica o número de elementos na pilha. */
};

typedef struct est_pilha tipo_pilha;

/**
 * @brief Insere um elemento na fila.
 * 
 * @param fl Ponteiro para a estrutura da fila.
 * @param vl Valor a ser inserido na fila.
 */
void insere_fila(tipo_fila *fl, int vl);

/**
 * @brief Remove um elemento da fila.
 * 
 * @param fl Ponteiro para a estrutura da fila.
 * @return int Valor removido da fila.
 */
int remove_fila (tipo_fila* fl);

/**
 * @brief Imprime todos os elementos da fila.
 * 
 * @param fl Estrutura da fila.
 */
void imprime_fila(tipo_fila fl);

/**
 * @brief Empilha um elemento na pilha.
 * 
 * @param pl Ponteiro para a estrutura da pilha.
 * @param vl Valor a ser empilhado.
 */
void empilha(tipo_pilha* pl, int vl);

/**
 * @brief Desempilha um elemento da pilha.
 * 
 * @param pl Ponteiro para a estrutura da pilha.
 * @return int Valor desempilhado.
 */
int desempilha(tipo_pilha* pl);

/**
 * @brief Retorna o elemento do topo da pilha.
 * 
 * @param pl Estrutura da pilha.
 * @return int Valor no topo da pilha.
 */
int topo(tipo_pilha pl);

/**
 * @brief Imprime todos os elementos da pilha.
 * 
 * @param pl Estrutura da pilha.
 */
void imprime_pilha(tipo_pilha pl);

/**
 * @brief Função principal.
 * 
 * @return int 
 */
int main(){
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

void insere_fila(tipo_fila *fl, int vl){
    // Verifica se a fila está cheia
    if(fl->cont < MAX){
        fl->vet_fila[fl->cont++] = vl;
    }else{
        printf("[ATENCAO] Estrutura FILA esta cheia! Valor nao foi inserido.\n");
    }
}

void empilha(tipo_pilha *pl, int vl){
    if(pl->cont < MAX){
        pl->vet_pilha[pl->cont] = vl;
        pl->cont++;
    }else{
        printf("[ATENCAO] Estrutura PILHA esta cheia! Valor nao foi inserido.\n");
    }
}

void imprime_fila(tipo_fila fl){
    if(fl.cont == 0){
        printf("Fila vazia\n");
    }else{
        printf("FILA: [");
        for(int i = 0; i < fl.cont; i++){
            printf("%d ", fl.vet_fila[i]);
        }
        printf("]\t\n");
    }
}

int topo(tipo_pilha pl){
    int aux;
    // Verifica se a pilha tem valor
    if(pl.cont > 0){
        aux = pl.vet_pilha[pl.cont];
    }else{
        printf("[ATENCAO] Pilha esta vazia. Nao ha valor a ser retornado.\n");
    }
    return aux;
}

int desempilha(tipo_pilha *pl){
    int aux;
    if(pl->cont > 0){
        aux = pl->vet_pilha[pl->cont];
        for(int i = pl->cont; pl->cont-1; i++){
            pl->vet_pilha[i] = 0;
        }
        pl->cont--;
    }else{
        printf("[ATENCAO] Pilha esta vazia. Nao ha valor a ser retornado.\n");
    }
    return aux;
}

int remove_fila(tipo_fila *fl){
    int aux;
    // Verifica se a fila tem valor
    if(fl->cont > 0){
        aux = fl->vet_fila[0]; // Armazena o primeiro valor da fila, para retorná-lo
        for(int i = 0; fl->cont-1; i++){
            fl->vet_fila[i]=fl->vet_fila[i+1];
        }
        fl->cont--;
    }else{
        printf("[ATENCAO] Fila esta vazia. Nao ha valor a ser retornado.\n");
    }
    return aux;
}
