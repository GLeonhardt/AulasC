#include<stdlib.h>
#include<stdio.h>

int main(){
    int a =0, b =1, soma, termos, i;
    scanf("%d", &termos);
    for(i = 0; i<=termos; i++){
        soma = a +b;
        a = b;
        b = soma;
        printf(" %d ", soma);
    }
}