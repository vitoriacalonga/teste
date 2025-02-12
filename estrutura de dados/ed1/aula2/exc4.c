/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
Atividade 4
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    int n1, n2, mult = 0;

    scanf("%d %d", &n1, &n2);

    for(int i = 0; i < n2; i++){
        mult = mult + n1;
    }

    printf("%d x %d = %d\n", n1, n2, mult);

    system("pause");
    return 0;

}