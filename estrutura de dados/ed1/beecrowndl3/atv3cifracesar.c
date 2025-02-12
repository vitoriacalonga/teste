#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void descriptografar(char* palavra, int cesar){
    for(int j = 0; j < strlen(palavra);j++){
        palavra[j] = 'A' + (palavra[j] + 'A' - cesar )%26;// operaçao matematica ASCII para manter com deslocamento para a esquerda.
    }
}

//O codigo correto para manter sempre entre letras maiusculas mas fazer a operaçao de deslocamento para a direita é:
//palavra[j] = 'A' + (palavra[j] - 'A' + cesar )%26; // operaçao matematica ASCII para manter sempre entre letras maiusculas com deslocamento para a direita


int main(){
    int n;
    scanf("%d",&n); //pergunta o numero de casos que irei realizar
    getchar(); //limpa buffer
    for(int i=0; i<n;i++){
        char palavra[51]= ""; //cria um vetor de char com 51 posiçoes e inicializa com vazio
        int cesar; //cria uma variavel para guardar o deslocamento
        scanf("%50[ABCDEFGHIJKLMNOPQRSTUVWXYZ]",palavra); //le apenas palavras com no maximo 50 caracteres e sempre maiusculos
        getchar(); //limpa buffer
        scanf("%d",&cesar);
        getchar();
        descriptografar(palavra, cesar);
        printf("%s\n", palavra);
        //system("pause");
        }

return 0;
}