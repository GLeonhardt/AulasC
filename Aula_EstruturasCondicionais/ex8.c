// Crie um programa que leia um número e verifique se ele é par ou ímpar
#include <stdlib.h>
#include <stdio.h>

int main(){
    int valor;
    scanf("%d", &valor);
    if((valor % 2) == 0){
        printf("E par");
    }else{
        printf("E impar");
    }
    return 0;
}
