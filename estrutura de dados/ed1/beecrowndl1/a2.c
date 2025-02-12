/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios Beecrownd
Atividade 2
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int maior = a;
    if(b > maior && b > c){
        maior = b;
    }else if(c > maior && c > b){
        maior = c;
    }
    
    printf("%d eh o maior\n", maior);
    return 0;
}