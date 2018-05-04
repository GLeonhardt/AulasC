// Crie um programa que leia os 3 lados de um triângulo e mostre qual o seu tipo.
// Triângulo equilátero: Possui os 3 lados iguais. 
// Triângulo isósceles: Possui 2 lados iguais. 
// Triângulo escaleno: Possui 3 lados diferentes. 
#include <stdlib.h>
#include <stdio.h>

int main(){
    int lado1, lado2, lado3;
    scanf("%d", &lado1);
    scanf("%d", &lado2);
    scanf("%d", &lado3);

    if((lado1 == lado2)&& (lado1 == lado3)){
        printf("Triangulo equilatero");
    }else{
        if((lado1 == lado2) || (lado2 == lado3)){
            printf("Triangulo isosceles");
        }else{
            if((lado1 != lado2) && (lado1 != lado3) &&(lado2 != lado3)){
                printf("Triangulo Escaleno");
            }
        }
    }
    return 0;
}