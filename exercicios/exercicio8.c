#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Ler 20 numeros inteiros e somar os numeros cujo os quadrados são menores que 225
int main() { // Classe Main 
int numeroLido, varSoma =0, varControle, varSomaQuadrado, testeQuadrado; //Declaração de variaveis
	for ( varControle = 0; varControle <= 5; varControle++ ){ // Estrutura de repetição
		printf ("Informe um numero inteiro\n\n"); //Le os numeros inteiros
		scanf("%d", &numeroLido); // Le os numeros inteiros
                testeQuadrado = pow(numeroLido, 2); // Eleva os numeros ao quadrado
                if (testeQuadrado < 225) // Teste se o numero elevado ao quadrado é menor que 225
                varSomaQuadrado = numeroLido; // Atribui a variavel a uma nova variavel
                varSoma = varSoma + varSomaQuadrado; // Soma os valores que seu quadrado são menores de 225
		}
         printf ("%d\n", varSoma); //imprime a soma
}
