//Crie um programa que leia um caracter e verifique se é uma vogal
#include <stdlib.h>
#include <stdio.h>

int main(){
    char letra;
    printf("Digite um caracter qualquer");
    scanf("%c", &letra);
    if((letra == 'a') || (letra=='e') || (letra == 'i') || (letra == 'o') || (letra == 'u') || (letra == 'A') || (letra == 'E') || (letra == 'I') || (letra == 'O') || (letra == 'U')){
        printf("E uma vogal");
    }else{
        Printf("Nao e uma vogal");
    }
    return 0;
}