/*4. Escreva um programa que lê um inteiro n e cria um vetor de inteiros de tamanho n preenchido de
maneira randômica(usar função rand()). Depois de criado itere pelo vetor incrementando cada uma
de suas posições, sem utilizar a indexação de seus elementos, ou seja []. O percurso deve ser feito
com ponteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,n;
  int* vet;
  int*pt=0;
  
  scanf("%d", &n);
   vet = (int*) malloc(sizeof(int)*n);
     
  for (i = 0; i < n; i++){
    /* gerando valores aleatórios */
    vet[i] = rand()%10;
  }
  for (pt = vet; pt < vet+n; pt++){
    /* percorrendo com ponteiro */
    (*pt)++;
  }
  
  return 0;
}
