//Ler dois numeros dividir o 1° pelo 2° e mostrar o resultado da divisão e o resto
//para compilar gcc exercicio6.c -o exercicio6
//para executar ./exercicio6

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int valor1, valor2, resto;
    float resultado;
    printf("Insira um numero");
    scanf("%d", &valor1);
    printf("Insira outro numero");
    scanf("%d", &valor2);
    resultado = valor1 / valor2;
    resto = valor1 % valor2;
    printf("O resultado eh: %f", resultado);
    printf("O resto eh: %d", resto);
    return 0;
}