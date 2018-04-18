// crie um programa que dado o tamanho do lado de um quadrado calcule seu perimetro
//para compilar gcc exercicio10.c -o exercicio10
//para executar ./exercicio10
#include <stdlib.h>
#include <stdio.h>

int main(){
    int lado, perimetro;
    scanf("%d", &lado);
    perimetro = lado *4;
    printf("%d", perimetro);
    return 0;
}