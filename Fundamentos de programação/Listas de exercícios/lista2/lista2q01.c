/*1. Faça um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos
seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o
valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de
intervalo”.*/


#include <stdio.h>
int main(){
	int sal;
	
	
	scanf("%d",&sal);
	
	if (sal > 0 && sal <= 25)
		printf("O valor se encontra no intervalo entre 0 e 25");
	if (sal > 25 && sal <=50)
		printf("O valor se encontra no intervalo entre 25 e 50");
	if (sal > 50 && sal <=75)
		printf("O valor se encontra no intervalo entre 50 e 75");
	if (sal > 75 && sal <=100)
		printf("O valor se encontra no intervalo entre 75 e 100");
	
	else
		printf("Fora de intervalo");
	
	
	
	
	return 0;
}
