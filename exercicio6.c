/* Vetor com numeros aleatorios de tamanho 10, fazer a inversão dos valores dentro do mesmo vetor, imprimir o vetor, antes e após a inversão
exercicio 6 vetores */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
int main() {
	int vetor[MAX], aux, cont;
		srand(time(0));
		printf("Vetor antes da inversao:\n");
		for (cont=0; cont < MAX; cont++){
			vetor[cont] = (rand() % MAX)+1;
			printf("%d\t", vetor[cont]);
		}
		printf("\nVetor após a inversao\n");
		for (cont=0; cont < 5; cont++){
			aux = vetor[cont];
			vetor[cont] = vetor[MAX-1-cont];
			vetor[MAX-1-cont] = aux;
		}
		for (cont=0; cont < MAX; cont++){
			printf("%d\t", vetor[cont]);
	}
	printf("\n");
}
