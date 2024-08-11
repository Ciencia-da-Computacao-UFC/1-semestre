/*8. (Ponteiro) Escreva uma funcao que recebe como argumento 3 ponteiros para inteiros a, b e c 
e modiﬁca seus valores de acordo com a ordem relativas entre eles. 
Ou seja, ao ﬁnal da execucao dessa funcao a aponta para o menor, c para o maior 
e b para o valor intermediario dos valores que apontavam no inicio da chamada a funcao. */

#include <stdio.h>
	
	void funcao(int* pt1, int*pt2, int* pt3){
		int maior,menor,intermediario;
		
		if(*pt1 > *pt2){
			maior = *pt1;
			menor = *pt2;
		}else{
			maior = *pt2;
			menor = *pt1;
		}
		if(*pt3 > maior){
			intermediario = maior;
			maior = *pt3;
		}else{
			if(*pt3 < menor){
				intermediario = menor;
				menor = *pt3;
			}else{
			intermediario = *pt3;
		}
		printf("Menor: %d, intermediario: %d, Maior: %d\n",menor,intermediario,maior);
		}
	}
	
int main(){
	int a,b,c;
	printf("Digite 3 numeros: \n");
	scanf("%d %d %d", &a,&b,&c);
		
	int* pt1;
	int* pt2;
	int* pt3;
	pt1=&a;
	pt2=&b;
	pt3=&c;
	
	funcao(pt1,pt2,pt3);
	
	return 0;
}
