/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
Atividade 5
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    int valor;
    scanf("%d", &valor);

    printf("%d / 3 = %d\n", valor, valor/3);
    printf("Resto da divisao: %d\n", valor % 3);

    system("pause");

    return 0;

}