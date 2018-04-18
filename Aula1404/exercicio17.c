// Crie um programa que receba o valor de 2 catetos e 
// calcule a hipotenusa utilizando o teorema de Pitágoras (Utilize uma funções da biblioteca math.h)
//para compilar gcc exercicio17.c -o exercicio17
//para executar ./exercicio17
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int catetoA, catetoB, hipotenusa;
    scanf("%d", &catetoA);
    scanf("%d", &catetoB);
    hipotenusa = sqrt(pow(catetoA,2)+pow(catetoB,2));
    printf("%d", hipotenusa);
    return 0;
}