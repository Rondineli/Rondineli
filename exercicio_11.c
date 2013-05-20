#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float x, y;
	printf ("Informe o valor de X\n\n");
	scanf("%f", &x);
	if (x <=1)
		y = 1;
		else
			if (x <= 2)
			y = 2;
			else
				if (x <= 3)
					y = pow(x,2);
				else
					y = pow(x,3);

   printf ("O valor de Y é %.2f\n\n", y);

return (0);
system("pause");
}		
