//Exercício Matriz 07.05

// 1. Dada uma matriz N x N, elabore um algoritmo que imprima:

// a) O triangulo superior a diagonal primaria;
// b) O triangulo inferior a diagonal primaria;
// c) O triangulo superior a diagonal secundária;
// d) O triangulo inferior a diagonal secundária;

#include <stdio.h>
#define TAM 3

int main () {
int matriz[TAM][TAM];
int contador;

//preencher matriz automaticamnete

contador = 1;
for(int i=0;i < TAM; i++){
	for(int j=0; j < TAM; j++){
			matriz[i][j] = contador;
			contador++;
			printf("%3d ", matriz[i][j]);
	}
	printf("\n");
}

// a) para mostrar o triangulo superior DIAGONAL PRIMARIA
printf("\nTriangulo superior: ");

for(int l=0; l < TAM-1; l++){
	for(int c=l+1; c < TAM; c++){
		printf("%d ", matriz[l][c]);
		} 
	
}


// b) para mostrar o triangulo inferior DIAGONAL PRIMARIA
printf("\nTriangulo inferior: ");

for(int c=0; c < TAM-1; c++){
	for(int l=c+1; l < TAM; l++){
		printf("%d ", matriz[l][c]);
		} 
	
}

//para mostrar a diagonal secundária
//o TAM é 3, entao TAM-1 é a ultima coluna

printf("\nDiagonal secundaria: ");

int c_ = TAM-1;
for(int l=0; l < TAM; l++){
	printf("%d ", matriz[l][c_]);
	c_--;
}
	
//para mostrar o triangulo superior DIAGONAL SECUNDÁRIA

printf("\nTriangulo superior da diagonal secundaria: ");

for(int l=0; l < TAM-1; l++){
	for(int c=TAM-2-l; c >= 0; c--){
		printf("%d ", matriz[l][c]);
	}
	
}	
	
//para mostrar o triangulo inferior DIAGONAL SECUNDÁRIA

printf("\nTriangulo inferior da diagonal secundaria: ");
int aux = 1;
for(int c= TAM - 1; c >= 0-1; c--){
	for(int l= aux; l < TAM; l++){
		printf("%d ", matriz[l][c]);
	}
	aux++;
}	
	
	
	
	return 0;
}
