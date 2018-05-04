// Crie um programa que leia o número do mês e mostre quantos dias terá
#include <stdlib.h>
#include <stdio.h>

int main(){
    int mes;
    scanf("%d", &mes);
    if(mes >=13){
        printf("Mes inexistente");
    }else{
        
        if((mes == 1) || (mes == 3) ||(mes == 5) ||(mes == 7) ||(mes == 8) ||(mes == 10) ||(mes == 12)){
            printf("31");
        }else{
            if((mes == 4) ||(mes == 6) ||(mes == 9) ||(mes == 11) ){
                printf("30");
            }else{
                if(mes ==2){
                    printf("28 ou 29");
                }
            }
        }
    }
    
    return 0;
}