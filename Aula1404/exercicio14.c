// Crie um programa que dado o diâmetro de uma circunferência calcule o comprimento (2*π*r)
//para compilar gcc exercicio14.c -o exercicio14
//para executar ./exercicio14
#include <stdlib.h>
#include <stdio.h>
#define pi 3.1415

int main(){
    int raio;
    float circunferencia;
    scanf("%d", &raio);
    circunferencia = 2 * pi * raio;
    printf("%f", circunferencia);
    return 0;
}