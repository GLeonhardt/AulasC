#include <stdlib.h>
#include <stdio.h>

int main(){
	int controle, soma =0, x;
	for(controle =0; controle <10; controle++){
		scanf("%d", &x);
		soma = soma + x;
	}
	printf("Soma = %d", soma);
	return 0;
}