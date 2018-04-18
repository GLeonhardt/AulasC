// Crie um programa que receba um valor a ser sacado
// mostre quantas notas de 50, 20, 5 e moedas de 1 serão entregues
//para compilar gcc exercicio8.c -o exercicio8
//para executar ./exercicio8
#include <stdlib.h>
#include <stdio.h>

int main(){
    int valor, notas50, notas20, notas5, moedas1;
    scanf("%d", &valor);
    notas50 = valor /50;
    notas20 = (valor % 50)/20;
    notas5 = ((valor % 50)%20)/5;
    moedas1 = ((valor % 50)%20)%5;
    printf("%d\t%d\t%d\t%d", notas50, notas20, notas5, moedas1);
    return 0;
}