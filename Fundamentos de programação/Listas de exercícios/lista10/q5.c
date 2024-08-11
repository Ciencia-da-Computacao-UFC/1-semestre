/*5. Escreva um programa que lê um inteiro n e um inteiro m e cria um ponteiro de ponteiro que aponta
para uma matriz de n linhas e m colunas.*/

#include <stdio.h>
#include <stdlib.h>
//alocacao de matriz

int main(){
	int **matriz;
	int i;
	int j,n,m;
	
	scanf("%d %d", &n,&m);
	
	matriz = (int **) calloc(n,sizeof(int *)); //aloca as linhas
	for(i = 0; i <n; i++){
		matriz[i] = (int *) calloc(m,sizeof(int)); //aloca as colunas
	}
	//carrega os dados da matriz
	int contador=0;
	for(i =0; i <n; i++){
		for(j =0; j <m; j++){
			matriz[i][j] = ++contador;
		}
	}
	//imprime
	for(i =0; i <n; i++){
		for(j =0; j <m; j++){
			printf("\t%d",matriz[i][j]);
		}
		printf("\n");
	}
	
	//liberar memoria
	for(int i =0; i < n; i++){
		free(matriz[i]);
	}
	free(matriz);
	
	return 0;
}
