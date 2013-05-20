/* Exercicio10 -  vetor armazenar 50 posições , calcular quais são 10% acima da média e quais são 10% abaixo da média, considerar media 6 
Exercicio 10 lista IV vetores */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main() {
	int cont, abaixoMedia = 0, acimaMedia = 0;
	float vetor[MAX], mediaGeral = 0.0;
	srand(time(0));
	for (cont=0; cont < MAX; cont++){
		vetor[cont] = (rand() % MAX) +1;
		printf("Notas: %.2f\t", vetor[cont]);
		mediaGeral = mediaGeral + vetor[cont];
	}
	printf("Media Geral: %.2f\n", mediaGeral/MAX);
	for (cont=0; cont < MAX; cont++){
	if (vetor[cont] > mediaGeral*(10/100) && mediaGeral > 6){
		acimaMedia = acimaMedia+1;
	} else
		abaixoMedia = abaixoMedia + 1;
	}
	printf("\n");
	printf("Notas Abaixo da media e de 10%% da media geral: %d, Notas acima da Media e de 10%% da media geral %d", abaixoMedia, acimaMedia);
}	
