// Crie um programa que receba um tempo em segundos e converta para horas, minutos e segundos
//para compilar gcc exercicio5.c -o exercicio5
//para executar ./exercicio5

#include <stdlib.h>
#include <stdio.h>


int main(){
    int tempo, horas, minutos, segundos;
    scanf("%d", &tempo);
    horas = tempo/3600;
    minutos = (tempo % 3600)/ 60;
    segundos = (tempo % 3600)% 60;
    printf("%d\n",horas);
    printf("%d\n",minutos);
    printf("%d\n",segundos);
    return 0;
}