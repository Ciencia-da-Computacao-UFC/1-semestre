/*4. Escreva uma função que receba dois ponteiros para inteiros e inverte o conteúdo apontado por estes
dois valores.*/

#include <stdio.h>
void Inverte(int *a, int *b){
   int *aux;
   aux = a; 
   a = b; 
   b = aux;
   printf("i = %d \nj = %d\n", *a, *b);
}

int main () {
	int *t1, *t2;
	int a; //= 0;
	int b; //= 1;
	printf("Insira um valor para i e em seguida outro para j: \n");
	scanf("%d %d", &a, &b);
	t1 = &a;
	t2 = &b;
	
	Inverte(t1,t2);
	printf("ok");
	
	return 0;
}
