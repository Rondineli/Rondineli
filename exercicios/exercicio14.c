/* Ler um nuermo e imprima a soma dos multiplos de 5 no intervalo entre 1 e o numero lido
Exercicio14
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int numeroLido, cont, somaMultiplos = 0, multiploCinco;
	printf("Informe o numero\n\n");
	scanf("%d", &numeroLido);
	if (numeroLido > 0) {
		for (cont = 1; cont <= numeroLido * 5; cont++) {
			multiploCinco = cont%5;
			if (multiploCinco == 0){
				somaMultiplos = somaMultiplos + cont;
		  	        printf("Numero testado =%d\tsomaParcial=%d\n\n", cont, somaMultiplos);	
		  }
	  }
	}else
	printf("Numero informado invalido\n\n");
	}
