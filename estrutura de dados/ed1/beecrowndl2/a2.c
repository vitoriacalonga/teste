/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios Beecrownd lista 2
Atividade 1
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 12

int main(){
    char verifica;
    float mtz[TAM][TAM], resultado = 0;

    //preenche a matriz com numeros aleatorios utilizando a funcao rand
    /*for( int i = 0; i < TAM; i++){
        for(int j = i+1; j < TAM ; j++){
            mtz[i][j] = 1.0;
        }
    }*/
    printf("teste\n");

    scanf("%c", &verifica);

    for( int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM ; j++){
            scanf("%f", &mtz[i][j]);
        }
    }

    //verifica qual operacao ira rodar
    if(verifica == 'S'){
        for(int i = 0; i < TAM; i++){
            for(int j = i+1; j < TAM ; j++){
                resultado += mtz[i][j];
            }
        }
    }
    else if(verifica == 'M'){
        float k = 0;
        for(int i = 0; i < TAM; i++){
            for(int j = i+1; j < TAM ; j++){
                resultado += mtz[i][j];
                k++;
            }
        }
        resultado = resultado /k;
    }

    printf("%.1f\n", resultado);
    

    return 0;
}