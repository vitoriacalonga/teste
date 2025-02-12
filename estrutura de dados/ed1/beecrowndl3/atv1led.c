#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
    int n; // variavel para receber o numero de teste que o usuario deseja realizar
    int led[10]= {6,2,5,5,4,5,6,3,7,6};
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){ // criado laço para tratar em ordem os numeros que o usuario ira entregar
        char numero[101]= ""; // criei uma variavel de string para tratar o numero que o usuario entregar, ja que se eu declarasse inteiro, ele nao ia suportar a regra de 10 elevado a 100 para entrada do usuario
        int total_leds=0; // total de leds
        
        scanf("%s", numero); //aqui eu nao usei & pois se eu usasse, eu iria estar alterando o endereço de memoria do "numero[101]" ja que operador "&" é usado para se referenciar ao endereço de memoria.
        //como eu usei numero, aqui eu estou me referindo diretamente ao primeiro elemento de "numero[101]".
        getchar(); 
        for(int j=0; j < strlen(numero) ;j++){ // aqui estou tratando caractere por caractere da cadeia de caracteres "numero[101]"
            total_leds += led[numero[j] - '0']; // Converte o caractere 'numero[j]' para seu valor inteiro correspondente subtraindo '0' (ASCII 48), e adiciona o número de LEDs necessários para esse dígito ao total de LEDs.
        }
        printf("%d leds\n", total_leds); // mostra o resultado do "i" indice do laço atual
    }
 
    return 0 ;
}