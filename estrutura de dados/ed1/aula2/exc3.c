/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
Atividade 3
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    int a, b, menor, maior;

    scanf("%d %d", &a, &b);
    if(a < b){
        menor = a;
        maior = b;
    }else{
        menor = b;
        maior = a;
    }

    if((maior - menor) != 1){
        menor++;
        do{
        printf("Contagem... %d\n", menor);
        menor++;
        }while(menor < maior);
    }else if((maior -  menor) == 1){
        printf("Não há números inteiros entre %d e %d.\n", menor, maior);
    }

    system("pause");

    return 0;

}