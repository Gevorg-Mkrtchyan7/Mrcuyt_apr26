#include <stdio.h>

void axyus(int);

int main(){
	int num;
	do{
		scanf("%d", &num);
	}while(num < 1 && num > 9);
	axyus(num);
}
