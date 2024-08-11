/* 2. Crie um programa que lê um número n, em seguida lê n números e imprime apenas os ímpares.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int m;
	int i;
	
	scanf("%d", &n);
	
	int *vetor;
	
	vetor = malloc (n * sizeof (int));
	
	for(i=0; i<n; i++){
		scanf("%d", &m);
		vetor[i] = m;
	}
	
	for(i=0; i<n; i++){
		if(vetor[i] % 2 == 1)
			printf("%d\n", vetor[i]);
	}
	
	free(vetor);
	
	return 0;
}
