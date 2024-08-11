/* Crie um programa que le duas expressoes L1 e L2 e determina se L1 tem L2
 *  como sub-expressao, ou seja se L2 esta contida em L1. 
 * Por exemplo aabbcc tem aabb como sub-expressão, mas não abc.*/

#include <stdio.h>
#include <string.h>

int main(){
	
    char L1[20], L2[20];
    int tem = 1;
        
    printf("digite a string L1\n");
    gets(L1);
    printf("digite a string L2\n");
    gets(L2);
    int TamL1= strlen(L1);
    int TamL2= strlen(L2);
    
    if(TamL1<TamL2){
        printf("L2 nao e substring de L1\n");
    }else{
		int i, j;
		for(i=0; i<= (TamL1-TamL2);i++){
			tem = 1;
			for(j=0; j<=(TamL2-1);j++){
				if(L1[i+j]!=L2[j]){
				  tem = 0;
				  break;
				}
			}
			if(tem){
			  break;
			}
		}
		
		if(tem == 0)
			printf("L2 nao e string de L1\n");
		else
			printf("L2 e string de L1\n");
		
    }
    
	return 0;
}
