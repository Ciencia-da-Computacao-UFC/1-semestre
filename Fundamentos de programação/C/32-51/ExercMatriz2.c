//Exercício Matriz 07.05

// 2. Elabore um algoritmo que preencha uma matriz 5 x 5 e depois faça:

// a) Trocar a segunda e a quinta linha;
// b) Trocar a primeira e a quarta coluna;
// c) Trocar a diagonal principal e a secundária;
// d) Escreva como ficou a matriz

#include <stdio.h>
#define TAM 5

int main(){
	int matriz[TAM][TAM];
	int cont = 1;
	int aux = 0;
	
	//carregando matriz
	
	for(int i=0; i < TAM; i++){
		for(int j=0; j < TAM; j++){
			matriz[i][j] = cont;
			cont++;
		}
	}
	
	printf("print Matriz ===================\n");
	
	for(int i=0; i < TAM; i++){
		for(int j=0; j < TAM; j++){
			printf("%3d", matriz[i][j]);
		}
		printf("\n");
	}
	
	// a) Trocar a segunda e a quinta linha;
	
	for(int i=0; i < TAM; i++){
			aux = matriz[0][i];
			matriz[0][i] = matriz[4][i];
			matriz[4][i] = aux;
	}
	
	// b) Trocar a primeira e a quarta coluna;
	
	for(int i=0; i < TAM; i++){
		aux = matriz[i][0];
		matriz[i][0] = matriz[i][3];
		matriz[i][3] = aux;
	}
	
	// c) Trocar a diagonal principal e a secundária;
	//int _j = TAM;
	for(int i=0; i < TAM; i++){
		aux = matriz[i][i];
		matriz[i][i] = matriz[i][TAM-1-i];
		matriz[i][TAM-1-i] = aux;
	}
	
	// d) Escreva como ficou a matriz.
	printf("Matriz modificada============\n");
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			printf("%3d", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
