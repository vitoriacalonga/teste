/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios Beecrownd
Atividade 3
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, a, b, c, d, e, f, g;
    scanf("%d", &n);
    int ced = n;

    if(n > 0 && n < 1000000){
        a = n / 100;
        n = n % 100;

        b = n / 50;
        n = n % 50;

        c = n / 20;
        n = n % 20;

        d = n / 10;
        n = n % 10;

        e = n / 5;
        n = n % 5;

        f = n/ 2;
        n = n % 2;

        g = n / 1;
    }
    
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", ced, a, b, c, d, e, f, g);
    return 0;
}