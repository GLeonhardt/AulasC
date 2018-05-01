// Um trabalhador recebe $5.74 por hora trabalhada. 
// Calcule seu salário mensal após receber a quantidade de horas trabalhadas por semana.
//para compilar gcc exercicio6.c -o exercicio6
//para executar ./exercicio6

#include <stdlib.h>
#include <stdio.h>
#define salarioHora 5.74

int main(){
    int horas;
    float salarioSemana, salarioMes;
    Printf("Entre as horas trabalhadas por semana");
    scanf("%d", &horas);
    salarioSemana = salarioHora * horas;
    salarioMes = salarioSemana *4;
    printf("Salario mensal: %f", salarioMes);
    return 0;
}