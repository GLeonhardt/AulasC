#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float peso, altura, imc;
    printf("Digite o peso");
    scanf("%f", &peso);
    printf("Digite a altura");
    scanf("%f", &altura);
    imc = peso/pow(altura,2);
    if(imc < 18.5){
        printf("A pessoa esta abaixo do peso");
    }else{
        if((imc >=18.5) && (imc<25)){
            printf("A pessoa esta no peso ideal");
        }else{
            if((imc >=25) && (imc<30)){
                printf("A pessoa esta acima do peso");
            }else{
                if(imc >= 30){
                    printf("a pessoa possui obesidade");
                }
            }
        }
    }
    return 0;
}