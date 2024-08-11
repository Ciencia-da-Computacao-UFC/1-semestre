#include <stdio.h>
#include <stdlib.h>
int main(){
	/*int x, y, i, j;
	scanf("%d %d", &x, &y);
	int m[x][y];
	for(i=0; i<x; i++){
		for(j=0; j<y; j++){
			m[i][j] = rand()%100;
			printf("%3d ", m[i][j]);
		}
		puts(" ");
	} */
	int i;
	FILE *pont_arq;
	char valor[100];
	pont_arq = fopen("Teste.txt", "wt");
	if(pont_arq == NULL){
		printf("Problemas na criacao do arquivo");
		return;
	}else{
		scanf(" %s", valor);
		fprintf(pont_arq, " %s", valor);
	}
	
	fclose(pont_arq);
}
