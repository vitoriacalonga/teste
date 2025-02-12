/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
exemplo de funcao por referencia
16/12/2024
*/

#include <stdio.h>
#include <stdlib.h>

//prototipacao de funcoes
int multiplica(int*, int*);//parametro por referencia
int soma(int, int); //parametro por copia

int main() {
    int x, y, resultado;

    printf("Informe o valor 1: ");
    scanf("%d", &x);
    printf("Informe o valor 2: ");
    scanf("%d", &y);

    resultado = soma(x,y);
    printf("RESULTADO DA SOMA = %d\n", resultado);

    resultado = multiplica(&x, &y);
    printf("RESULTADO DA MULTIPLICACAO = %d\n", resultado);

    return 0;
    
};

//IMPLEMENTACAO DA FUNCAO
int soma(int v1, int v2){
    v1 *= 2;//o comando "*=" multiplica ele mesmo pelo proximo valor 
    v2 *= 2;
    return v1 + v2;
}

//implementacao da funcao multiplica
int multiplica(int *v1, int *v2){
    *v1 *=2;
    *v2 *= 2;
    return *v1 * *v2;
}
