#include <stdio.h>
#include <stdlib.h>
int main (){
	int soma= 0, valor = 1;
	while (valor <= 10) {
	soma = soma + valor;
	valor++;
	}
	printf ("soma %d\n", soma);
}
