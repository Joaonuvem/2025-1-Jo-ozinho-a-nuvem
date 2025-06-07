/*Um código que realiza a busca binaria dentro de um vetor

Autor do código:João Carlos de Sousa Gurgel Rocha
github:Joaonuvem
 */

#include <stdio.h>


// Função de busca binária
int buscaBinaria(int vetor[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == chave) {
            return meio; // Encontrou, retorna a posição
        } else if (vetor[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1; // Não encontrado
}

int main() {
    // Vetor já ordenado
    int vetor[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int chave;

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &chave);

    int resultado = buscaBinaria(vetor, tamanho, chave);

    if (resultado != -1) {
        printf("Valor encontrado na posição %d.\n", resultado);
    } else {
        printf("Valor não encontrado no vetor.\n");
    }

    return 0;
}
