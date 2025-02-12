/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
Atividade 2
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    char l1,l2,l3,l4, maior, menor;
    //maior = l1;

    scanf("%c %c %c %c",&l1,&l2,&l3,&l4);

    if(l2 > l1 && l2 > l3 && l2 > l4){
        maior = l2;
    }else if( l1 > l2 && l1 > l3 && l1 > l4){
        maior = l1;
    }else if(l3 > l1 && l3 > l2 && l3> l4){
        maior = l3;
    }else{
        maior = l4;
    }

    if(l2 < l1 && l2 < l3 && l2 < l4){
        menor = l2;
    }else if( l1 < l2 && l1 < l3 && l1 < l4){
        menor = l1;
    }else if(l3 < l1 && l3 < l2 && l3 < l4){
        menor = l3;
    }else{
        menor = l4;
    }

    printf("A maior letra é : %c\n ", maior);
    printf("A menor letra é : %c\n ", menor);
    
    system("pause"); 
    
    return 0;

}