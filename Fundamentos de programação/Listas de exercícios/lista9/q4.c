/*4. Escreva um programa que lê um número em formato de notação científica e o converte para algoritmos
alfa numéricos. Notação científica exemplo: 1,234x10{3} = 1234.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pott(int b, int e){
	if(e == 0){
		return 1;
	}else{
		int resp = 1;
		for(int i = 0; i < e; i++){
			resp *= b;
		}
		return resp;
	}
}
int converte(char c){
	if(c == ','){
		return -1;
		//PARTE DECIMAL
	}else if(c == 'x'){
		return -2;
		//INICIO POTENCIA
	}else if(c == '{'){
		return -3;
		//INICIO EXPOENTE
	}else if(c == '}'){
		return -4;
		//FIM
	}else{
		return c - '0';
	}
}
int tamNumero(int i){
	if( i < 10){
		return 1;
	}
	return 1 + tamNumero(i/10); 
}
int main(){
	char entrada[100];	
	scanf("%s",entrada);
	int tam = strlen(entrada);
	int estado = 0;

	int antesVirgula = 0;
	int numDecimais = 0;
	int base = 0;
	int expoente = 0;	
	for(int i = 0; i < tam; i++){
		int aux = converte(entrada[i]);
		if(aux < 0){
			estado = -10;
		}
		if(estado == 0){//ANTES DA VIRGULA
			antesVirgula = antesVirgula*10 + aux;
		}else if(estado == -1){//VIRGULA
			numDecimais = numDecimais*10 + aux; 
		}else if(estado == -2){//BASE
			base = base*10 + aux;
		}else if(estado == -3){//EXPOENTE
			expoente = expoente*10 + aux;
		}
		
		if(estado == -10){
			estado = aux;
		}
		
	}
	//1,234x10{3}
	printf("AntesVirgula = %d | Decimais = %d | Base = %d | Expoente = %d\n",antesVirgula,numDecimais,base, expoente);
	

	return 0;
}
