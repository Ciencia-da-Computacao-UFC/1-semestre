/*2. Escreva um programa que lê um inteiro n e cria um vetor de inteiros de tamanho n preenchido de
maneira randômica(usar função rand()).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int i;
	int *vetor;
	
	scanf("%d", &n);
	vetor = (int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++){
		vetor[i] = rand()%9; //essa função escolhe aleatoriamente números ate o 9
	}
	for(i=0;i<n;i++){
		printf("%d\n", vetor[i]);
	}	
	free(vetor);
	return 0;
}
