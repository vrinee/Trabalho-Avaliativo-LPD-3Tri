#include <stdio.h>
#include <stdlib.h>


int main(){

    int matriz1[4][4], matriz2[4][4], maiores[4][4], i, j;

//---preenchendo as matrizes---
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Digite o valor da posição (%d,%d) da matriz 1: ", i, j);
            scanf("%d",&matriz1[i][j]);
            printf("Digite o valor da posição (%d,%d) da matriz 2: ", i, j);
            scanf("%d",&matriz2[i][j]);
        }
    }


//---Determinando os maiores---
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j ++){
            if(matriz1[i][j] >= matriz2[i][j]){
                maiores[i][j] = matriz1[i][j];
            }else {
                maiores[i][j] = matriz2[i][j];
            }
        }
    }


//---Printando os maiores---
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j ++){
            printf("%d ", maiores[i][j]);
        }
        printf("\n");
    }
}