/*o código valia dois vetores de 10 posições( 0 a 9)  e faz uma interseção entre eles

Autor do código:João Carlos de Sousa Gurgel Rocha
github*/

#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10];
    int i, j;

    // Leitura do primeiro vetor
    printf("Digite 10 números para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Leitura do segundo vetor
    printf("Digite 10 números para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    printf("\nElementos comuns entre os dois vetores:\n");

    // Verifica elementos comuns
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (vetor1[i] == vetor2[j]) {
                // Verifica se já foi impresso (evita duplicatas)
                int jaImpresso = 0;
                for (int k = 0; k < i; k++) {
                    if (vetor1[i] == vetor1[k]) {
                        jaImpresso = 1;
                        break;
                    }
                }
                if (!jaImpresso) {
                    printf("%d\n", vetor1[i]);
                }
                break;
            }
        }
    }

    return 0;
}
