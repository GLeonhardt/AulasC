// Considerando que a média de aprovação  de uma matéria seja 7 e a média para ficar de exame seja 5 , crie um programa que leia a nota de 2 provas faça a média e mostre se o aluno foi aprovado, reprovado ou está de exame.
#include <stdlib.h>
#include <stdio.h>

int main(){
    float nota;
    if(nota<5){
        printf("reprovado");
    }else{
        if((nota >=5)&&(nota<7)){
            printf("Exame");
        }else{
            printf("Aprovado");
        }
    }
    return 0;
}