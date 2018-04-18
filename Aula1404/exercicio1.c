//Ler 2 valores X e Y, trocar o valor de X com o valor de Y e mostrar na tela
//para compilar gcc exercicio1.c -o exercicio1
//para executar ./exercicio1

#include <stdlib.h>
#include <stdio.h>


int main(){
    int x, y, temp;
    printf("Insira o valor de x ");
    scanf("%d", &x);
    printf("Insira o valor de y ");
    scanf("%d", &y);
    temp = x;
    x = y;
    y = temp;
    printf("valor de x: %d\n",x);
    printf("valor de y: %d\n", y);
    return 0;
}