
#include <stdio.h>

//MULTIPLICACAO MATRICIAL 3x3

int main(){
	int A[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
	int B[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
	int C[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			C[i][j]= 0;
			for(int k =0;k<3;k++){
					C[i][j] += A[i][k]*B[k][j];
				}
			}
		}
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("%5d ",C[i][j]);
			}
			printf("\n");
		}
	
	
	
	
	
	
	
	
	return 0;
}
