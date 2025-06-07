/*O código reaiza a matricula de um aluno junto e aponta se eles estão aprovados ou reprovados

Autor do código:João Carlos de Sousa Gurgel Rocha
github*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Definição da struct Aluno
typedef struct {
    char nome[100];
    int matricula;
    float media;
} Aluno;

int main() {
    int n;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);

    // Verifica se a quantidade não ultrapassa o máximo
    if (n > MAX) {
        printf("Número máximo de alunos excedido (%d).\n", MAX);
        return 1;
    }

    Aluno alunos[MAX];

    // Cadastro dos alunos
    for (int i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        getchar(); // Limpa o buffer
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Média: ");
        scanf("%f", &alunos[i].media);
    }

    // Exibindo os aprovados
    printf("\nAlunos aprovados (média >= 7.0):\n");
    for (int i = 0; i < n; i++) {
        if (alunos[i].media >= 7.0) {
            printf("Nome: %s", alunos[i].nome);
            printf("Matrícula: %d\n", alunos[i].matricula);
            printf("Média: %.2f\n\n", alunos[i].media);
        }
    }

    return 0;
}
