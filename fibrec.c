/*sequência de fibonacci recursiva 

Autor do código:João Carlos de Sousa Gurgel Rocha
github:Joaonuvem
 */

#include <stdio.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;     // Caso base 1
    if (n == 1) return 1;     // Caso base 2
    return fibonacci(n - 1) + fibonacci(n - 2);  // Chamada recursiva
}

int main() {
    int n;

    printf("Digite a posição n da sequência de Fibonacci: ");
    scanf("%d", &n);

    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));

    return 0;
}
