#include <stdio.h>
#include <stdlib.h>


int main() {

    int input[10], rep[2][10], aux[10], i, j;

//-----Resetando os arrays----
    for (i = 0; i < 10; i++){
        rep[0][i] = 0;
        rep[1][i] = 0;
    }

//-----Preenchendo os arrays----
    for (i = 0; i < 10; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &input[i]);
        aux[i] = input[i];
    }

//-----Checando os repetidos----
    for (i = 0;i < 10; i++){
        for(j = 0; j < 10; j++){
            if (input[i] == aux[j]){
                rep[0][i] = input[i];
                aux[j] = 0;
                rep[1][i]++;
            }
        }
    }

//-----Printando os repetidos----
    for (i = 0; i < 10; i++){
        if (rep[1][i] > 1){
            printf("O número %d aparece %d vezes\n", rep[0][i], rep[1][i]);
        }
    }
}