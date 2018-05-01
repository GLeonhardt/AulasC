// Considerando a carga horária de um curso sendo 68 aulas e a frequência mínima de um aluno para ser aprovado igual a 75% crie um programa que receba a quantidade de faltas e indique se o aluno foi aprovado ou não.
#include <stdlib.h>
#include <stdio.h>

int main(){
    int faltas, frequencia;
    scanf("%d", &faltas);
    frequencia = 68 * 0.25;
    if(faltas > frequencia ){
        printf("reprovou por faltas");
    }else{
        printf("Nao reprovou por faltas");
    }
    return 0;
}