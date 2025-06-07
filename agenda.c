/*O código em questão cria uma lista de contatos

Autor do código:João Carlos de Sousa Gurgel Rocha
github:Joaonuvem
 */

#include <stdio.h>
#include <string.h>

#define MAX 100

// Definindo a struct Contato
typedef struct {
    char nome[100];
    char telefone[20];
    char email[100];
} Contato;

// Função para adicionar um contato
void adicionarContato(Contato contatos[], int *total) {
    if (*total >= MAX) {
        printf("Agenda cheia!\n");
        return;
    }

    printf("\n--- Adicionar Contato ---\n");
    printf("Nome: ");
    getchar(); // Limpa o buffer
    fgets(contatos[*total].nome, sizeof(contatos[*total].nome), stdin);
    contatos[*total].nome[strcspn(contatos[*total].nome, "\n")] = 0;

    printf("Telefone: ");
    fgets(contatos[*total].telefone, sizeof(contatos[*total].telefone), stdin);
    contatos[*total].telefone[strcspn(contatos[*total].telefone, "\n")] = 0;

    printf("Email: ");
    fgets(contatos[*total].email, sizeof(contatos[*total].email), stdin);
    contatos[*total].email[strcspn(contatos[*total].email, "\n")] = 0;

    (*total)++;
    printf("Contato adicionado com sucesso!\n");
}

// Função para buscar contato por nome
void buscarContato(Contato contatos[], int total) {
    char nomeBusca[100];
    int encontrado = 0;

    printf("\nDigite o nome a buscar: ");
    getchar(); // Limpa o buffer
    fgets(nomeBusca, sizeof(nomeBusca), stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = 0;

    for (int i = 0; i < total; i++) {
        if (strcasecmp(contatos[i].nome, nomeBusca) == 0) {
            printf("\nContato encontrado:\n");
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            printf("Email: %s\n", contatos[i].email);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }
}

// Função para exibir todos os contatos
void exibirContatos(Contato contatos[], int total) {
    printf("\n--- Lista de Contatos ---\n");
    if (total == 0) {
        printf("Nenhum contato na agenda.\n");
        return;
    }

    for (int i = 0; i < total; i++) {
        printf("Contato %d:\n", i + 1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("Email: %s\n\n", contatos[i].email);
    }
}

int main() {
    Contato contatos[MAX];
    int total = 0;
    int opcao;

    do {
        printf("\n--- Menu da Agenda ---\n");
        printf("1. Adicionar Contato\n");
        printf("2. Buscar Contato por Nome\n");
        printf("3. Exibir Todos os Contatos\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarContato(contatos, &total);
                break;
            case 2:
                buscarContato(contatos, total);
                break;
            case 3:
                exibirContatos(contatos, total);
                break;
            case 0:
                printf("Encerrando a agenda...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
