#include <stdio.h>

void fib(int num){
	int a = 0;
	int b = 1;
	int c = 0;

	for(int i = 1; i <= num; i++){
		c = b;
		b = a + b;
		a = c;
	}
	printf("%d \n", c);
}
