/* Exercicio 13 - Escreva um programa em C que preencha um vetor de 20 posições com valores aleatórios. Em
seguida, imprima as seguintes informações: i) quantos números pares foram armazenados? ii)
quantos números ímpares? iii) qual a média aritmética do vetor? iv) qual a porcentagem de
números acima da média aritmética do vetor?
Exercicio 13 Lista IV - vetores*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
int main() {
	int vetor[MAX], qtdPares = 0, cont;
	float media = 0.0, Porc = 0.0;
for(cont = 0; cont < MAX; cont++){
	vetor[cont] = (rand()%MAX);
	printf("%d\t", vetor[cont]);
	media += vetor[cont];
	if(vetor[cont] % 2 == 0)
	qtdPares = qtdPares+1;
	}
	media /= MAX;
		for(cont = 0; cont < MAX; cont++)
		if(vetor[cont] > media)
			Porc++;
			Porc = Porc / MAX * 100;
			printf("\n\nPares:  %d\nImpares: %d\tMedia: %.2f\tPorcentagemMedia: %.2f%%", qtdPares, (MAX-qtdPares),media, Porc);
}

