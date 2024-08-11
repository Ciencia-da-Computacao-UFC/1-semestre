#include <stdio.h>
#include <Math.h>

void q1(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 > n3 && n2 > n3){
        printf("%d", n3);
    }else if(n2 > n1 && n3 > n1){
        printf("%d", n1);
    }else if(n3 > n2 && n1 > n2){
        printf("%d", n2);
    }
}

void q2(){
    int num;
        scanf("%d", &num);
        if(num %2 == 0){
            printf("O número é par!");
        }else{
            printf("O número é ímpar!");
        }
}

void q3(){
    int n1, n2, n3, n4, somaPares=0, somaImpares=0;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if(n1 % 2 == 0)
        somaPares += n1;
    else
        somaImpares += n1;

    if(n2 % 2 == 0)
        somaPares += n2;
    else
        somaImpares += n2;

    if(n3 % 2 == 0)
        somaPares += n3;
    else
        somaImpares += n3;

    if(n4 % 2 == 0)
        somaPares += n4;
    else
        somaImpares += n4;

    printf("PARES: %d\n", somaPares);
    printf("IMPARES: %d", somaImpares);
}

void q4(){
    int num;
        scanf("%d", &num);
        if(num == 1){
            printf("Segunda");
        }else if(num == 2){
            printf("Terça");
        }else if(num == 3){
            printf("Quarta");
        }else if(num == 4){
            printf("Quinta");
        }else if(num == 5){
            printf("Sexta");
        }else if(num == 6){
            printf("Sábado");
        }else if(num == 7){
            printf("Domingo");
        }else{
            printf("Número inválido.");
        }
}


void q5(){
    double a, b, c, delta, x1, x2;
    printf("Insira o valor de A: ");
    scanf("%lf", &a);
    printf("Insira o valor de B: ");
    scanf("%lf", &b);
    printf("Insira o valor de C: ");
    scanf("%lf", &c);

    delta = (b*b) - 4*a*c;
    if(delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("A equação tem raízes: \n");
        printf("X1: %lf", x1);
        printf("X2: %lf", x2);
    } else if (delta == 0){
        x1 = (-b /(2*a));
        printf("A equação tem raíz: \n");
        printf("X1: %lf", x1);
    } else {
        printf("A equação não tem raízes reais, pois no conjunto dos números reais, não existem raízes quadradas de números negativos.");
    }
    
}

int main(){
    int numQuestao;
    printf("Insira o número da questão");
    scanf("%d", &numQuestao);

    switch(numQuestao){
        case 1:
            printf("Questão 01: \n");
            q1();
            break;
        case 2:
            printf("Questão 02: \n");
            q2();
            break;

        case 3:
            printf("Questão 03: \n");
            q3();
            break;
        case 4:
            printf("Questão 04: \n");
            q4();
            break;
        case 5:
            printf("Questão 05: \n");
            q5();
            break;
        default: 
            printf("Questão inválida \n");
            break;
    }
    return 0;
}
