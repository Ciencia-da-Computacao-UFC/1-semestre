#include <stdio.h>
#include <stdlib.h>

int main(){
	int **m1, **m2, **m3;
	int n;
	
	scanf("%d", &n);
		m1 = (int**) malloc (n*sizeof(int*));
		m2 = (int**) malloc (n*sizeof(int*));
		m3 = (int**) malloc (n*sizeof(int*));
	
	for(int i = 0; i < n; i++){
			
		m1[i] = (int*) malloc (n*sizeof(int));
		m2[i] = (int*) malloc (n*sizeof(int));
		m3[i] = (int*) malloc (n*sizeof(int));
	}
	for(int i = 0; i < n; i++){
		for(int i = 0; i < m; i++){
			scanf("%d %d", &m1[i][j],&m2[i][j]);
		}
	}	
	for(int i = 0; i < n; i++){
		for(j = 0; j < n; j++){
		printf("m1[%d][%d]");
		}
	}
	return 0;
}
