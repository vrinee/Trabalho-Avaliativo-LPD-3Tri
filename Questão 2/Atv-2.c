#include <stdio.h>
#include <stdlib.h>


int main(){

    int x, par[10], impar[10], parInd = 0, impInd = 0, i;


//----Resetando os arrays----
    for (i = 0; i < 10; i++){
        par[i] = 0;
        impar[i] = 0;
    }

//----Preenchendo os arrays----
    for (i = 0;i < 10; i++){
        printf("Digite o %dº número:", i + 1);
        scanf("%d", &x);
        if (x % 2 == 0){
            par[i] = x;
            parInd++;
        } else {
            impar[i] = x;
            impInd++;
        }
    }

//----Printando os arrays----
    printf("Números pares:\n");
    for (i = 0; i < parInd; i++){
        printf("%d\n", par[i]);
    }
    printf("Números ímpares:\n");
    for (i = 0; i < impInd; i++){
        printf("%d\n", impar[i]);
    }
}