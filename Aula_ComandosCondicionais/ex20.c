#include <stdlib.h>
#include <stdio.h>

int main(){
    int prato, sobremesa, bebida, cal;
    cal = 0;
    printf("digite o prato desejado\n1-Vegetatiano\n2-Peixe\n3-Carne\n");
    scanf("%d", &prato);
    printf("digite a sobremesa desejada\n1-Abacaxi\n2-Sorvete\n3-Chocolate\n");
    scanf("%d", &sobremesa);
    printf("digite a bebida desejada\n1-Cha\n2-Suco\n3-Refrigerante\n");
    scanf("%d", &bebida);

    if(prato == 1){
        cal = cal + 180;
    }else{
        if(prato == 2){
            cal = cal + 230;
        }else{
            if(prato == 3){
                cal = cal + 350;
            }else{
                printf("\nOpcao invalida\n");
            }
        }
    }
    if(sobremesa == 1){
        cal = cal + 75;
    }else{
        if(sobremesa == 2){
            cal = cal + 150;
        }else{
            if(sobremesa == 3){
                cal = cal + 200;
            }else{
                printf("\nOpcao invalida\n");
            }
        }
    }
    if(bebida == 1){
        cal = cal + 20;
    }else{
        if(bebida == 2){
            cal = cal + 30;
        }else{
            if(bebida == 3){
                cal = cal + 80;
            }else{
                printf("\nOpcao invalida\n");
            }
        }
    }
    printf("\nO total de calorias da sua reficao e: %d\n", cal);
    return 0;
}