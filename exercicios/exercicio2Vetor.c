/* vetor de 500 com valores aleatórios entre 1000 e 4000 e imprimir o menor valor
Exercicio 2 de vetores */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 4000
#define MIN 1000
int main()
	{
		int menorValor, vetor[500], cont;
		srand(time(0));
		for (cont=0;cont < 500;cont++){ //o valor da variavel obrigatóriamente deve ser 0
		vetor[cont] = (rand()% (MAX - MIN)) +MIN; //aqui define-se o intervalo do valor do vetor gerado
		printf("NG =%d\t", vetor[cont]);
			if (vetor[cont] < menorValor || cont == 0)  //obrigatóriamente no primeiro laco (quando cont = 0), a variavel menorValor receberá o valor do primeiro vetor para nos próximos laços ele testar com a variavel, caso o próximo vetor gerado for menor que o valor armazenado em menorValor, ele irá substituir novamente.
    			   menorValor = vetor[cont];
		}
		printf("Menor Valor %d", menorValor);
		
	}
		
