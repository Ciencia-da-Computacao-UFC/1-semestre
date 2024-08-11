/*2. Escreva uma função recursiva que calcule o n-ésimo termo da sequência de Fibonacci. A sequência
de Fibonacci está definida como: o primeiro e segundo termos são 1 e todos os demais são a soma
dos termos anteriores.*/

#include <stdio.h>
#include <stdlib.h>

//função recursiva para o numero fibonacci
	int fibonacci(int numero,int a, int b){
		if(numero == 0)
		  return 0;
	if(numero > 1)
	  return b + fibonacci(numero - 1, b, a + b);
	else
      return 1;
}

//função principal
int main(){
	int numero = 0;
	printf("Posicao: \n");
	scanf("%d\n",&numero);
	printf("O numero da posicao %d dos numeros fibonacci e %d\n",numero,fibonacci(numero,1,0));
	return 0;
}
