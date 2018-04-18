// Crie um programa que dada a altura e o peso mostre o Índice de Massa Corporal IMC (Peso/Altura²)
//para compilar gcc exercicio15.c -o exercicio15
//para executar ./exercicio15
#include <stdlib.h>
#include <stdio.h>

int main(){
    float altura, peso, imc;
    scanf("%f", &altura);
    scanf("%f", &peso);
    imc = peso/(altura*altura);
    printf("%f", imc);
    return 0;
}