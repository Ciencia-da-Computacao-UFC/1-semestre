/*4.(Estruturas de Repeticao) O numero de Euler e uma constante matematica irracional, 
 como tal nao pode ser representada em um computador, entretanto podemos aproxima-la. 
 Seja: Para valores grandes de n temos que E(n) e uma boa aproximacao para e. 
 Escreva um programa que le um inteiro m e determina o menor valor de n para o qual temos que E(n+1)−E(n)≤10−m.*/

#include <stdio.h>
#include <math.h>

int main(){
	unsigned int m;
	
	scanf("%d",&m);
	
	int n = 1;
	double fat = 2;
	while(1/fat > 1/pow(10,m)){
		n++;
		fat = fat*((double)(n+1));
		
	}
	printf("Menor n = %d\n", n);
	
	
	return 0;
}
