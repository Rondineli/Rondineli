#include <stdio.h>
#include <stdlib.h>
//Exemplo comentado
int main () {
	int TestePar = 0, numeroPar = 0; //Declaração de variaveis
	printf ("Oi, sou o Clauber....um viadinho\n\n...Uiiiiii, Adogooo!\n"); //Afirmação, True history
	numeroPar = 85; //atribuição de valor 85 a variavel
	while (numeroPar < 907) { //Teste para entrar na estrutura de repetição
                TestePar = numeroPar%2; //Teste para saber se o numero testado é par ou impar
                if (TestePar == 0) { //Se for par, cai na estrutura de teste
		printf("%d\n", numeroPar); //Se o if for verdadeiro printa o numero
                }
                numeroPar++; //Atribui mais um numero para o próximo teste do while
        }
        printf ("Terminou\n\n"); //Executa quando o While for falso
	}
