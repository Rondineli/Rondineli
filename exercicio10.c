#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 50
/* Dado vetor H de 10 posições. Preencha o vetor com valores aleatórios entre 0 e 50 e em seguida ordene os valores do vetor em ordem crescente. Imprima os elementos do vetor antes e após a ordenação*/
int main() {
	int vetorH[50], vetorAux[50],controleRepeticaoAux, aux, controleRepeticao;
        srand(time(0));
        printf ("Desordenado\n\n");
        for(controleRepeticao=0;controleRepeticao < MAX; controleRepeticao++) {
                vetorH[controleRepeticao] = (rand() % MAX + 1);
                printf ("VetorH [%d] = %d\n\n", controleRepeticao, vetorH[controleRepeticao]);
                }
        for (controleRepeticaoAux = 0; controleRepeticaoAux < MAX; controleRepeticaoAux++)
            for(controleRepeticao=0;controleRepeticao < MAX-1; controleRepeticao++) 
		if (vetorH[controleRepeticao] > vetorH[controleRepeticao + 1]){
                   aux = vetorH[controleRepeticao];
		   vetorH[controleRepeticao] = vetorH[controleRepeticao + 1 ];
                   vetorH[controleRepeticao + 1] = aux;
        }
                printf ("Ordenado:\n\n");
		for (controleRepeticao = 0; controleRepeticao < MAX; controleRepeticao++)
                    printf ("Vetor[%d] = %d\n\n", controleRepeticao, vetorH[controleRepeticao]);
//	}
      }
