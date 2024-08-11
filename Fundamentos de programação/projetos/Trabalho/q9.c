/*Implementação de função recursiva*/

#include <stdio.h>

	
	int A(int m, int n){
		if(m==0){
		   return n+1;
	 }else if(m > 0 && n==0){
		   return A(m-1,0);
		}
		return A(m-1,A(m-1,n-1));
		
	 }
	

int main(){
	int m, n;
	
	scanf("%d %d", &m, &n);
	
	int resultado = A(m,n);
	
	printf("%d\n", resultado);	
	
	
	return 0;
}
