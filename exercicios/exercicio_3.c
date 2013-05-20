#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int numeroX[99], contador;
                srand(time(0));
		for (contador = 0; contador < 100; )
		{
			numeroX[contador]=rand()%500; 
                        if (numeroX[contador]%2 == 0)
			printf("%d\n\n", numeroX[contador]);
                    	    contador ++;
		}
//		printf("%d", numeroX[contador]);
}
			
