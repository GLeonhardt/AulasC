// Crie um programa que leia 3 valores e realize a soma dos dois maiores
#include <stdlib.h>
#include <stdio.h>

int main(){
    int valor1, valor2, valor3, soma, maior = 0, maior2 = 0;
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    scanf("%d", &valor3);

    if(valor1 > maior){
        maior = valor1;
    }
    if(valor2 > maior){
        maior = valor2;
    }
    if(valor3 > maior){
        maior = valor3;
    }

    if((valor1 > maior2)&& (valor1 != maior)){
        maior2 = valor1;
    }
    if((valor2 > maior2)&& (valor2 != maior)){
        maior2 = valor2;
    }
    if((valor3 > maior2)&& (valor3 != maior)){
        maior2 = valor1;
    }
    soma = maior + maior2;
    printf("soma dos dois maiores valores: %d", soma);
    return 0;
}