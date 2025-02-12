/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
Atividade 2 aula 3
09/12/2024
*/

#include <stdio.h>
#include <stdlib.h>

#define TAMVET 5

int main(){
    int vet1[TAMVET], vet2[TAMVET], resultado[TAMVET], maior = 0, menor =10000000;

    for(int i = 0; i < TAMVET; i ++){
        printf("Informe o valor %d do primeiro vetor:\n", 1+i);
        scanf("%d", &vet1[i]);
        printf("Informe o valor %d do segundo vetor:\n", 1+i);
        scanf("%d", &vet2[i]);
        
    } 

    printf("\nVETOR RESULTANTE:");
    int k;
    for(int i = 0; i < TAMVET; i ++){
        k = ((TAMVET-1) - i);
        resultado[i] = vet1[i] + vet2[k];
        printf(" %d ", resultado[i]);
        if(resultado[i] > maior){
            maior = resultado[i];
        }
        if(resultado[i] < menor){
            menor = resultado[i];
        }
    } 

    printf("\n\nMAIOR E MENOR NUMERO DO VETOR RESULTANTE\n");
    
    printf("MAIOR: %d\n", maior);
    printf("MENOR: %d\n", menor);
    
    

    return 0;

}