//Crie um programa que leia uma entrada e imprima 15% da entrada
//para compilar gcc exercicio2.c -o exercicio2
//para executar ./exercicio2

#include <stdlib.h>
#include <stdio.h>


int main(){
    int entrada;
    float resultado;
    printf("Insira um valor");
    scanf("%d", &entrada);
    resultado = entrada * 0.15;
    printf("15 por cento da entrada e: %f", resultado);
}