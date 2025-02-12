//incluir a biblioteca
#include "fila.h"

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