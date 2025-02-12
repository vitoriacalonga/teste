/*
LISTA

-Estrutura com maior dinamica na aplicação
-Pode-se manipular valor em --- posição(válida)
    -não pode ocorrer lacuna 
-pode-se:
    Buscar, diferente das outras estruturas
    Inserir no inicio 
    Inserir ni fim 
    Insirir em posição especifica(Mas verificar se a posição desejada é <= o valor do contador)
    Remover do inicio(pegar a lógica da fila)
    Remover do fim(lógica da pilha)
    Remover posição especifica(verifica se o indice é válido (entre 0 e contador-1, pois é onde tem valor inserido), depois não deixar lacuna)
-Em lista não pode deixar lacuna
*/
/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
estrutura de dados - pilha
06/02/2025

implementar:
fila - inserção, remoção e impressão
pilha - empilhar, desempilhar, topo, impressão(apenas para visualizacao)

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// Definicao da estrutura fila
struct est_lista{
    int vet_lista[MAX];
    int cont;
};

typedef struct est_lista tipo_lista;

// Protótipo das funcoes
void insere_lista(tipo_lista *, int, int);
int remove_lista(tipo_lista*, int);
void imprime_lista(tipo_lista);

int buscar(tipo_lista);
void imprime_pilha(tipo_lista);

// Função principal

int main(/*int argc, char *argv[]*/){//procurar sobre os arg do parametro
    tipo_lista minha_lista;
    minha_lista.cont = 0;
    int p, vl;

    for(int i = 0; i < MAX; i++){
        if(minha_lista.cont > 0){
            printf("Insira a posição que deseja inserir o dado: ");
            scanf("%d", &p);
        }else{
            p = 0;
        }
        scanf("%d", &vl);
        insere_lista(&minha_lista, &vl, &p);
    }


    return 0;
}

//FUNCAO INSERCAOO NA LISTA
void insere_lista(tipo_lista *ls, int vl, int p){
    //verifica se a lista esta cheia
    if(ls-> cont < MAX){
        if(p <= ls->cont){//verifica se a posição é válida
            for(int i = ls->cont+1; i == p; i++){
                ls->vet_lista[i] = ls->vet_lista[i-1];
            }
            ls->vet_lista[p] = vl;
            ls->cont++;
        }
    }else{
        printf("[ATENCAO] Estrutura FILA esta cheia! Valor nao foi inserido.\n");
    }
}

int remove_lista(tipo_lista *ls, int vl){
    int p, aux = 0;   
    if(ls->cont > 0){
        for(int i = 0; vl == ls->cont-1 ; i++){
            if(vl == ls->vet_lista[i]){
                aux = 1;
                for(int j = i; i < ls->cont-1; i++){
                    ls->vet_lista[i] = ls->vet_lista[i-1];
                }
                ls->vet_lista[i] = ls->vet_lista[ls->cont-1];
            }
        }
        pl->cont--;
    }
    else{
        printf("[ATENCAO] Pilha esta vazia. Nao ha valor a ser retornado.\n");
    }
    return aux;
}

//funcao que empilha
void empilha(tipo_pilha *pl, int vl){
    if(pl->cont < MAX){
        pl->vet_pilha[pl->cont] = vl;
        pl->cont++;
    }
    else{
        printf("[ATENCAO] Estrutura PILHA esta cheia! Valor nao foi inserido.\n");
    }
}

//impreme a fila
void imprime_fila(tipo_fila fl){
    if(fl.cont == 0){
        printf("Fila vazia/n");
    }
    else{
        printf("FILA: [");
        for(int i = 0; i < fl.cont; i++){
            printf("%d ", fl.vet_fila[i]);
        }
        printf("]\t\n");
    }
}

//funcao imprime pilha


/*---------------------------------
--diferença entre o . para acessar memoria e a ->:-
o ponto usamos quando queremos acesar diretamente aql variavel sem interferir, 
já a setinha usamos no lugar do * quando estamos manipulando ponteiro
---------------------------------*/

//funcao topo
int topo(tipo_pilha pl){
    int aux;

    //verifica se a pilha tem valor
    if(pl.cont > 0){
        aux = pl.vet_pilha[pl.cont];
    }
    else{
        printf("[ATENCAO] Pilha esta vazia. Nao ha valor a ser retornado.\n");
    }
    return aux;
}

//funcao desempilha


//remove fila
int remove_fila(tipo_fila *fl){
    int aux;
    //verifica se fila tem valor
    if(fl->cont > 0){
        aux = fl->vet_fila[0]; //armazena o primeiro valor da fila, para retorna-lo
        for(int i = 0; fl->cont-1;i++){
            fl->vet_fila[i]=fl->vet_fila[i+1];
        }
        fl->cont--;
    }
    else{
        printf("[ATENCAO] Fila esta vazia. Nao ha valor a ser retornado.\n");
    }
    return aux;
}
