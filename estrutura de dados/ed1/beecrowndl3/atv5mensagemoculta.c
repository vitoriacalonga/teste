#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[1024];  // Buffer para armazenar a entrada do usuário
    char novaFrase[1024]; // Buffer para armazenar a nova frase
    int numLinhas; // Número de linhas que o usuário vai digitar

    scanf("%d", &numLinhas); // Lê a quantidade de linhas que o usuário planeja digitar
    getchar(); // Limpa o buffer de entrada, capturando o caractere de nova linha após o número

    for (int i = 0; i < numLinhas; i++) {
        fgets(frase, sizeof(frase), stdin); // Lê uma linha do usuário
        int indice = 0; // Índice para construir a nova frase

        char *token = strtok(frase, " .\n"); // Inicia a tokenização com espaço e ponto como delimitadores

        while (token != NULL) {
            novaFrase[indice++] = token[0]; // Adiciona a primeira letra de cada palavra à nova frase
            token = strtok(NULL, " .\n"); // Continua tokenizando
        }
        novaFrase[indice] = '\0'; // Finaliza a nova frase com o caractere nulo

        // Imprime a nova frase formada pelas primeiras letras
        printf("%s\n", novaFrase);
    }

return 0;

}