//2. Escreva um programa que lê um arquivo e imprimi o seu conteúdo na tela.

#include <stdio.h>
#include <stdlib.h>

int main(){
		
  FILE *arq;
  char Linha[100];
  char *result;
  int i;

  system("cls");

  // Abre um arquivo TEXTO para LEITURA
  arq = fopen("q2.txt", "rt");

  if (arq == NULL){ // Se houve erro na abertura
  
     printf("Problemas na abertura do arquivo\n");
     return 0;
  }

  i = 1;
  while (!feof(arq)){
  
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      if (result)  // Se foi possível ler
	  printf("Linha %d : %s\n",i,Linha);
      i++;
  }
  fclose(arq);
	return 0;
}

