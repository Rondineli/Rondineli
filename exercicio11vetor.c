/* Exercicio11 - Ler dois vetores, A e B, contendo cada 25 elementos inteiros, intercalar esses vetores em outro vetor V de 50 elementos
Exercicio 11 - Lista IV vetores */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 25
#define MAXV 50
int main() {
	int vetorA[MAX], vetorB[MAX], vetorV[MAXV], aux, cont;
	srand(time(0));
	for(cont =0; cont < MAX; cont++){ 
		vetorA[cont] = (rand() %MAX) + 1;
		vetorB[cont] = (rand()%MAX) + 1;
	printf("VetorA: %d\t", vetorA[cont]);
	printf("VetorB: %d\t", vetorB[cont]);
	}
	printf("\n");
	printf("\n\nIntercalando....\n");
	for(cont = 0, aux=0; cont < MAX; cont++){
		vetorV[aux++] = vetorA[cont];
		vetorV[aux++] = vetorB[cont];
}	
	printf("\n");
	for (cont = 0; cont < MAXV; cont++){
		printf("\nIntercalado: %d", vetorV[cont]);
	}
}
