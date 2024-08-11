/*1.(Operadores) Faca um programa que le um inteiro n e retorna a soma de seus divisores positivos ate 5. 
 * Por exemplo, se n = 10 então o programa imprime 1+2+5 = 8.
 *  Nao e permitido uso de lacos(for e while) nem estruturas de condicao (if, else, switch) 
 * e nem funcoes para resolver esta questao. */

#include <stdio.h>


int main(){


	int a, b, c, d;
	int n;
	int soma;
	
	scanf("%d", &n);
	
	a = n % 2 == 0 ? 2 : 0;
	b = n % 3 == 0 ? 3 : 0;
	c = n % 4 == 0 ? 4 : 0;
	d = n% 5 == 0 ? 5 : 0;

	soma = a+b+c+d+1;

	printf("%dn", soma);


	return 0;
}
