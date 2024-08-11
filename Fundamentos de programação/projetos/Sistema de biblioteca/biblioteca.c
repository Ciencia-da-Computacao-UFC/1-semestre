#include "biblioteca.h"
#include <stdio.h>
#include <string.h>

void inicializarBiblioteca(Livro biblioteca[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        biblioteca[i].id = -1;
        biblioteca[i].emprestado = 0;
    }
}

void cadastrarLivro(Livro biblioteca[], int *livrosCadastrados) {
    printf("Digite o título do livro: ");
    scanf(" %[^\n]", biblioteca[*livrosCadastrados].titulo);

    printf("Digite o autor do livro: ");
    scanf(" %[^\n]", biblioteca[*livrosCadastrados].autor);

    biblioteca[*livrosCadastrados].id = *livrosCadastrados + 1;
    biblioteca[*livrosCadastrados].emprestado = 0;

    (*livrosCadastrados)++;
    printf("Livro cadastrado com sucesso!\n");
}

void visualizarLivros(Livro biblioteca[], int livrosCadastrados) {
    if (livrosCadastrados == 0) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }

    printf("Lista de livros:\n");
    for (int i = 0; i < livrosCadastrados; ++i) {
        printf("ID: %d, Título: %s, Autor: %s, %s\n", biblioteca[i].id, biblioteca[i].titulo, biblioteca[i].autor,
               biblioteca[i].emprestado ? "Emprestado" : "Disponível");
    }
}

void alterarLivro(Livro biblioteca[], int livrosCadastrados) {
    int id;
    printf("Digite o ID do livro que deseja alterar: ");
    scanf("%d", &id);

    for (int i = 0; i < livrosCadastrados; ++i) {
        if (biblioteca[i].id == id) {
            printf("Digite o novo título do livro: ");
            scanf(" %[^\n]", biblioteca[i].titulo);

            printf("Digite o novo autor do livro: ");
            scanf(" %[^\n]", biblioteca[i].autor);

            printf("Livro alterado com sucesso!\n");
            return;
        }
    }

    printf("Livro não encontrado.\n");
}

void removerLivro(Livro biblioteca[], int *livrosCadastrados) {
    int id;
    printf("Digite o ID do livro que deseja remover: ");
    scanf("%d", &id);

    for (int i = 0; i < *livrosCadastrados; ++i) {
        if (biblioteca[i].id == id) {
            // Move o último livro para a posição do livro a ser removido
            biblioteca[i] = biblioteca[*livrosCadastrados - 1];
            (*livrosCadastrados)--;
            printf("Livro removido com sucesso!\n");
            return;
        }
    }

    printf("Livro não encontrado.\n");
}

void cadastrarCliente(Cliente clientes[], int *clientesCadastrados) {
    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", clientes[*clientesCadastrados].nome);

    clientes[*clientesCadastrados].id = *clientesCadastrados + 1;

    (*clientesCadastrados)++;
    printf("Cliente cadastrado com sucesso!\n");
}

void visualizarClientes(Cliente clientes[], int clientesCadastrados) {
    if (clientesCadastrados == 0) {
        printf("Nenhum cliente cadastrado.\n");
        return;
    }

    printf("Lista de clientes:\n");
    for (int i = 0; i < clientesCadastrados; ++i) {
        printf("ID: %d, Nome: %s\n", clientes[i].id, clientes[i].nome);
    }
}

void alterarCliente(Cliente clientes[], int clientesCadastrados) {
    int id;
    printf("Digite o ID do cliente que deseja alterar: ");
    scanf("%d", &id);

    for (int i = 0; i < clientesCadastrados; ++i) {
        if (clientes[i].id == id) {
            printf("Digite o novo nome do cliente: ");
            scanf(" %[^\n]", clientes[i].nome);

            printf("Cliente alterado com sucesso!\n");
            return;
        }
    }

    printf("Cliente não encontrado.\n");
}

void removerCliente(Cliente clientes[], int *clientesCadastrados) {
    int id;
    printf("Digite o ID do cliente que deseja remover: ");
    scanf("%d", &id);

    for (int i = 0; i < *clientesCadastrados; ++i) {
        if (clientes[i].id == id) {
            // Move o último cliente para a posição do cliente a ser removido
            clientes[i] = clientes[*clientesCadastrados - 1];
            (*clientesCadastrados)--;
            printf("Cliente removido com sucesso!\n");
            return;
        }
    }

    printf("Cliente não encontrado.\n");
}

void realizarEmprestimo(Livro biblioteca[], Cliente clientes[], int livrosCadastrados, int clientesCadastrados) {
    int idLivro, idCliente;
    printf("Digite o ID do livro a ser emprestado: ");
    scanf("%d", &idLivro);

    for (int i = 0; i < livrosCadastrados; ++i) {
        if (biblioteca[i].id == idLivro) {
            if (biblioteca[i].emprestado == 0) {
                printf("Digite o ID do cliente que está pegando o livro emprestado: ");
                scanf("%d", &idCliente);

                for (int j = 0; j < clientesCadastrados; ++j) {
                    if (clientes[j].id == idCliente) {
                        biblioteca[i].emprestado = 1;
                        printf("Empréstimo realizado com sucesso!\n");
                        return;
                    }
                }

                printf("Cliente não encontrado.\n");
            } else {
                printf("Livro já emprestado.\n");
            }

            return;
        }
    }

    printf("Livro não encontrado.\n");
}

void realizarDevolucao(Livro biblioteca[], Cliente clientes[], int livrosCadastrados, int clientesCadastrados) {
    int idLivro;
    printf("Digite o ID do livro a ser devolvido: ");
    scanf("%d", &idLivro);

    for (int i = 0; i < livrosCadastrados; ++i) {
        if (biblioteca[i].id == idLivro) {
            if (biblioteca[i].emprestado == 1) {
                biblioteca[i].emprestado = 0;
                printf("Devolução realizada com sucesso!\n");
                return;
            } else {
                printf("Livro não está emprestado.\n");
            }

            return;
        }
    }

    printf("Livro não encontrado.\n");
}

void listarLivrosEmprestados(Cliente clientes[], Livro biblioteca[], int clientesCadastrados, int livrosCadastrados) {
    int idCliente;
    printf("Digite o ID do cliente para listar os livros emprestados: ");
    scanf("%d", &idCliente);

    for (int i = 0; i < clientesCadastrados; ++i) {
        if (clientes[i].id == idCliente) {
            printf("Livros emprestados para %s:\n", clientes[i].nome);
            
            for (int j = 0; j < livrosCadastrados; ++j) {
                if (biblioteca[j].emprestado == 1) {
                    printf("Título: %s, Autor: %s\n", biblioteca[j].titulo, biblioteca[j].autor);
                }
            }
            
            return;
        }
    }

    printf("Cliente não encontrado.\n");
}
