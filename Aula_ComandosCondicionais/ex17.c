// Crie um programa que leia os ângulos de um triângulo e mostre o seu tipo
// Triângulo retângulo: possui um ângulo reto (90 graus). 
// Triângulo obtusângulo: possui um ângulo obtuso (ângulo maior que 90 graus). 
// Triângulo acutângulo: possui 3 ângulos agudos (ângulo menor que 90 graus).
#include <stdlib.h>
#include <stdio.h>

int main(){
    int angulo1, angulo2, angulo3;
    scanf("%d", &angulo1);
    scanf("%d", &angulo2);
    scanf("%d", &angulo3);

    if((angulo1 == 90) || (angulo2 == 90) || (angulo3 == 90)){
        printf("Triangulo retangulo");
    }else{
        if((angulo1 != 90) || (angulo2 != 90) || (angulo3 != 90)){
            printf("Triangulo obtusangulo");
        }else{
            if((angulo1 < 90) || (angulo2 < 90) || (angulo3 < 90)){
                printf("Triangulo Escaleno");
            }
        }
    }
    return 0;
}