/*1. Escreva um programa que lê um nome e calcula quantas vogais este nome tem.*/

#include <stdio.h>
#include <string.h>

int main(){
	char nome[100];
	int i, cont=0;
	printf("Digite um nome:\n");
	fgets(nome,sizeof(nome),stdin);
	
	for(i=0;i<strlen(nome);i++){
		if(nome[i]=='a'||nome[i]=='e'||nome[i]=='i'||nome[i]=='o'||nome[i]=='u')
			cont++;
	}
	printf("Esse nome possui %d vogais\n",cont);

	return 0;
}
