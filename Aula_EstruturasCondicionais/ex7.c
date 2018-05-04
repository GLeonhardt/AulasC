//Crie um programa que calcule o imposto que deverá ser pago de acordo com a faixa de preço de um produto
#include <stdlib.h>
#include <stdio.h>

int main(){
    float preco, imposto;
    scanf("%f", &preco);

    if(preco <= 600){
        imposto = 0;
    }else{
        if((preco >600)&&(preco <=2000)){
            imposto = preco * 0.2;
        }else{
            if(preco > 2000){
                imposto = preco * 0.3;
            }
        }
    }
    printf("Valor de imposto que devera ser pago: %f", imposto);
    return 0;
}