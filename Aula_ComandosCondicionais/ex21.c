// Crie um programa que leia um valor para X e calcule a f(x) 
#include <stdlib.h>
#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    if(x==1){
        printf("1");
    }else{
        if(x == 2){
            printf("2");
        }else{
            if(x == 3){
                x = x*x;
                printf("%d", x);
            }else{
                x = x*x*x;
                printf("%d", x);
            }
        }
    }
    
    return 0;
}