/*2. (Estruturas Condicionais) Faca um programa que simula uma calculadora basica. 
Deve existir um menu para o usuario escolher sua operacao(4 operacoes basicas), 
depois ele digita o primeiro numero e por ﬁm o segundo. */

#include <stdio.h>

	void soma(float a, float b){
		printf("%.2f\n",a+b);
	}

	void subtracao(float a, float b){
		printf("%.2f\n",a-b);
	}

	void multiplicacao(float a, float b){
		printf("%.2f\n",a*b);
	}

	void divisao(float a, float b){
		if( b != 0)
			printf("%.2f\n",a/b);
		else
			printf("Nao pode dividor por zero\n");
	}

	void calculadora(int a, int b, char oper){

	}


	int main(){
        float num1,num2;
        char oper;

        do{
			printf("\t\tCalculadora\n\n");

            printf("Operacoes disponiveis\n");
            printf("'+' : soma\n");
            printf("'-' : subtracao\n");
            printf("'*' : multiplicao\n");
            printf("'/' : divisao\n");
            

            printf("\nDigite a expressao na forma: numero 1 operador numero 2\n");
            printf("Exemplos: 1 + 1 ,  2.1 * 3.1\n");
            printf("Para sair digite: 0 0 0\n");


            scanf("%f", &num1);
            scanf(" %c",&oper);
            scanf("%f", &num2);

            //system("cls");

            printf("Calculando: %.2f %c %.2f = ", num1,oper,num2);
            system("cls");
            

            switch( oper )
            {
                case '+':
                        soma(num1, num2);
                        break;

                case '-':
                        subtracao(num1, num2);
                        break;

                case '*':
                        multiplicacao(num1, num2);
                        break;

                case '/':
                        divisao(num1, num2);
                        break;
                        
                default:
                        if(num1 != 0 && oper != '0' && num2 != 0)
                            printf(" Operador invalido\n\n ");
                        else
                            printf(" Fechando calculadora!\n ");
            }

        }while(num1 != 0 && oper != '0' && num2 != 0);

}
