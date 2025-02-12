/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios de Laboratório
exemplo de registro
12/12/2024
*/

#include <stdio.h>
#include <stdlib.h>

//definicao de tipo abstrato de dados
struct tipo_prod{
    int codigo;
    float preco_custo;
    float preco_venda;
};
typedef struct tipo_prod tipo_p;

#define tamvenda 2

struct vendas{
    tipo_p cod_prod[tamvenda];
    int quant[tamvenda];
    float subtotal[tamvenda];
    float total;
};

typedef struct vendas venda; 



#define TAM 3

int main() {
    tipo_p prod[TAM];
    venda vendas;
    float lucro;
    int cod;

    //Le os dados dos produtos
    for(int i = 0; i < TAM; i++){
        printf("Informe o codigo do produto %d: ", i+1);
        scanf("%d", &prod[i].codigo);
        printf("Informe o preco de custo do produto %d: ", i+1);
        scanf("%f", &prod[i].preco_custo);
    }
    

    //Le o lucro
    printf("Informe o lucro dos produtos: ");
    scanf("%f", &lucro);

    //calcula o preco de venda de cada produto
    for(int i = 0; i < TAM; i++){
        prod[i].preco_venda=  prod[i].preco_custo + (prod[i].preco_custo*(lucro/100));
    }

    for(int i = 0; i < TAM; i++){
        printf("Produto %d: \n\t Codigo = %d \n\t Custo do produto = %.2f \n\t Preco de venda = %.2f \n", i + 1, prod[i].codigo, prod[i].preco_custo, prod[i].preco_venda );
    }

    for(int i = 0; i < tamvenda; i++){
        printf("Informe  o codigo do produto %d: ", i+1);
        scanf("%d", &cod);
        //vendas.cod_prod[i]=cod;
        printf("Informe a quantidade de ");
        scanf("%d", &vendas.quant[i]);
        for(int j = 0; j < TAM; j++){
             if(cod == prod[j].codigo){
                vendas.cod_prod[i] = prod[i]; //pega todos os atributos do vetor de produtos e add no vetor produtos que pertence a struct de vendas
            }
        }
        //calcula subtotal
        vendas.subtotal[i] = vendas.cod_prod[i].preco_venda * vendas.quant[i];
    }

    
    vendas.total = 0;
    for (int i=0; i < tamvenda; i++)
        vendas.total += vendas.subtotal[i];

    //Imprime os dados da venda
    printf("Nota fiscal \n\t");
    for (int i=0; i<tamvenda; i++) {
        printf("Produto %d: \n\t Código: %d \n\t Qtd %d \n\t Sub total R$ %.2f\n\t", i+1, vendas.cod_prod[i].codigo, vendas.quant[i], vendas.subtotal[i]);
    }
    printf("TOTAL = R$ %.2f\n", vendas.total);

    return 0;
    
};
