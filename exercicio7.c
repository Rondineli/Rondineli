#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int main(){
	int fib[MAX], i;
		fib[0] = 0;
		fib[1] = 1;
		printf("%d\t%d\t", fib[0], fib[1]);
		for(i = 2; i < MAX; i++){
			fib[i] = fib[i-1]+fib[i-2];
			printf("%d\t", fib[i]);
		}
	}
