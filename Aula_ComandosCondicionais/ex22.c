// Crie um programa que receba o valor de compra e o valor de venda e mostre se o vendedor obteve lucro ou prejuízo
#include <stdlib.h>
#include <stdio.h>

int main(){
    float valorCompra, valorVenda;
    scanf("%d", &valorCompra);
    scanf("%d", &valorVenda);

    if(valorCompra > valorVenda){
        printf("prejuizo");
    }
    if(valorCompra == valorVenda){
        printf("nao teve lucro nem prejuizo");
    }
    if(valorCompra < valorVenda){
        printf("Lucro");
    }
    return 0;
}