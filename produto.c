/* Esse código realiza o cadastro de produtos de uma loja

Autor do código:João Carlos de Sousa Gurgel Rocha
github*/

#include <stdio.h>
#include <stdlib.h>
// biblioteca string.h para maipulação de strings
#include <string.h>

#define MAX 100

// Definindo a struct Produto
typedef struct {
    char nome[100];
    int codigo;
    int quantidade;
    float preco;
} Produto;

// Função para cadastrar um novo produto
void cadastrarProduto(Produto produtos[], int *total) {
    if (*total >= MAX) {
        printf("Estoque cheio!\n");
        return;
    }

    printf("\n--- Cadastro de Produto ---\n");
    printf("Nome: ");
    getchar(); // Limpa o buffer do teclado
    fgets(produtos[*total].nome, sizeof(produtos[*total].nome), stdin);
    produtos[*total].nome[strcspn(produtos[*total].nome, "\n")] = 0; // Remove \n do final

    printf("Código: ");
    scanf("%d", &produtos[*total].codigo);

    printf("Quantidade: ");
    scanf("%d", &produtos[*total].quantidade);

    printf("Preço: ");
    scanf("%f", &produtos[*total].preco);

    (*total)++;
    printf("Produto cadastrado com sucesso!\n");
}

// Função para buscar um produto pelo código
void buscarProduto(Produto produtos[], int total) {
    int codigo;
    printf("\nDigite o código do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total; i++) {
        if (produtos[i].codigo == codigo) {
            printf("\nProduto encontrado:\n");
            printf("Nome: %s\n", produtos[i].nome);
            printf("Código: %d\n", produtos[i].codigo);
            printf("Quantidade: %d\n", produtos[i].quantidade);
            printf("Preço: R$ %.2f\n", produtos[i].preco);
            return;
        }
    }

    printf("Produto não encontrado.\n");
}

// Função para listar todos os produtos
void listarProdutos(Produto produtos[], int total) {
    printf("\n--- Lista de Produtos ---\n");
    for (int i = 0; i < total; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Preço: R$ %.2f\n\n", produtos[i].preco);
    }
}

int main() {
    Produto produtos[MAX];
    int total = 0;
    int opcao;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Buscar Produto\n");
        printf("3. Listar Produtos\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto(produtos, &total);
                break;
            case 2:
                buscarProduto(produtos, total);
                break;
            case 3:
                listarProdutos(produtos, total);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }

    } while (opcao != 0);

    return 0;
}
