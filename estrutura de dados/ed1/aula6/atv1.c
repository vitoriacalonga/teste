/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
alocacao de memoria
19/12/2024
*/
//modificar esse cod para q ele tenha uma struct com o vetor e tamanho do vetor para parar de usar o n qu eo usuario informa como parametro;

#include <stdio.h>
#include <stdlib.h>

void preenchevet(int*, int);
void copiavet(int* , int, int[]);

int main() {
    int x;
    printf("Informe quantos valores serao armazenados dentro do vetor: ");
    scanf("%d", &x);

    //cria o primeiro vetor com o tamanho que o usuario informar utilizando alocacao de memoria
    int *vet1;
    vet1 = (int*) malloc(x*(sizeof(int)));

    //preenche o primeiro vetor com os valores que o usuario informar
    preenchevet(vet1, x);

    printf("VETOR 1:\n[");
    for(int i = 0; i < x; i++){
        printf(" %d ", vet1[i]);
    }
    printf("] \n\n");

    //cria o segundo vetor para fazer a copia do primeiro
    int *vet2;
    vet2 = (int*) malloc(x*(sizeof(int)));

    copiavet(vet2, x, vet1);

    printf("VETOR 1 APOS A COPIA:\n[");
    for(int i = 0; i < x; i++){
        printf(" %d ", vet1[i]);
    }
    printf("] \n");
    printf("VETOR 2 APOS A COPIA:\n[");
    for(int i = 0; i < x; i++){
        printf(" %d ", vet1[i]);
    }
    printf("] \n");




    return 0;
    
};

void preenchevet(int* vet, int x){
    int j;
    for(int i = 0; i < x; i++){
        scanf("%d", &j);
        vet[i] = j;
    }
}

void copiavet(int* vet2, int x, int vet[]){
    for(int i = 0; i < x; i++){
        vet2[i] = vet[i];
    }
}
