/*1. Crie um programa que lê um número n, em seguida lê n números e imprime apenas os pares.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int num;
	
	scanf("%d",&n);
	
	int *vetor;
	
	vetor = malloc (n * sizeof (int));
	
	for(int i=0;i<n;i++){
        scanf("%d", &num);
        vetor[i] = num;
    }
    
    for(int i=0;i<n;i++){
		if(vetor[i]%2==0)
			printf("%d\n",vetor[i]);
	}
	free(vetor);
	
	return 0;
}
