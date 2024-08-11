#include "biblioteca.h"
#include <stdio.h>

int main() {
    const int MAX_LIVROS = 100;
    const int MAX_CLIENTES = 50;

    Livro biblioteca[MAX_LIVROS];
    Cliente clientes[MAX_CLIENTES];

    int livrosCadastrados = 0;
    int clientesCadastrados = 0;

    inicializarBiblioteca(biblioteca, MAX_LIVROS);

    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Cadastrar Livro\n");
        printf("2. Visualizar Livros\n");
        printf("3. Alterar Livro\n");
        printf("4. Remover Livro\n");
        printf("5. Cadastrar Cliente\n");
        printf("6. Visualizar Clientes\n");
        printf("7. Alterar Cliente\n");
        printf("8. Remover Cliente\n");
        printf("9. Realizar Empréstimo\n");
        printf("10. Realizar Devolução\n");
        printf("11. Listar Livros Emprestados a um Cliente\n");
        printf("0. Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarLivro(biblioteca, &livrosCadastrados);
                break;
            case 2:
                visualizarLivros(biblioteca, livrosCadastrados);
                break;
            case 3:
                alterarLivro(biblioteca, livrosCadastrados);
                break;
            case 4:
                removerLivro(biblioteca, &livrosCadastrados);
                break;
            case 5:
                cadastrarCliente(clientes, &clientesCadastrados);
                break;
            case 6:
                visualizarClientes(clientes, clientesCadastrados);
                break;
            case 7:
                alterarCliente(clientes, clientesCadastrados);
                break;
            case 8:
                removerCliente(clientes, &clientesCadastrados);
                break;
            case 9:
                realizarEmprestimo(biblioteca, clientes, livrosCadastrados, clientesCadastrados);
                break;
            case 10:
                realizarDevolucao(biblioteca, clientes, livrosCadastrados, clientesCadastrados);
                break;
            case 11:
                listarLivrosEmprestados(clientes, biblioteca, clientesCadastrados, livrosCadastrados);
                break;
            case 0:
                printf("Saindo do programa. Até mais!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

// Para compilar e executar: gcc -o programa main.c biblioteca.c && ./programa