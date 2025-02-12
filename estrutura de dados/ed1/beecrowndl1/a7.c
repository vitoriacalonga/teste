#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, resul;
    scanf("%d", &a);

    if(a % 2 == 0){
        for(int i = 2; i <= a; i +=2){
            resul= pow(i,2);
            printf("%d^2 = %d\n", i, resul);
        }
    }else if(a % 2 == 1){
        for(int i = 2; i < a; i +=2){
             resul= pow(i,2);
            printf("%d^2 = %d\n", i, resul);
        }
    }

    return 0;
}