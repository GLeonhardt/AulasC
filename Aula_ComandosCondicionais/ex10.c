// )Crie um programa que receba a quantidade de gols marcados pelo time A e pelo time B e mostre o vencedor
#include <stdlib.h>
#include <stdio.h>

int main(){
    int timeA, timeB;
    printf("Digite o numero de gols marcados pelo time A");
    scanf("%d", &timeA);
    printf("Digite o numero de gols marcados pelo time B");
    scanf("%d", &timeB);

    if(timeA > timeB){
        printf("Time A venceu");
    }else{
        if(timeA == timeB){
            printf("empatou");
        }else{
            printf("time B venceu");
        }
    }
    return 0;
}