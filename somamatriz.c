/*Código soma dois vetores 3x3, gerando um terceiro vetor com suas somas

Autor do código:João Carlos de Sousa Gurgel Rocha
github*/

#include <stdio.h>

int main() {
    int matriz1[3][3], matriz2[3][3], soma[3][3];
    int i, j;

    // Leitura da primeira matriz
    printf("Digite os elementos da primeira matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matriz1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Leitura da segunda matriz
    printf("\nDigite os elementos da segunda matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matriz2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Soma das matrizes
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Exibição da matriz soma
    printf("\nMatriz resultante da soma:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
