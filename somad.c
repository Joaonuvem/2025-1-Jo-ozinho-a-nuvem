/*O código cria uma matriz 4x4 e realiza a soma de sua diagonal principal

Autor do código:João Carlos de Sousa Gurgel Rocha
github:Joaonuvem
 */

#include <stdio.h>

int main() {
    int matriz[4][4];
    int soma = 0;

    // Leitura da matriz
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Soma da diagonal principal
    for (int i = 0; i < 4; i++) {
        soma += matriz[i][i];  // Elementos onde linha == coluna
    }

    // Exibindo o resultado
    printf("\nA soma da diagonal principal é: %d\n", soma);

    return 0;
}
