/*Crie um programa que lê um número n, em seguida lê n números e para cada um deles determina
seu menor divisor primo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, j, k;
	int count =0;
	int *vetor;

	scanf("%d", &n);
	vetor = (int*)malloc(sizeof(int)*n);

	for(i=0;i<n;i++){
		scanf("%d", &vetor[i]);
	}

	for(i=0;i<n;i++){
		for(j=1;j<=vetor[i];j++){
			count =0;
			if(vetor[i]%j==0){
				for(k=1;k<=j;k++){
					if(j%k==0){
						count++;
					}
				}
				if(count==2){
					printf("%d \n", j);
					break;
				}
			}

		}

	}
	free(vetor);
	return 0;
}
