/*3. (Estruturas de Repeticao) Escreva um programa que le um inteiro n do teclado. 
Depois este programa deve ler n inteiros e imprimir quais desses inteiros e o menor.
 Nao e permitido o uso de vetores para resolver esta questao. */
 
#include <stdio.h>

int main(){
	int n, i, num, menor;
	
	printf("Digite a quantidade de numeros: \n");
	scanf("%d", &n);
	
	menor=1;
	
	for(i=0;i<n;i++){
		printf("\nDigite o numero %d: \n",i+1);
		scanf("%d", &num);
		if(num<menor)
			menor = num;
	}

	printf("\nO menor numero digitado foi: %d\n", menor);
	
	return 0;
}
