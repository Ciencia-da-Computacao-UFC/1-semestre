/*2. Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao
Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.*/


#include <stdio.h>
int main(){
	int A,B;
	
	scanf("%d %d", &A,&B);
	
	if(A % B == 0)
		printf("Sao multiplos\n");
	else
		printf("Nao sao multiplos");
	
	
	
	
	return 0;
}
