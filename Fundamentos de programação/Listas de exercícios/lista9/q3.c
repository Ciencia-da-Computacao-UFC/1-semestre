/*3. Escreva um programa que lê uma frase e duas letras x e y e imprime na tela a frase lida com as
letras x’s trocadas por letras y’s .*/

#include <stdio.h>
#include <string.h>

int main(){
	char frase[100];
	char x,y;
	int i;
		
	
	//teste
	/*do{
	   caractere = getchar();
	   frase[i] = caractere;
	   i++;
	  }while(caractere!= '\n');*/
	  
	fgets(frase,sizeof(frase),stdin);
	scanf(" %c",&x);
	scanf(" %c",&y);
	
	for(i=0; i<strlen(frase);i++){
		if(frase[i]==x){
			frase[i]=y;
			}
			else if(frase[i]==y){
				frase[i]=x;
			}
		}
	
	for(i=0;i<=strlen(frase);i++){
		printf("%c",frase[i]);
	}
	
	return 0;

}
