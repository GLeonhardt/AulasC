#include <stdio.h>
#include <stdlib.h>

int main()
{
   float i,n;
   float s=0.0;
   printf("Digite a quantidade : ");
   scanf("%f",&n);
   for(i=1;i<=n;i++)
   {
        printf("1/%.0f + ",i);
        s= s + 1/i;
    }
    printf("\nSoma de %.0f termos : %f \n",n,s);
    return 0;
} 