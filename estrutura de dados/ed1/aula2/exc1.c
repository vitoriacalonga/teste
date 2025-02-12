/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
Atividade 1
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, y, z, media;
    scanf("%f %f %f", &x, &y, &z);

    media = ((x+y+z)/3);

    if(media == x || media == y || media == z){
        printf("Ha valores iguais a media\n");
        if(media == x){
            printf("O primeiro valor e igual a media\n");
            if(media==y){
                printf("O segundo valor tambem e igual a media\n");
            }
            if(media ==z){
                printf("O terceiro valor tambem e igual a media\n");
            }
        }else if(media == y){
            printf("O segundo valor e igual a media\n");
            if(media ==z){
                printf("O terceiro valor tambem e igual a media\n");
            }
        }else if(media==z){
            printf("O terceiro valor e igual a media\n");
        }
    }else{
        printf("Nao ha valores iguais a media\n");
    }

    system("pause");

    return 0;

}