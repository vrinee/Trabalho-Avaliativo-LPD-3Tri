#include <stdio.h>
#include <stdlib.h>


int main(){

    int input[10], mult5[10], i;

//----lendo o array----
    for (i = 0; i < 10; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &input[i]);
        mult5[i] = input[i] * 5;
    } 


//----printando os arrays----
    for (i = 0; i < 10; i++){
        printf("%d      %d\n", input[i], mult5[i]);
    }

}