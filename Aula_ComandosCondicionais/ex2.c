#include <stdlib.h>
#include <stdio.h>

int main(){
    int anoNasc, idade;
    printf("Digite o ano de nascimento");
    scanf("%d", &anoNasc);
    idade = 2018 - anoNasc;
    if(idade >= 18){
        printf("A pessoa e maior de idade");
    }
    return 0;
}