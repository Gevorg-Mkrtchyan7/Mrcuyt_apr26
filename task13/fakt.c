#include <stdio.h>

void fakt(int num){
	int res = 1;
	for(int i = num; i > 0; --i){
		res *= i; 
	}
	printf("%d \n", res);
}
