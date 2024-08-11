#include <stdio.h>
#include <stdlib.h>

int main (){
	int n;
	int *pont1, *pont2, *pont3;
	int soma, produto = 0;
	
	scanf("%d", &n);
	pont1 = (int*) malloc (n*sizeof(int));
	pont2 = (int*) malloc (n* sizeof(int));
	pont3 = (int*) malloc (n* sizeof(int));
	
	for (int i = 0; i < n; i++){
		scanf("%d",&pont1[i]);
	}
	for (int i = 0; i < n; i++){
		scanf("%d", &pont2[i]);
	}
	for (int i = 0; i < n; i++){
		pont3[i] = pont1[i]+pont2[i];
	}
	free(pont1);
	free(pont2);
	free(pont3);
	
	return 0;
}
