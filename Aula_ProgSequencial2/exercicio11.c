// Crie um programa que leia dois números X e Y e mostre o resultado de x elevado a Y 
// (Utilize uma função da biblioteca math.h)
//para compilar gcc exercicio11.c -o exercicio11
//para executar ./exercicio11
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int x,y, resultado;
    scanf("%d", &x);
    scanf("%d", &y);
    resultado = pow(x,y);
    printf("resultado: %d", resultado);
    return 0;
}