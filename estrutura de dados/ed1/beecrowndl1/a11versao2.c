#include <stdio.h>
#include <stdlib.h>

int main(){
    int c, n;
    scanf("%d", &c);//lê a quantidade de numeros que ele quer verificar

    for(int j = 1; j <=c; j++){//laco para ler os numeros e verificar eles na quantidade que foi lida na variavel "c"
        scanf("%d", &n);
        int soma = 0;//como estamos dentro de um laco que ira verificara um numero por vez eh necessario que o laco inicie com a soma zerada
        for(int i = 1; i<n; i++){//vai rodar em cada numero de 1 ate o numero digitado
            if(n % i ==0){//verica quais numeros sao divisores a partir do contador
                soma += i;//soma os numeros divisores
            }
        }

        if(soma == n){//se a soma dos numeros divisores for igual ao numero entao ele eh um numero perfeito
            printf("%d eh perfeito\n", n);
        } else{
            printf("%d nao eh perfeito\n", n);
        }
    }
    return 0;
    }

