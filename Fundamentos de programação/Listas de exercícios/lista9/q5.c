/*Escreva um programa que lê uma string de digitos binários(0 ou 1) e conta a quantidade de 1’s
digitados*/

#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	int i, cont=0;
	char bin[1]="1";
	fgets(str,sizeof(str),stdin);
	
	for(i=0;i<strlen(str);i++){
		if(str[i]==bin[0])
		cont++;
	}
	printf("A quantidade de 1's digitados foi %d\n",cont);

	return 0;
}
