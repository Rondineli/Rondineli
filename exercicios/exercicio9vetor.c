/* Preencher vetor com 1000 posições com numeros inteiros
Imprimir a diferença entre o menor e o maior numero.
Exercicio 9 vetores
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 1000

int main() {
	int cont,vetor[MAX], MaiorValor, MenorValor, DiferencaValor;
	srand(time(0));
	printf("\n");
	for(cont=0; cont < MAX; cont++){
		vetor[cont] = (rand() % MAX) +1;
	printf("%d\t", vetor[cont]);
	}
	for(cont=0; cont < MAX; cont++){
		if (vetor[cont] < MenorValor || cont==0){
			MenorValor = vetor[cont];
		}
		if (vetor[cont] > MaiorValor || cont==0) {
			MaiorValor = vetor[cont]; 
	} }
	DiferencaValor = MaiorValor - MenorValor;
	printf("\nMaior: %d\tMenor: %d\tDiferenca: %d", MaiorValor, MenorValor, DiferencaValor);
	}
