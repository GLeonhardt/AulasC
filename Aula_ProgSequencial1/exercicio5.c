//Ler uma entrada do teclado e somar com uma constante
//para compilar gcc exercicio5.c -o exercicio5
//para executar ./exercicio5

#include <stdlib.h>
#include <stdio.h>
#define constante 20 

int main()
{
    int valor, soma;
    printf("Insira um valor");
    scanf("%d", &valor);
    soma = valor + constante;
    printf("A soma eh igual a: %d", soma);
    return 0;
}