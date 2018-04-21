#include <stdlib.h>
#include <stdio.h>

int main(){
    int valor;
    printf("Digite um valor");
    scanf("%d", &valor);
    if(valor > 100){
        printf("o valor e maior que 100");
    }
    else{
        if((valor >=50 )&& (valor <= 70)){
            printf("O valor esta entre 50 e 70");
        }
        else{
            printf("O valor nao esta no intervalo esperado");
        }
    }
    return 0;
}