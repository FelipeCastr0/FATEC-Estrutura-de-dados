#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz[4][4];
    int maiorValor = 0;
    int menorValor = 100;
    int iMaior, jMaior, iMenor, jMenor;

int main() {

    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 100; // Números de 0 a 99
        }
    }

    printf("Matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                iMaior = i;
                jMaior = j;
            }
            if (matriz[i][j] < menorValor) {
                menorValor = matriz[i][j];
                iMenor = i;
                jMenor = j;
            }
        }
    }



    printf("\n");
    printf("Maior valor: %d, Localizacão: Linha %d, Coluna %d\n", maiorValor, iMaior + 1, jMaior + 1);
    printf("Menor valor: %d, Localizacão: Linha %d, Coluna %d\n", menorValor, iMenor + 1, jMenor + 1);

    return 0;
}
