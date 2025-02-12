/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios Beecrownd
Atividade 1
*/

#include <stdio.h>
#include <stdlib.h>

struct est_funcionario{
    int number;
    int horas;
    float valorhr;
    float salario;
};

typedef struct est_funcionario funcionario;
int main(){
    funcionario funcionarios;
    scanf("%d %d %f", &funcionarios.number, &funcionarios.horas, &funcionarios.valorhr);

    funcionarios.salario = (funcionarios.horas*funcionarios.valorhr);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", funcionarios.number, funcionarios.salario);
    return 0;
}