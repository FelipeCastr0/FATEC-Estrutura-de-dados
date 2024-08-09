#include<stdio.h>
#include<stdlib.h>

int vetor1[5];
int vetor2[5];
int vetorOrdenado[10];
int i,j,k;
int aux;

int main(){

    //GERA E INSERE OS VALORES ALEATÓRIOS NOS VETORES.
    srand(time(NULL));
    for(i=0;i<5;i++){
        vetor1[i]=rand()%100;
        vetor2[i]=rand()%100;
    }

    printf("\nVetor 1: ");
    for(i=0;i<5;i++){
        printf("%i,", vetor1[i]);
    }
    printf("\nVetor 2: ");
    for(i=0;i<5;i++){
        printf("%i,", vetor2[i]);
    }

    for(i=4;i>=0;i--){
        for(j=0;j<i;j++){
            if(vetor1[i]<vetor1[j]){
                aux=vetor1[i];
                vetor1[i]=vetor1[j];
                vetor1[j]=aux;
            }
            if(vetor2[i]<vetor2[j]){
                aux=vetor2[i];
                vetor2[i]=vetor2[j];
                vetor2[j]=aux;
            }
        }
    }

    j=0;
    for(i=0;i<=9;i++){
        if(i<5){
            vetorOrdenado[i]=vetor1[i];
        }else{
            vetorOrdenado[i]=vetor2[j];
            j++;
        }
    }

    for(i=9;i>=0;i--){
        for(j=0;j<i;j++){
            if(vetorOrdenado[i]<vetorOrdenado[j]){
                aux=vetorOrdenado[i];
                vetorOrdenado[i]=vetorOrdenado[j];
                vetorOrdenado[j]=aux;
            }
        }
    }

    printf("\n\nVetor Ordenado: ");
        for(i=0;i<10;i++){
            printf("%i, ", vetorOrdenado[i]);
    }
    printf("\n\n");



return 0;
}
