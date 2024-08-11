/*6. Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres (considere que as idades
dos homens serão sempre diferentes entre si, bem como as das mulheres). Calcule e escreva a
soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do
homem mais novo com a mulher mais velha.*/

#include <stdio.h>

int main(){
	int h1,h2,m1,m2;
	int Hvelho,Mnova,Hnovo,Mvelha;
	
	printf("Digite a idade de dois homens:\n");
	scanf("%d %d", &h1,&h2);
	
	printf("Digite a idade de duas mulheres:\n");
	scanf("%d %d", &m1,&m2);
		
	if(h1 > h2){
		Hvelho = h1;
		Hnovo = h2;
		}else{
			Hvelho = h2;
			Hnovo = h1;
		}
	if(m1>m2){
		Mvelha=m1;
		Mnova=m2;
		
	}else{
		Mvelha=m2;
		Mnova=m1;
	}
	
	printf("A soma das idades do homem mais velho com a mulher mais nova e %d\n", Hvelho+Mnova);
	printf("O produto das idades do homem mais novo com a mulher mais velha e %d\n", Hnovo*Mvelha);

	return 0;
}
