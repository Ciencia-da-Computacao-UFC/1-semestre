/*10.(Arquivo) Crie um programa que le duas numeros 0≤x≤100 e 0≤y≤100 do teclado, 
cria uma matriz com x linhas e y colunas, preenche esta matriz de maneira aleatoria 
(sugestao: usar a funcao rand()) e imprimi esta matriz em um arquivo da seguinte maneira:
 • A primeira linha e o numero de linhas. • A segunda linha e o numero de colunas. • 
 A partir da terceira linha temos a matriz, linha por linhas com espaco normal entre os numeros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x = 0, y = 0, i;
    int **matriz;

    printf("Escreva dois numeros maiores do que 0 e menores do que 100\n");
    scanf("%d %d", &x, &y);

    matriz = (int *) calloc(x, sizeof (int* )); //aloca as linhas
    for (i = 0; i < x; i++) {
        matriz[i] = (int *) calloc(y, sizeof (int)); //aloca as colunas
    }
	srand(time(NULL));
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            
            matriz[i][j] = rand() % 100;
        }
    }
    FILE * fp = fopen("matriz.txt", "w");
    if (fp == NULL) printf("ERRO!");
    fprintf(fp, "%d \n%d\n", x, y);
    for (int i = 0; i < x; i++) {
        fprintf(fp, "\n");
        for (int j = 0; j < y; j++) {
            fprintf(fp, "  %d      ", matriz[i][j]);
        }
    }
    fclose(fp);
    free(matriz);
    return 0;
}
