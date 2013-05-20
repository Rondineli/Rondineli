/*Fazer um algoritmo que leia a matrícula e a média de 10 alunos. Ordene da maior nota para a
menor e imprima uma relação contendo todas as matrículas e médias.
Exercicio 12 lista IV vetores*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
int main() {
	int cont,contAux, auxNota, auxMatricula=0, vetorMatricula[MAX];
	float vetorNota[MAX];
	for(cont=0; cont < MAX; cont++){
		printf("Informe o RM\n");
		scanf("%d", & vetorMatricula[cont]);
		printf("\nInforme a nota\n");
		scanf("%f", &vetorNota[cont]);
		printf("\nRM: %d\tNota: %.2f\n", vetorMatricula[cont], vetorNota[cont]);
}
	for(cont=0; cont < MAX; cont++){
		for(contAux =0; contAux < MAX -1; contAux ++){
			if (vetorNota[contAux] < vetorNota[contAux + 1]){
				auxNota = vetorNota[contAux];
				vetorNota[contAux] = vetorNota[contAux + 1];
				vetorNota[contAux+1] = auxNota;

				//Matriculas ordena conforme ordenar a média
				auxMatricula = vetorMatricula[contAux];
				vetorMatricula[contAux] = vetorMatricula[contAux + 1];
				vetorMatricula[contAux + 1] = auxMatricula;
			 }
		}
	}
		printf("\n");
		printf("\n***********************Ordenando***********************************\n");
		for(cont=0; cont < MAX; cont++) {
    		printf("\nRM: %d\tNota: %.2f\n", vetorMatricula[cont], vetorNota[cont]);
		} 
	}
