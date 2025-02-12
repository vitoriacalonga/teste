#include <stdio.h>
#include <math.h>

#define TAM_MTZ 12

int main() {
    double matriz[TAM_MTZ][TAM_MTZ]; 
    int i, j;
    char operacao;
    double soma = 0, media = 0, divisor = 0;

    operacao = getchar();

    
    for (i = 0; i < TAM_MTZ; i++) {
        for (j = 0; j < TAM_MTZ; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

   
    for (i = 0; i < TAM_MTZ; i++) {
        for (j = 0; j < TAM_MTZ; j++) {
            if (i < j) {  
                soma += matriz[i][j];
                divisor++;
            }
        }
    }


    if (operacao == 'S') {
        printf("%.1lf\n", soma + 1e-9);
    } else if (operacao == 'M') {
        media = soma / divisor;
        printf("%.1lf\n", media + 1e-9);
    }

    return 0;
}
