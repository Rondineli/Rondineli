/* Preencher vetor de 20 posições com valores aleatorios entre 100 e 200, imprimir o maior e todos os seus divisores
exercicio 8 Vetores */
#include <stdio.h>
#include <stdlib.h>
#define TAM 20
#define MAX 200
#define MIN 100
int main() {
	int cont,vetor[MAX], MaiorValor=0, Divisores;
	srand(time(0));
	for (cont=0; cont < TAM; cont++){
		vetor[cont] = (rand() % (MIN - MAX)) + MIN;
		printf("%d\t\n", vetor[cont]);
	}
	printf("\n");
	for (cont=0; cont < TAM; cont++){
		if (vetor[cont] > MaiorValor || cont==0){
			MaiorValor = vetor[cont];
	}
}
	printf("\nMaior: %d\n", MaiorValor);
	printf("\nDivisores:\n");
	for(cont=1; cont <= MaiorValor; cont++){
		if (MaiorValor % cont == 0) {
			printf("\n%d\t", cont);
	}
}
	printf("\n");
}
