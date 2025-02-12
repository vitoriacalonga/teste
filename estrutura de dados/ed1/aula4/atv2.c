/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
atividade de registro
12/12/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum tipo_situacao{APROVADO, REPROVADO};

struct est_alunos{
    char nome[60];
    unsigned int rga;
    float n1, n2, media;
    enum tipo_situacao situacao;
};
typedef struct est_alunos tipo_aluno;

struct est_turma{
    char nome[60];
    int cod;
    int ano;
    int qtd_alunos;
    tipo_aluno alunos[40];
};
typedef struct est_turma tipo_turmas;

#define TAM 3

int main(){
    tipo_aluno alunos[TAM];
    tipo_turmas turma1;

    for(int i =0; i < TAM; i++){
        printf("Informe o nome do aluno:");
        scanf("%s", alunos[i].nome); 
        printf("Informe o RGA do aluno:");
        scanf("%d", &alunos[i].rga);
        printf("Informe a nota 1 do aluno:");
        scanf("%f", &alunos[i].n1);
        printf("Informe a nota 2 do aluno:");
        scanf("%f", &alunos[i].n2);
        alunos[i].media = (alunos[i].n2+alunos[i].n1)/2;
        if(alunos[i].media >= 5){
            alunos[i].situacao = APROVADO;
        }else{
            alunos[i].situacao = REPROVADO;
        }
        
    }

    printf("Informe o nome da turma:");
    scanf("%s", &turma1.nome); 
    printf("Informe o codigo da turma:");
    scanf("%d", &turma1.cod);
    printf("Informe o ano da turma:");
    scanf("%d", &turma1.ano);
    printf("Informe a a quatidade de alunos da turma:");
    scanf("%d", &turma1.qtd_alunos);

    int a = 0, r = 0; 
    float mediat = 0;
    for(int i = 0; i < turma1.qtd_alunos; i++){
        turma1.alunos[i] = alunos[i];
        mediat = alunos[i].media + mediat;
        if(alunos[i].situacao == APROVADO){
            a++;
        }else{
            r++;
        }
    }

    mediat = mediat / turma1.qtd_alunos;
    printf("Media da turma %s: %f \nQuantidade de alunos Aprovados: %d \nQuantidade de alunos Reprovados: %d", turma1.nome, mediat, a, r);


    return 0;
}