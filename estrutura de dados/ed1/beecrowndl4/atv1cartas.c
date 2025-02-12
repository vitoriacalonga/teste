#include<stdio.h>
#include<stdlib.h>

#define MAX 50

struct est_fila{
    int vet_fila[MAX];
    int cont;
};

typedef struct est_fila tipo_fila;

void cria_fila(tipo_fila*, int);
void descarta(tipo_fila*);

int main(){
    tipo_fila fila;
    int n;

    scanf("%d", &n);
    while(n > 0){
        fila.cont = 0;
        cria_fila(&fila, n);
        printf("Discarded cards: ");
        descarta(&fila);

        scanf("%d", &n);
    }

    return 0;
}

void cria_fila(tipo_fila *fl, int n){
    for(int i = 0; i < n; i++){
        fl->vet_fila[i] = i + 1;
        fl->cont++;
    }
    //fl->cont = n; //o contador tem que receber o valor de n p que ele saiba exatamente onde esta o "topo"
}

void descarta(tipo_fila *fl){
    int aux;

    while(fl->cont > 1){
        printf("%d", fl->vet_fila[0]);//mostra a carta descartada que é a do "topo", na posição 0

        aux = fl->vet_fila[1];//guarda a carta da posição seguinte da que foi descartada para adicionar na "base"
        for(int i = 0 ; i < fl->cont-1; i++){
            fl->vet_fila[i] = fl->vet_fila[i+2];
        }
        fl->cont--;
        fl->vet_fila[fl->cont-1] = aux;

        if(fl->cont > 1){
            printf(", ");
        }
    }

    printf("\nRemaining card: %d\n", fl->vet_fila[fl->cont-1]);
}

