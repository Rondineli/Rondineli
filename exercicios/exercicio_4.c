#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
	int x[MAX], i,j,aux, achou;
		for(i=0; i < MAX; )
		{
			aux = rand()%(2*MAX);
			for (j=achou=0; j < i; j++)
				if (x[j] == aux)
					{
					achou ++;
					break;
					}
			if (achou == 0)
				{
				x[i] = aux;
				i++;
				}
		}
	}
