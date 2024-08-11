/*3 questão*/

#include <stdio.h>

int main() {
	float salario, nsal, reajuste, perReaj;
	
	printf("Digite o salario: ");
	scanf("%f",&salario);
	
	if(salario >= 0 && salario <=400){
		nsal = salario + (salario*15/100);
		reajuste = nsal-salario;
		perReaj=(((nsal - salario)/salario)*100);
	
	}
	
	else if(salario > 400 && salario <= 800){
		nsal = salario + (salario*12/100);
		reajuste = nsal-salario;
		perReaj=(((nsal - salario)/salario)*100);
	
	}
	
	else if(salario > 800 && salario <=1200){
		nsal = salario + (salario*10/100);
		reajuste = nsal-salario;
		perReaj=(((nsal - salario)/salario)*100);
	}
	
	else if(salario > 1200 && salario <= 2000){
		nsal = salario + (salario*7/100);
		reajuste = nsal-salario;
		perReaj=(((nsal - salario)/salario)*100);
		
	}else{
		nsal = salario + (salario*4/100);
		reajuste = nsal-salario;
		perReaj=(((nsal - salario)/salario)*100);
	}	
		
	printf("O novo salario e %2.f, o valor de reajuste foi de %2.f e o percentual de reajuste ganho foi de %2.f por cento\n", nsal, reajuste,perReaj);
	
	
	return 0;
}
