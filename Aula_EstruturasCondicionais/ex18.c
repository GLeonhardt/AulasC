// O regulamento de pesca de uma determinada locação permite que sejam pescados apenas 60kg por dia. A multa caso o peso ultrapasse o limite é de R$5.50 por kg excedente. Crie um programa que receba a quantidade pescada no dia e informe se a quantidade está dentro do regulamento ou não e a multa.
#include <stdlib.h>
#include <stdio.h>

int main(){
    float peso, multa = 0, excedente;
    scanf("%f", &peso);
    if(peso > 60){
        printf("ultrapassou o limite");
        excedente = peso - 60;
        multa = excedente * 5.5;
    }else{
        printf("Nao ultrapassou o limite");
    }
    printf("Multa a ser paga: %f", multa);
    return 0;
}