#include <stdio.h>

int main() {
    int vetorInicial[10];
    int vetorPar[10];
    int vetorImpar[10];
    int pares = 0;
    int impares = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o Numero %i:\n",i+1);
        scanf("%d", &vetorInicial[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetorInicial[i] % 2 == 0) {
            vetorPar[pares] = vetorInicial[i];
            pares++;
        } else {
            vetorImpar[impares] = vetorInicial[i];
            impares++;
        }
    }

    printf("Vetor de Numeros Pares:\n");
    for (int i = 0; i < pares; i++) {
        printf("%d ", vetorPar[i]);
    }
    printf("\n");

    printf("Vetor de Numeros Impares:\n");
    for (int i = 0; i < impares; i++) {
        printf("%d ", vetorImpar[i]);
    }
    printf("\n");

    return 0;
}
