//Crie um programa que some 4 preços e calcule o valor final com 9% de desconto  
//para compilar gcc exercicio4.c -o exercicio4
//para executar ./exercicio4

#include <stdlib.h>
#include <stdio.h>


int main(){
    int preco1, preco2, preco3, preco4;
    float soma;
    float desconto, precoFinal;
    printf("Insira o preco 1:");
    scanf("%d", &preco1);
    printf("Insira o preco 2:");
    scanf("%d", &preco2);
    printf("Insira o preco 3:");
    scanf("%d", &preco3);
    printf("Insira o preco 4:");
    scanf("%d", &preco4);
    soma = preco1 + preco2 + preco3 +preco4;
    desconto  = soma * 0.09;
    precoFinal = soma - desconto;    
    printf("Preco total sem desconto: %f\n", soma);
    printf("Preco valor desconto: %f\n", desconto);
    printf("Preco total com desconto: %f\n", precoFinal);
}