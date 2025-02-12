#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, formula;
    scanf("%d",&n);
    formula = (((2*n)-1)*(2*n))-1;
    if(formula % 2 == 0){
        printf("O numero eh perfeito %d", formula);
    }
    else{
        printf("nao eh perfeito");
    }
    return 0;
}