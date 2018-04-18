// crie um programa que leia dois números inteiros, realize a divisão, 
// mostre o resto e o resto multiplicado pela soma das entradas
//para compilar gcc exercicio7.c -o exercicio7
//para executar ./exercicio7
#include <stdlib.h>
#include <stdio.h>

int main(){
    int x, y, resto, resultado;
    scanf("%d", &x);
    scanf("%d", &y);
    resto = x % y;
    resultado = resto * (x+y);
    printf("Resto:%d\nResultado:%d", resto, resultado);
    return 0;
}