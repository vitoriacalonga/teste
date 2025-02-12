#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, resul;
    scanf("%d", &a);

    
     for(int i = 1; i <= 10; i ++){
        resul = i*a;
        printf("%d x %d = %d\n", i, a, resul);
    }
    

    return 0;
}