// Crie um programa que inserido o diâmetro de uma circunferência calcule a sua área (π * r²)
//para compilar gcc exercicio13.c -o exercicio13
//para executar ./exercicio13
#include <stdlib.h>
#include <stdio.h>
#define pi 3.1415

int main(){
    int raio;
    float area;
    scanf("%d", &raio);
    area = pi * (raio * raio);
    printf("%f", area);
    return 0;
}