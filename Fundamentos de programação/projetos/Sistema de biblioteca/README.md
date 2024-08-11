# Sistema de Biblioteca em C

Este projeto é um sistema simples de gerenciamento de biblioteca desenvolvido em C. O sistema permite o cadastro e a gestão de livros e clientes, além de realizar empréstimos e devoluções.

## Funcionalidades

- **Cadastro de Livros**: Permite adicionar novos livros à biblioteca.
- **Visualização de Livros**: Lista todos os livros cadastrados com seus respectivos detalhes.
- **Alteração de Livros**: Permite modificar as informações de um livro existente.
- **Remoção de Livros**: Remove um livro da biblioteca.
- **Cadastro de Clientes**: Adiciona novos clientes ao sistema.
- **Visualização de Clientes**: Exibe todos os clientes cadastrados.
- **Alteração de Clientes**: Permite alterar os dados de um cliente existente.
- **Remoção de Clientes**: Remove um cliente do sistema.
- **Empréstimo de Livros**: Realiza o empréstimo de um livro para um cliente.
- **Devolução de Livros**: Registra a devolução de um livro emprestado.
- **Listagem de Livros Emprestados**: Exibe os livros emprestados a um cliente específico.

## Estrutura do Projeto

O projeto é composto por três arquivos principais:

- **main.c**: Arquivo principal onde o menu de interação com o usuário é implementado.
- **biblioteca.h**: Contém as definições das estruturas de dados (`Livro`, `Cliente`) e as declarações das funções utilizadas no sistema.
- **biblioteca.c**: Implementa as funções declaradas em `biblioteca.h`.

## Como Compilar e Executar

Para compilar e executar o programa, instale o compilador GCC e em seguida use o comando:

```bash
gcc -o programa main.c biblioteca.c && ./programa
```

## Como Usar

1. Após executar o programa, será exibido um menu com as opções disponíveis.
2. Selecione a opção desejada digitando o número correspondente e pressionando Enter.
3. Siga as instruções na tela para realizar a operação escolhida.
4. Para sair do programa, escolha a opção `0` no menu.

## Possíveis Melhorias

- Implementação de persistência de dados em arquivos.
- Criação de uma interface gráfica para o sistema.
- Expansão do sistema para suportar múltiplos usuários simultâneos.

## Contribuições

Este projeto foi desenvolvido como parte de um exercício acadêmico para a disciplina de Fundamentos de programação. Sugestões e melhorias são sempre bem-vindas.
