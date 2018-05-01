#include <stdlib.h>
#include <stdio.h>

int main(){
    float x, y, resultado;
    scanf("%f", &x);
    scanf("%f", &y);
    if(y ==0){
        printf("y e igual a 0\nDigite novamente");
        scanf("%f", &y);
    }
    resultado =x/y;
    printf("resultado: %f", resultado);
    return 0;
}