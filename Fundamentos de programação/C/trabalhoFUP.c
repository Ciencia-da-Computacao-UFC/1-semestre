#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//STRUCT: LIVRO
int contadorLivro = 0;
struct Livro{
  char titulo[100];
  char autor[100];
  int codigoLivro;
};

//STRUCT: CLIENTE
int contadorCliente = 0;
struct Cliente{
  char nome[100];
  char sobrenome[100];
  int idade;
  long long int rg;
  long long int cpf;
  int livrosEmprest[5];
  int contadorEmprest;
};
//Definindo os tipos de Struct
typedef struct Cliente cliente;
typedef struct Livro livro;

//Criando os vetores CLIENTE e LIVRO
cliente vetorCliente[5];
livro vetorLivros[5];

//ASSINATURAS DAS FUNÇÕES---------------------------------------------
//ASSINATURA: Função para limpar o terminal.
void limpaTela(void);

//ASSINATURA: Função para mostrar o menu e receber decisão do usuário.
void menu(void);

//ASSINATURA: Função para o menu do ponto 1 -> LIVROS---+---+---+---+
void livros(void);

//ASSINATURA: Função cadastrar livro
void cadastraLivro(void);

//ASSINATURA:Função para visualizar LIVROS
void visualisaLivro(void);

//ASSINATURA:Função para alterar dados LIVROS
void alteraDadosLivro(void);

//ASSINATURA: Função para o menu do ponto 2 -> CLIENTES---+---+---+---+
void clientes(void);

//ASSINATURA: Função cadastrar CLIENTES
void cadastraCliente(void);

//ASSINATURA:Função para visualizar CLIENTES
void visualisaCliente(void);

//ASSINATURA:Função para alterar dados LIVROS
void alteraDadosCliente(void);

//ASSINATURA: Função para o menu do ponto 3 -> NOVO EMPRESTIMO---+---+---+---+
void emprestimo(void);

//ASSINATURA: Função para o menu do ponto 4 -> DEVOLUÇÃO---+---+---+---+
void devolucao(void);

//ASSINATURA: Função para o menu do ponto 5 -> LISTA EMPRESTIMOS---+---+---+---+
void listaEmprestimos(void);


//FUNÇÃO PRINCCIPAL ************************************************
int main(){

  setlocale(LC_ALL, "Portuguese");

  menu();

  return 0;
}

//FUNÇÕES IMPLEMENTADAS ---------------------------------------------
//Função para limpar o terminal.
void limpaTela(){
  system("clear");
}

//Função para mostrar o menu e receber decisão do usuário.
void menu(void){

  unsigned int op;

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":       BIBLIOTECA       :\n");
  printf(":        - menu -        :\n");
  printf("--------------------------\n");
  printf("[1] LIVROS\n");
  printf("[2] CLIENTES\n");
  printf("[3] NOVO EMPRESTIMO\n");
  printf("[4] DEVOLUÇAO\n");
  printf("[5] LISTA DE EMPRESTIMOS\n");
  printf("[6] SAIR\n");
  printf("-> ");
  scanf("%d", &op);
  setbuf(stdin, NULL);
  //getchar();


  switch (op) {
    case 1:{
      livros();
      break;
    }
    case 2:{
      clientes();
      break;
    }
    case 3:{
      emprestimo();
      break;
    }
    case 4:{
      devolucao();
      break;
    }
    case 5:{
      listaEmprestimos();
      break;
    }
    case 6:{
      printf("\n*ATENÇÃO!");
      printf("\nOs dados foram armazenados apenas em memoria(não em arquivos)\nAo sair todos os dados serão apagados.");
      printf("\nDeseja realmente sair?");
      printf("\n[1]SIM | [2]NÃO -> ");
      scanf("%d", &op);
      setbuf(stdin, NULL);
      if(op == 1){
          exit(0);
      } else{
        menu();
      }
      break;
    }
    default:{
      menu();
      break;
    }
  }
}

//Função para o menu do ponto 1 -> LIVROS---+---+---+---+---+
void livros(void){
  unsigned int op;

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":       BIBLIOTECA       :\n");
  printf(":       - livros -       :\n");
  printf("--------------------------\n");
  printf("[1] CADASTRAR\n");
  printf("[2] VISUALIZAR\n");
  printf("[3] ALTERAR DADOS\n");
  printf("[4] MENU\n");
  printf("-> ");
  scanf("%d", &op);
  setbuf(stdin, NULL);

  switch (op){
    case 1:{
      cadastraLivro();
      break;
    }
    case 2:{
      visualisaLivro();
      break;
    }
    case 3:{
      alteraDadosLivro();
      break;
    }
    case 4:{
      menu();
      break;
    }
    default:{
      livros();
      break;
    }
  }
}

//Função para cadastrar LIVROS
void cadastraLivro(void){

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":         LIVROS         :\n");
  printf(":  -cadastro de livros-  :\n");
  printf("--------------------------\n");

  unsigned int op;

  setbuf(stdin, NULL);
  printf("Titulo do livro: ");
  scanf("%[^\n]s", vetorLivros[contadorLivro].titulo);
  setbuf(stdin, NULL);
  printf("Autor do livro: ");
  scanf("%[^\n]s", vetorLivros[contadorLivro].autor);
  printf("Codigo do livro: ");
  scanf("%d", &vetorLivros[contadorLivro].codigoLivro);

  contadorLivro++;

  printf("\nCadastrar novo livro?\n");
  printf("[1]SIM | [2]NÂO\n-> ");
  scanf("%d", &op);
  setbuf(stdin, NULL);

  if(op == 1){
    cadastraLivro();
  } else{
    livros();
  }
}

//Função para visualizar LIVROS
void visualisaLivro(void){

  char op;

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":         LIVROS         :\n");
  printf(":  -livros cadastrados-  :\n");
  printf("--------------------------\n");

  for(int i = 0; i < contadorLivro; i++){
    printf("\n\nLivro %d", i);
    printf("\nTitulo: %s", vetorLivros[i].titulo);
    printf("\nAutor: %s", vetorLivros[i].autor);
    printf("\nCodigo: %d", vetorLivros[i].codigoLivro);
  }

  printf("\n\nPressione ENTER para voltar.");
  scanf("%c", &op);

  livros();
}

//Função para alterar dados LiVROS
void alteraDadosLivro(void){

  unsigned int op;

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":         LIVROS         :\n");
  printf(":     -alterar dados-    :\n");
  printf("--------------------------\n");

  for(int i = 0; i < contadorLivro; i++){
    printf("\n\nLivro %d", i);
    printf("\nTitulo: %s", vetorLivros[i].titulo);
    printf("\nAutor: %s", vetorLivros[i].autor);
    printf("\nCodigo: %d", vetorLivros[i].codigoLivro);
  }

  printf("\n\nSelecione um livro: ");
  scanf("%d", &op);
  setbuf(stdin, NULL);

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":         LIVROS         :\n");
  printf(":     -alterar dados-    :\n");
  printf("--------------------------\n");

  printf("DADOS ATUAIS");
  printf("\nLivro %d", op);
  printf("\nTitulo: %s", vetorLivros[op].titulo);
  printf("\nAutor: %s", vetorLivros[op].autor);
  printf("\nCodigo: %d", vetorLivros[op].codigoLivro);

  printf("\n\nDADOS ATUALIZADOS\n");
  setbuf(stdin, NULL);
  printf("Titulo do livro: ");
  scanf("%[^\n]s", vetorLivros[op].titulo);
  setbuf(stdin, NULL);
  printf("Autor do livro: ");
  scanf("%[^\n]s", vetorLivros[op].autor);
  printf("Codigo do livro: ");
  scanf("%d", &vetorLivros[op].codigoLivro);

  setbuf(stdin,NULL);
  printf("\nDeseja modificar novos dados?\n");
  printf("[1]SIM | [2]NÂO\n-> ");
  scanf("%d", &op);
  setbuf(stdin, NULL);

  if(op == 1){
    alteraDadosLivro();
  } else{
    livros();
  }
}

//Função para o menu do ponto 2 -> CLIENTES---+---+---+---+---+
void clientes(void){
  unsigned int op;

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":       BIBLIOTECA       :\n");
  printf(":      - clientes -      :\n");
  printf("--------------------------\n");
  printf("[1] CADASTRAR\n");
  printf("[2] VISUALIZAR\n");
  printf("[3] ALTERAR DADOS\n");
  printf("[4] MENU\n");
  printf("-> ");
  scanf("%d", &op);
  setbuf(stdin, NULL);

  switch (op){
    case 1:{
      cadastraCliente();
      break;
    }
    case 2:{
      visualisaCliente();
      break;
    }
    case 3:{
      alteraDadosCliente();
      break;
    }
    case 4:{
      menu();
      break;
    }
    default:{
      clientes();
      break;
    }
  }
}

//Função para cadastrar CLIENTE
void cadastraCliente(void){

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":        CLIENTES        :\n");
  printf(": -cadastro de clientes- :\n");
  printf("--------------------------\n");

  unsigned int op;

  setbuf(stdin, NULL);
  printf("Nome: ");
  scanf("%[^\n]s", vetorCliente[contadorCliente].nome);
  setbuf(stdin, NULL);
  printf("Sobrenome: ");
  scanf("%[^\n]s", vetorCliente[contadorCliente].sobrenome);
  printf("Idade: ");
  scanf("%d", &vetorCliente[contadorCliente].idade);
  printf("RG: ");
  scanf("%lld", &vetorCliente[contadorCliente].rg);
  printf("CPF: ");
  scanf("%lld", &vetorCliente[contadorCliente].cpf);

  vetorCliente[contadorCliente].contadorEmprest = 0;

  contadorCliente++;

  printf("\nCadastrar novo cliente?\n");
  printf("[1]SIM | [2]NÂO\n-> ");
  scanf("%d", &op);
  setbuf(stdin, NULL);

  if(op == 1){
    cadastraCliente();
  } else{
    clientes();
  }
}

//Função para visualizar CLIENTES
void visualisaCliente(void){

  char op;

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":        CLIENTES        :\n");
  printf(": -clientes cadastrados- :\n");
  printf("--------------------------\n");

  for(int i = 0; i < contadorCliente; i++){
    printf("\n\nCliente %d", i);
    printf("\nNome: %s", vetorCliente[i].nome);
    printf("\nSobrenome: %s", vetorCliente[i].sobrenome);
    printf("\nIdade: %d", vetorCliente[i].idade);
    printf("\nRG: %lld", vetorCliente[i].rg);
    printf("\nCPF: %lld", vetorCliente[i].cpf);
  }

  setbuf(stdin, NULL);
  printf("\n\nPressione ENTER para voltar.");
  scanf("%c", &op);

  clientes();
}

//Função para alterar dados CLIENTES
void alteraDadosCliente(void){

  unsigned int op;

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":        CLIENTES        :\n");
  printf(":     -alterar dados-    :\n");
  printf("--------------------------\n");

  for(int i = 0; i < contadorCliente; i++){
    printf("\n\nCliente %d", i);
    printf("\nNome: %s", vetorCliente[i].nome);
    printf("\nSobrenome: %s", vetorCliente[i].sobrenome);
    printf("\nIdade: %d", vetorCliente[i].idade);
    printf("\nRG: %lld", vetorCliente[i].rg);
    printf("\nCPF: %lld", vetorCliente[i].cpf);
  }

  printf("\n\nSelecione um cliente: ");
  scanf("%d", &op);
  setbuf(stdin, NULL);

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":        CLIENTES        :\n");
  printf(":     -alterar dados-    :\n");
  printf("--------------------------\n");

  printf("DADOS ATUAIS");
  printf("\n\nCliente %d", op);
  printf("\nNome: %s", vetorCliente[op].nome);
  printf("\nSobrenome: %s", vetorCliente[op].sobrenome);
  printf("\nIdade: %d", vetorCliente[op].idade);
  printf("\nRG: %lld", vetorCliente[op].rg);
  printf("\nCPF: %lld", vetorCliente[op].cpf);

  printf("\nDADOS ATUALIZADOS\n");
  setbuf(stdin, NULL);
  printf("Nome: ");
  scanf("%[^\n]s", vetorCliente[op].nome);
  setbuf(stdin, NULL);
  printf("Sobrenome: ");
  scanf("%[^\n]s", vetorCliente[op].sobrenome);
  printf("Idade: ");
  scanf("%d", &vetorCliente[op].idade);
  printf("RG: ");
  scanf("%lld", &vetorCliente[op].rg);
  printf("CPF: ");
  scanf("%lld", &vetorCliente[op].cpf);

  printf("\nDeseja modificar novos dados?\n");
  printf("[1]SIM | [2]NÂO\n-> ");
  scanf("%d", &op);
  setbuf(stdin, NULL);

  if(op == 1){
    alteraDadosCliente();
  } else{
    clientes();
  }
}

//Função para o menu do ponto 3 -> NOVO EMPRESTIMO---+---+---+---+---+
void emprestimo(void){

  unsigned int opCliente, opLivro;
  char op;

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":       BIBLIOTECA       :\n");
  printf(":    -novo emprestimo-   :\n");
  printf("--------------------------\n");

  for(int i = 0; i < contadorCliente; i++){
    printf("\n\nCliente %d", i);
    printf("\nNome: %s", vetorCliente[i].nome);
    printf("\nSobrenome: %s", vetorCliente[i].sobrenome);
    printf("\nIdade: %d", vetorCliente[i].idade);
    printf("\nRG: %lld", vetorCliente[i].rg);
    printf("\nCPF: %lld", vetorCliente[i].cpf);
  }

  printf("\nDigite o numero do cliente: ");
  scanf("%d", &opCliente);
  setbuf(stdin, NULL);

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":       BIBLIOTECA       :\n");
  printf(":    -novo emprestimo-   :\n");
  printf("--------------------------\n");

  for(int i = 0; i < contadorLivro; i++){
    printf("\n\nLivro %d", i);
    printf("\nTitulo: %s", vetorLivros[i].titulo);
    printf("\nAutor: %s", vetorLivros[i].autor);
    printf("\nCodigo: %d", vetorLivros[i].codigoLivro);
  }

  printf("\nDigite o numero do livro para emprestimo: ");
  scanf("%d", &opLivro);
  setbuf(stdin, NULL);

  vetorCliente[opCliente].livrosEmprest[vetorCliente[opCliente].contadorEmprest] = opLivro;
  vetorCliente[opCliente].contadorEmprest++;

  printf("\nEmprestimo realizado com sucesso!");

  setbuf(stdin, NULL);
  printf("\n\nPressione ENTER para voltar.");
  scanf("%c", &op);

  menu();

}

//Função para o menu do ponto 3 -> DEVOLUÇÃO---+---+---+---+---+
void devolucao(void){

  unsigned int opCliente, opLivro;
  char op;

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":       BIBLIOTECA       :\n");
  printf(":       -devolucao-      :\n");
  printf("--------------------------\n");

  for(int i = 0; i < contadorCliente; i++){
    printf("\n\nCliente %d", i);
    printf("\nNome: %s", vetorCliente[i].nome);
    printf("\nSobrenome: %s", vetorCliente[i].sobrenome);
    printf("\nIdade: %d", vetorCliente[i].idade);
    printf("\nRG: %lld", vetorCliente[i].rg);
    printf("\nCPF: %lld", vetorCliente[i].cpf);
  }

  printf("\n\nEscolha o cliente que esta efetuando a devolucao: ");
  scanf("%d", &opCliente);
  setbuf(stdin, NULL);

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":       BIBLIOTECA       :\n");
  printf(":       -devolucao-      :\n");
  printf("--------------------------\n");

  printf("\nEmprestimos para o cliente %s %s", vetorCliente[opCliente].nome, vetorCliente[opCliente].sobrenome);

  //Mostra os livros que o cliente
  for(int i = 0; i < vetorCliente[opCliente].contadorEmprest; i++){
    printf("\n\nLivro %d", vetorCliente[opCliente].livrosEmprest[i]);
    printf("\nTitulo: %s", vetorLivros[vetorCliente[opCliente].livrosEmprest[i]].titulo);
    printf("\nAutor: %s", vetorLivros[vetorCliente[opCliente].livrosEmprest[i]].autor);
    printf("\nCodigo: %d", vetorLivros[vetorCliente[opCliente].livrosEmprest[i]].codigoLivro);
  }

  printf("\nEscolha o livro que será devolvido: ");
  scanf("%d", &opLivro);
  setbuf(stdin, NULL);

  //Desloca os livros para o inicio do vetor
  for(int i = 0; i < vetorCliente[opCliente].contadorEmprest; i++){
    if(vetorCliente[opCliente].livrosEmprest[i] == opLivro){
      for(int j = i; j < vetorCliente[opCliente].contadorEmprest; j++){
        vetorCliente[opCliente].livrosEmprest[j] = vetorCliente[opCliente].livrosEmprest[j+1];
      }
    }
  }
  vetorCliente[opCliente].contadorEmprest--;

  printf("\nDevolução concluida!");

  setbuf(stdin, NULL);
  printf("\n\nPressione ENTER para vontar.");
  scanf("%c", &op);

  menu();

}

//Função para o menu do ponto 5 -> LISTA EMPRESTIMOS---+---+---+---+
void listaEmprestimos(){

  unsigned int op;
  char op2;

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":       BIBLIOTECA       :\n");
  printf(":   -lista emprestimos-  :\n");
  printf("--------------------------\n");

  for(int i = 0; i < contadorCliente; i++){
    printf("\n\nCliente %d", i);
    printf("\nNome: %s", vetorCliente[i].nome);
    printf("\nSobrenome: %s", vetorCliente[i].sobrenome);
    printf("\nIdade: %d", vetorCliente[i].idade);
    printf("\nRG: %lld", vetorCliente[i].rg);
    printf("\nCPF: %lld", vetorCliente[i].cpf);
  }

  printf("\n\nDigite o numero do cliente desejado: ");
  scanf("%d", &op);
  setbuf(stdin, NULL);

  limpaTela();
  printf("::::::::::::::::::::::::::\n");
  printf(":       BIBLIOTECA       :\n");
  printf(":   -lista emprestimos-  :\n");
  printf("--------------------------\n");

  printf("\nEmprestimos para o cliente %s %s", vetorCliente[op].nome, vetorCliente[op].sobrenome);

  //Lista os livros
  for(int i = 0; i < vetorCliente[op].contadorEmprest; i++){
    printf("\n\nLivro %d", vetorCliente[op].livrosEmprest[i]);
    printf("\nTitulo: %s", vetorLivros[vetorCliente[op].livrosEmprest[i]].titulo);
    printf("\nAutor: %s", vetorLivros[vetorCliente[op].livrosEmprest[i]].autor);
    printf("\nCodigo: %d", vetorLivros[vetorCliente[op].livrosEmprest[i]].codigoLivro);
  }

  setbuf(stdin, NULL);
  printf("\n\nPressione ENTER para voltar.");
  scanf("%c", &op2);

  menu();
}
