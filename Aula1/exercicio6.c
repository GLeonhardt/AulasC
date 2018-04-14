//Programa recebe um ano e mostra a idade
//para compilar gcc exercicio6.c -o exercicio6
//para executar ./exercicio6

#include <stdlib.h>
#include <stdio.h>
#define ano 2018

int main()
{
    int anoNascimento, idade;
    printf("Insira um ano");
    scanf("%d", &anoNascimento);
    idade = ano - anoNascimento;
    printf("A idade eh: %d", idade);
    return 0;
}