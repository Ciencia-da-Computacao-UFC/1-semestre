#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#define MAX_TITULO 50
#define MAX_AUTOR 50
#define MAX_CLIENTE 50

typedef struct {
    int id;
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int emprestado;
} Livro;

typedef struct {
    int id;
    char nome[MAX_CLIENTE];
} Cliente;

void inicializarBiblioteca(Livro biblioteca[], int tamanho);
void cadastrarLivro(Livro biblioteca[], int *livrosCadastrados);
void visualizarLivros(Livro biblioteca[], int livrosCadastrados);
void alterarLivro(Livro biblioteca[], int livrosCadastrados);
void removerLivro(Livro biblioteca[], int *livrosCadastrados);
void cadastrarCliente(Cliente clientes[], int *clientesCadastrados);
void visualizarClientes(Cliente clientes[], int clientesCadastrados);
void alterarCliente(Cliente clientes[], int clientesCadastrados);
void removerCliente(Cliente clientes[], int *clientesCadastrados);
void realizarEmprestimo(Livro biblioteca[], Cliente clientes[], int livrosCadastrados, int clientesCadastrados);
void realizarDevolucao(Livro biblioteca[], Cliente clientes[], int livrosCadastrados, int clientesCadastrados);
void listarLivrosEmprestados(Cliente clientes[], Livro biblioteca[], int clientesCadastrados, int livrosCadastrados);

#endif // BIBLIOTECA_H
