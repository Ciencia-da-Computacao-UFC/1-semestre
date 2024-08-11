/*3. Escreva uma função que receba dois números e determina o máximo divisor comum desses dois
números.*/

#include <stdio.h>

//calcule e retorne o mdc de a e b
int mdc(int a,int b){
   int mdc=1,div=2;
   while(a>=div||b>=div){
      if(a%div==0&&b%div==0){
         a/=div;
         b/=div;
         mdc*=div;
      }
      else div++;
   }
   return(mdc);
}


int main(){
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("O mdc de %d e %d e: %d",num1, num2, mdc(num1,num2));

	return 0;
}

