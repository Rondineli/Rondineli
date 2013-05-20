#include <stdio.h>
#include <stdlib.h>
int main () {

	char nome[100];
        int qtde, teste;
  	printf ("Digite seu nome: \n\n");
        gets(nome);
        for(teste=0; teste <= 100;teste++){
		if (nome[teste] != '\0'){
                qtde++;
                }
 } 
            		printf ("Vetor[%d] é nulo, logo o vetor tem %d posicoes", teste, teste - 1); 

}
