// Crie um programa que dado a base e a altura calcule a área de um triângulo Isósceles (base*altura/2)
//para compilar gcc exercicio12.c -o exercicio12
//para executar ./exercicio12
#include <stdlib.h>
#include <stdio.h>

int main(){
    int base, altura;
    float area;
    scanf("%d", &base);
    scanf("%d", &altura);
    area = (base * altura)/2;
    printf("%f", area);
    return 0;
}