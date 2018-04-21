#include <stdlib.h>
#include <stdio.h>

int main(){
    int lado1, lado2, area;
    printf("Digite a medida do lado 1");
    scanf("%d", &lado1);
    printf("Digite a medida do lado 1");
    scanf("%d", &lado2);
    
    if(lado1 == lado2){
        printf("e um quadrado");
    }else{
        printf("e um retangulo");

    }
    area = lado1 * lado2;
    printf("area: %d", area);
    return 0;
}