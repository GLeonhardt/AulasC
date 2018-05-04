#include <stdlib.h>
#include <stdio.h>

void main()
{
    int NumLinhas, valor=1, espaco, linha, coluna;
    printf("Numero de linhas: ");
    scanf("%d",&NumLinhas);
    for(linha=0;linha <NumLinhas;linha++)
    {
        for(espaco=1;espaco<=NumLinhas-linha;espaco++)
        printf("  ");
        for(coluna=0;coluna<=linha;coluna++)
        {
            if (coluna==0||linha==0)
                valor=1;
            else
               valor = valor *(linha-coluna+1)/coluna;
            printf("%4d",valor);
        }
        printf("\n");
    }
}