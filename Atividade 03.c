#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float vetor1[20];
float vetor2[20];
float vetorInterseccao[20];
int i,j,k;

int main(){
    srand(time(NULL));
    for(i=0;i<20;i++){
        vetor1[i]=rand()%100;
        vetor2[i]=rand()%100;
        vetorInterseccao[i]=0;
    }

    printf("\nVetor 1: ");
    for(i=0;i<20;i++){
        printf("%.2f, ", vetor1[i]);
    }
    printf("\n\nVetor 2: ");
    for(i=0;i<20;i++){
        printf("%.2f, ", vetor2[i]);
    }

    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            if(vetor1[i]==vetor2[j]){
                for(k=0;k<20;k++){
                    if(vetorInterseccao[k]==vetor1[i]){
                        break;
                    }else if(vetorInterseccao[k]==0){
                        vetorInterseccao[k]=vetor1[i];
                        k=20;
                    }
                }
            }
        }
    }
    printf("\n\nVetor Interseccao: ");
    for(i=0;i<20;i++){
        if(vetorInterseccao[i]!=0){
            printf("%.2f, ", vetorInterseccao[i]);
        }
    }
printf("\n\n");
return (0);
}
