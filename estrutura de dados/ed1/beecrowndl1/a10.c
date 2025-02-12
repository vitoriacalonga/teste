#include <stdio.h>
#include <stdlib.h>

int main(){
    int usu,cont=0,c;
    scanf("%d", &usu);
    for(c=0;c<usu;c++){
        //for(int i=0;i<usu;i++){
            printf("%d %d %d PUM\n",cont+1,cont+2,cont+3);
            cont+=4;
            
        //}
    }
    return 0;
    }