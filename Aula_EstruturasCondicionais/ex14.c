// Um comerciante usa margem de lucro de 45% se o valor de compra do produto for menor que R$20,00 e 30% nos demais casos. Dado o valor do produto, calcule o preço de venda. 
#include <stdlib.h>
#include <stdio.h>

int main(){
    float valorCompra, valorVenda;
    scanf("%f", &valorCompra);
    if(valorCompra <= 20){
        valorVenda = valorCompra + (valorCompra * 0.45);
    }else{
        valorVenda = valorCompra + (valorCompra * 0.3);
    }
    printf("Valor de venda do produto: %f", valorVenda);
    return 0;
}