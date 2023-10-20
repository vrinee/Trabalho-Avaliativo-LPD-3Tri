#include <stdio.h>
#include <stdlib.h>


int main(){

    int t = 20;
    int matriz1[t][t], matriz2[t][t], i, j, k, l, op;

//---preenchendo as matrizes---
    for(i = 0; i < t; i++){
        for(j = 0; j < t; j++){
            printf("Digite o valor da posição (%d,%d) da matriz 1: ", i, j);
            scanf("%d", &matriz1[i][j]);
            printf("Digite o valor da posição (%d,%d) da matriz 2: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
   }



//---Printando os repetidos---
    for (i = 0; i < t; i++){
        for (j = 0; j < t; j++){
            for (k = 0; k < t; k++){
                for (l = 0; l < t; l++){
                    if(matriz1[i][j] == matriz2[k][l]){
                        printf("O número %d aparece na coordenada (%d,%d) da primeira matriz e na coordenada (%d,%d) da segunda matriz\n", matriz1[i][j], i, j, k, l);
                    }
                }
            }
        }
    }

}