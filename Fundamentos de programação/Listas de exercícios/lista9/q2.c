/*2. Escreva um programa que lê um nome e calcula quantas consoantes este nome tem.*/

#include <stdio.h>
#include <string.h>

int main(){
	char nome[100];
	char consoantes[100] = "bcdfghjklmnpqrstvwxyzBCDEFGHJKLMNPQRSTVWXYZ";
	
	int l,j, cont=0;
	int tamNome = strlen(nome);
	int tamCons = strlen(consoantes);
	
	printf("Digite um nome: ");
	fgets(nome,sizeof(nome),stdin);
	
	
	for(l=0;l<tamNome;l++){
		for(j=0;j<tamCons;j++){
			if(nome[l]==consoantes[j]){
			cont++;
			//break;
			}
		}
	}
	printf("Esse nome possui %d consoantes\n",cont);
	
	return 0;
}
