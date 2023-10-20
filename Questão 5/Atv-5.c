#include <stdio.h>
#include <stdlib.h>


int main(){
    int qntN = ;

    int notas[qntN][3], media[qntN], i, j, nt, apro, repro;

//----Dando notas----
    for(i = 0 ; i < qntN; i++){
        for(j = 0; j < 3; j++){
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%d", &notas[i][j]);
        }
    }

//----Calculando média----
    for(i = 0; i < qntN; i ++){
        media[i] = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
        if(media[i] == ){
            nt++;
        }else if(media[i] >= 7){
            apro++;
        }else{
            repro++;
        }
    }


    printf("Foram %d alunos aprovados\n", apro);
    printf("Foram %d alunos reprovados\n", repro);
    printf("Foram %d alunos com média \n", nt);

}