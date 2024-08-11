#include <stdio.h>
#include <stdlib.h>
//matriz[3][3]
int main(){
	
	int **matriz;
	int i;
	
	sizeof(
	
	matriz = (int**)malloc(sizeof(int**)*3000);
	
	for(i = 0; i < 3000; i++) {
	
	   matriz[i] = (int *)malloc(sizeof(int));
	}
	
	matriz[2999][2999] = 25;
	
	printf("%d\n", matriz[2999][2999]);
	
	
	for(i = 0; i < 3000; i++) {
	
	   free(matriz[i]);
	}
	
	free(matriz);
	return 0;
}
