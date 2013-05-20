#include <stdio.h>
#include <stdlib.h>
/* Rinocci + Fibonacci
Exercicio 12 */

int main() {
	int number1, number2, soma = 0, cont = 0, aux1;
	printf ("Informe o primeiro numero\n\n");
	scanf("%d", &number1);
	printf ("Informe o segundo o numero\n\n");
	scanf("%d", &number2);
        do {  //pode ser usado o for, while ... fazer do while pra estudar, pois ele é FDP, e como o do while é o menos usado, certamente irá cair.
 		if (cont == 0){ //fazer a primeira soma e atribuir o valor
		aux1 = number1 + number2; //atribui o valor da primeira soma a variavel aux1
		soma = soma + aux1; // atribui a soma o valor da primeira soma
		aux1 = soma - aux1; //descobre qual o valor anterior
		}else
		soma = soma + aux1; // faz a soma do valor atual com o valor anterior descoberto no calcul aux1 = soma - aux1
		aux1 = soma - aux1; //descobre qual o antigo valor de aux1
		printf("mostrando a soma %d\n\n", soma); //mostra os resultados
		cont++;
                } while(cont <15);
	}
