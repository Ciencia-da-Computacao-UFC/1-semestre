/*1. Escreva uma função que receba um inteiro e retorne 1 se ele é primo e 0 em caso contrário.*/

#include <stdio.h>
#include <stdlib.h>
	
	int primo(int n){
		int i, cont=0;
		for(i=1;i<=n;i++){
			if(n%i==0)
            cont++;
		}
        if(cont!=2)
			return 0;
		else
        return 1;
	}

int main(){
	int n; 
	
	printf("Digite um numero: ");
	scanf("%d\n",&n);
	
	printf("%d\n",primo(n));
	
	//system("pause");
	
	
	return 0;
}
