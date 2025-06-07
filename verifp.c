/*O algoritmo recebe um arry e checa se ele é ou não é um palíndromo

Autor do código:João Carlos de Sousa Gurgel Rocha
github:Joaonuvem
 */

#include <stdio.h>
#include <string.h>
//biblioteca referenciada para utilizar funções tolower e isalnum
#include <ctype.h>

// Função para verificar se uma string é palíndromo
int ehPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        // Ignorar espaços e tornar minúsculas para comparar corretamente
        while (inicio < fim && !isalnum(str[inicio])) inicio++;
        while (inicio < fim && !isalnum(str[fim])) fim--;

        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0; // Não é palíndromo
        }

        inicio++;
        fim--;
    }

    return 1; // É palíndromo
}

int main() {
    char texto[100];

    printf("Digite uma palavra ou frase: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = 0; // Remove o '\n'

    if (ehPalindromo(texto)) {
        printf("\"%s\" é um palíndromo!\n", texto);
    } else {
        printf("\"%s\" não é um palíndromo.\n", texto);
    }

    return 0;
}
