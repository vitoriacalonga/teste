/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
exemplo de ponteiros
16/12/2024
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    int x = 10;

    int *pt1, *pt2;
    pt1 = &x;
    pt2 = pt1;

    *pt1 = *pt1 *2;
    *pt2 = *pt2 * 3;


    printf("x = %d\n", x);
    printf("*PT1 = %d\n", *pt1);
    printf("*PT2 = %d\n", *pt2);
   // printf("PT1 = %d\n", pt1);

    /*int *pt2;
    pt2 = (int*) malloc(sizeof(int));*///aloca um espaco suficiente par guardar um inteiro
    //pt2 = malloc(4bytes); 

    return 0;
    
};
