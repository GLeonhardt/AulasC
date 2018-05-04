#include <stdlib.h>
#include <stdio.h>

int main(){
    float valor, condicao, valorFinal;
    printf("\nInsira o valor do produto");
    scanf("%f", &valor);
    printf("\nInsira a condicao de pagamento");
    scanf("%f", &condicao);
    if(condicao == 1){
        valorFinal = valor - (valor * 0.1);
        printf("A vista dinheiro ou cheque\nValor da compra: %f", valorFinal);
    }
    if(condicao == 2){
        valorFinal = valor - (valor * 0.05);
        printf("A vista cartao\nValor da compra: %f", valorFinal);
    }
    if(condicao == 3){
        valorFinal = valor;
        printf("Parcelado em 2 vezes\nValor da compra: %f", valorFinal);
    }
    if(condicao == 4){
        valorFinal = valor + (valor * 0.1);
        printf("Parcelado em 3 vezes\nValor da compra: %f", valorFinal);
    }
    return 0;
}
