/*2. Escreva uma função que receba dois inteiros e determina o mínimo múltiplo comum desses dois
números.*/

#include <stdio.h>

	int mmc(int num1, int num2) {

		int resto, a, b;

		a = num1;
		b = num2;

		do {
			resto = a % b;

			a = b;
			b = resto;

		} while (resto != 0);

		return ( num1 * num2) / a;
	}
	
	int main(){
	int num1, num2;
	
	
	scanf("%d %d", &num1,&num2);
	printf("%d\n", mmc(num1,num2));
	
	return 0;
}
