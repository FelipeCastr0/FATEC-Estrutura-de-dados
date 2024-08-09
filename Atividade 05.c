#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz[5][3];
int atletas[5]={1,2,3,4,5};
int i,j;
int maiorNota, atletaMaiorNota, menorNota;

int main() {

    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 11;
        }
    }

    printf("Matriz de Notas:\n");
    for (i = 0; i < 5; i++) {
        printf("\n");
        printf(" Atleta %i:\t", atletas[i]);
        for (j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
    }

    printf("\n\n");
    for (j = 0; j < 3; j++) {
        maiorNota = -1; // Valor inicializado com um número baixo
        atletaMaiorNota;
        for (i = 0; i < 5; i++) {
            if (matriz[i][j] > maiorNota) {
                maiorNota = matriz[i][j];
                atletaMaiorNota = i;
            }
        }

        printf("\nAparelho %d: Atleta %d obteve a maior nota (%d)", j + 1, atletaMaiorNota + 1, maiorNota);
    }

    printf("\n\n");
    for (i = 0; i < 5; i++) {
        menorNota = 11;
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] < menorNota) {
                menorNota = matriz[i][j];
            }
        }

        printf("Atleta %d: Menor nota obtida foi %d\n", i + 1, menorNota);
    }

    return 0;
}
