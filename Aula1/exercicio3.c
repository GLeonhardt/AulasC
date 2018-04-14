//Ler um numero inteiro e mostrar na tela
//para compilar gcc exercicio3.c -o exercicio3
//para executar ./exercicio3

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int valor;
    printf("insira um numero inteiro");
    scanf("%d", &valor);
    printf("Valor inserido foi: %d", valor);
    return 0;
}