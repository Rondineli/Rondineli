/* Exercicio 4 - Vetores de 10 posições, impares e pares em outros vetores com 5 posições
Exercicio 4 lista de vetores */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
int main(){
	int vetorAleatorio[MAX], vetorPar[MAX], vetorImpar[MAX], auxTesteP, auxTesteI,auxPar=0, auxImpar=0, cont;
	srand(time(0));
	printf("vetores originais: \n");
	for (cont=0; cont < MAX; cont++){
		vetorAleatorio[cont] = (rand()%MAX)+ 1;
	printf("%d\t", vetorAleatorio[cont]);
	auxTesteP = vetorAleatorio[cont] %2;
	if (auxTesteP == 0){
		vetorPar[auxPar++] = vetorAleatorio[cont];
	}else
	vetorImpar[auxImpar++] = vetorAleatorio[cont];
}
	printf("\nVetores Pares: \n");
	for (cont=0; cont < auxPar; cont++) {
		printf("%d\t", vetorPar[cont]);
 } 
	printf("\nVetores Impares:\n");
	for (cont=0; cont < auxImpar; cont++) {
		printf("%d\t", vetorImpar[cont]);
} }
