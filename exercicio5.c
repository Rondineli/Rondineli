/* User preensher vetor com 5 posições, e imprimir a tabuada dos 5 numeros inteiros
exercicio 5 vetores */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TABUADA 11
#define USER 5
int main() {
	int j=0,contUser, cont,numDigitadoUser[USER], tabuada[TABUADA];
	for (contUser = 0; contUser < USER; contUser++){
		printf("informe um numero inteiro maior que 0:\n");
		scanf("%d", & numDigitadoUser[contUser]);
	}
	while (j < USER) {
	printf("Imprimindo Tabuada do: %d\n", numDigitadoUser[j]);
	for (cont=0; cont <=10; cont++){
			printf("\t%d * %d = %d\n", numDigitadoUser[j], cont, numDigitadoUser[j] * cont);
}
	j++;
	}
}
