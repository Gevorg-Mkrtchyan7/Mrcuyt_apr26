#include <stdio.h>

int power(int, int);

int main(){
	int num;
	int pow;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter the power: ");
	scanf("%d", &pow);
	printf("%d \n", power(num, pow));
}
