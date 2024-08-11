/*5. Escreva uma função que receba um ponteiro para inteiros pt e um número inteiro x e retorna o
número de divisores de x enquanto preenche faz pt apontar para um vetor de inteiros que contém os divisores positivos de x.*/

#include <stdio.h>
	
	int div(int* pt, int x){
			int i, cont=0;
			for(i=1; i<=x; i++){
				if(x%i==0)
				   cont++;
				if(i>0)
				  vetor[i]=i;
			}	
		return (cont);
	}

int main(){
	int x;
	int* pt;
	int*vetor;
	pt=vetor;
	
	scanf("%d",&x);
	div(cont);
	for(i=0, i<cont;i++){
	printf("%", &vetor[i])
	}
	return 0;
}

