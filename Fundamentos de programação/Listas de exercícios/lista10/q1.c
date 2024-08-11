/*1. Escreva um programa que lê um inteiro n e um caractere c e cria.
- Um vetor de n inteiros se c = 'a'.
- Um vetor de n caracteres se c = 'b'.
- Um vetor de n floats se c for diferente de 'a' e 'b'.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	char c;
	int* vetorInt;
	char* vetorChar;
	float* vetorFloat;

	scanf("%d", &n);
	scanf(" %c", &c);

	
	if(c=='a'){
		vetorInt = (int*)malloc(sizeof(int)*n);
	}else if(c=='b'){
		vetorChar = (char*)malloc(sizeof(char)*n);
		
	}else{
		vetorFloat = (float*)malloc(sizeof(float)*n);
	}
	

	return 0;
}
