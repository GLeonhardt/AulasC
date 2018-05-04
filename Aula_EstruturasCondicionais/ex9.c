// Crie um programa que leia 4 valores e mostre o menor valor
#include <stdlib.h>
#include <stdio.h>

int main(){
    int valor1, valor2, valor3, valor4, menor = 99999;
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    scanf("%d", &valor3);
    scanf("%d", &valor4);
    
    if(valor1 < menor){
        menor = valor1;
    }
    if(valor2 < menor){
        menor  = valor2;
    }
    if(valor3 < menor){
        menor  = valor3;
    }
    if(valor4 < menor){
        menor  = valor4;
    }
    printf("Menor numero digitado: %d", menor);
    return 0;
}