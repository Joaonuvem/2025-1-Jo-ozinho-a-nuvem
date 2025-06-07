/*O código aprresenta a frequência dos números escritos dentro de um determinado intervalo

Autor do código:João Carlos de Sousa Gurgel Rocha
github*/

#include <stdio.h>

int main() {
    int numeros[10];
    int i, j;
    int contagem[10] = {0};
    int jaContado;

    // Leitura dos 10 números
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\nFrequência dos números:\n");

    for (i = 0; i < 10; i++) {
        jaContado = 0;

        // Verifica se o número já foi contado
        for (j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                jaContado = 1;
                break;
            }
        }

        if (!jaContado) {
            int frequencia = 1;
            for (j = i + 1; j < 10; j++) {
                if (numeros[i] == numeros[j]) {
                    frequencia++;
                }
            }
            printf("Número %d aparece %d vez(es)\n", numeros[i], frequencia);
        }
    }

    return 0;
}
