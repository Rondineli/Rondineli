/* exercicio 13
Imprimir numeros pares a partir do 2 */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int numeroPar, cont, numeroLaco;
	printf("Informe o numero de lacos\n\n");
	scanf("%d", &numeroLaco);
	for (cont = 2; cont <= numeroLaco * 2; cont++) { //o valor de numeroLaco e x2, pois se por exemplo o user digitar 4 há somente 2 numros pares para ter 4 numeros é necessário ter 8 laços
	numeroPar = cont%2; //descobre se o numero é par
	if (numeroPar ==0 ){ //se for par
	printf ("Numero %d\n\n", cont); //imprime o valor
	}
	}
}
