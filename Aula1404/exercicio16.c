// Um carro realiza 9,65 km/l de gasolina. Calcule quantos litros 
// o carro irá consumir em uma viagem de distância variável
//para compilar gcc exercicio16.c -o exercicio16
//para executar ./exercicio16
#include <stdlib.h>
#include <stdio.h>

int main(){
    float distancia, litros;
    scanf("%f", &distancia);
    litros = distancia / 9.65;
    printf("%f", litros);
    return 0;
}