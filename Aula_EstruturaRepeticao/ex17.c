#include <stdio.h>
#include <stdlib.h>

void main(){
    int num,i,controle,fim;
    printf("Input ending number of range : ");
    scanf("%d",&fim);
    printf("The prime numbers between 0 and %d are : \n",fim);
  
    for(num = 0 ; num<=fim; num++)
    {
        controle = 0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0){
                controle++;
                break;
            }
        }
        if(controle==0 && num!= 1){
            printf("%d ",num);
        }   
    }
        printf("\n");  
}