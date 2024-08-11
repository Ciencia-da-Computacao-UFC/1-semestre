/*4. Crie um programa que lê um número n, em seguida lê n números e os ordena em ordem não crescente.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,j;
	int n;
	int m;
	int *vetor;
	int aux=0;
	
	scanf("%d", &n);
	
	vetor = malloc (n * sizeof(int));
	
	for(i=0; i<n; i++){
		scanf("%d", &m);
		vetor[i] = m;
	}
	
	for(j=n-1; j>0; j--){
		for(i=0; i<n; i++){
		
			if(vetor[i] < vetor[i+1]){
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
			}
		}
	}
	
	for(i=0; i<n; i++){
		printf("%d\n", vetor[i]);
	}
	
	free(vetor);
	
	return 0;

}
