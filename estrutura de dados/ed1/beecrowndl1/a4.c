/*
UFMT - Ciencia da Computação
Estrutura de dados I

Exercicios Beecrownd
Atividade 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>//necessária para usar as funções matemáticas


int main(){
    float a, b, c, delta, r1, r2, raizdelta;
    scanf("%f %f %f", &a, &b, &c);

    delta = (pow(b, 2.0)) - (4.0 * a * c);
    
    if(delta < 0 || (2*a) == 0){
        printf("Impossivel calcular\n");
    }else{
        raizdelta =pow(delta,1/2.0);
        r1 = ((- b) + (raizdelta)) / (2 * a);
        r2 = ((- b) - (raizdelta)) / (2 * a);

        printf("R1 = %.5f\nR2 = %.5f", r1, r2);
    }

    return 0;
}