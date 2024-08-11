/*1. Escreva uma função recursiva que receba um número x e um inteiro k e calcula n^k*/

#include <stdio.h>
	
	int potencia(int x, int k){
	// pede como argumento a base (x) e expoente (k)	
		if(x == 0)
			return 1;
		else
			return (x * potencia(x,k-1));
	}
	
int main(){
	int x, k, resultado;
	printf("Funcao que calcula uma potencia recursivamente\n");
	printf("Insira a base\n");
	scanf("%d", &x);
	printf("Insira um expoente\n");
	scanf("%d", &k);
	resultado = potencia(x,k);
	printf("%d elevado a %d = %d\n", x,k,resultado);

	return 0;
}
