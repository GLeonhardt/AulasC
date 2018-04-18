//Crie um programa que receba valores para X e Y  
// 1- multiplique X pelo inverso de Y 
// 2- some Y com o inverso de X
//para compilar gcc exercicio3.c -o exercicio3
//para executar ./exercicio3

#include <stdlib.h>
#include <stdio.h>


int main(){
    int x, y, inversoX, inversoY, resultado1, resultado2;
    printf("insira valor de x");
    scanf("%d", &x);
    printf("insira valor de y");
    scanf("%d", &y);
    inversoX = x * (-1);
    inversoY = y * (-1);
    resultado1 = x * inversoY;
    resultado2 = y + inversoX;
    printf("resultado 1 e: %d\n",resultado1);
    printf("resultado 2 e: %d\n",resultado2);
}