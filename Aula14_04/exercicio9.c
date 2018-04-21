// Um aparelho de celular custa $1125.50 e pode ser parcelado em até 12 vezes. 
// O pagamento parcelado ocorre um acréscimo de 4.5% no valor de cada parcela. 
// Crie um programa que lê a quantidade de parcelas e mostre o valor da parcela e o valor final do produto.
//para compilar gcc exercicio9.c -o exercicio9
//para executar ./exercicio9
#include <stdlib.h>
#include <stdio.h>
#define acrescimo 0.045

int main(){
    int numParcelas;
    float valorAcrescimo, valorParcela, precoFinal, precoInicial = 1125.5;
    printf("Digite o numero de parcelas entre 1 e 12");
    scanf("%d", &numParcelas);
    valorAcrescimo = (precoInicial /numParcelas) * acrescimo;
    valorParcela = precoInicial /numParcelas + valorAcrescimo;
    precoFinal = valorParcela * numParcelas;
    printf("valor Parcela: %f\nvalor final: %f", valorParcela, precoFinal);
    return 0;
}