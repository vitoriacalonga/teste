#include <stdio.h>
#include <stdlib.h>


int main(){
    int hri, mini, hrf, minf, hrt, mint,mininitotal, minifintotal,mintotal;
    scanf("%d %d %d %d", &hri, &mini, &hrf, &minf);

    mininitotal = (hri * 60) + mini;
    minifintotal = (hrf * 60) + minf;

    if(mininitotal == minifintotal){
        hrt = 24;
        mint = 0;
    }
    else if(minifintotal < mininitotal){
        minifintotal = (24 * 60) + minifintotal;
        mintotal = minifintotal - mininitotal;
        hrt = mintotal / 60;
        mint = mintotal % 60;
    }else{
        mintotal = minifintotal - mininitotal;
        hrt = mintotal / 60;
        mint = mintotal % 60;
    }
    
   
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hrt, mint);

    return 0;
}