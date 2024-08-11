#include <stdio.h>

	int x;
int maiorR(int n, int v[]){
	int maior;
	if (n==1) maior=v[0];
	else {
		maior=maiorR(n-1,v);
		if(maior < v[n-1]) x= v[n-1];
	return x;
}	
}
/*
int main(){
	int v[]={5,10,2,1,13,1,4,6,7,8};
	int maior = maiorR(10,v);
	printf("%d",maior);
	return 0;
}
                                                                                                                                                                                                                                                                                                                                     
*/

int main(){
	int v[10];
	
	for(int i=0;i<10;i++){
	scanf("%d",&v[i]);
	}

	int maior = maiorR(10,v);
	printf("%d\n",maior);
	return 0;
}
