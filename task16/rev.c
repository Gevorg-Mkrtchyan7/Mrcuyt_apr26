#include <stdio.h>

void rev(char str[], int size){
	char tmp;
	int size2 = size;
	for(int i = 0; i < size / 2; ++i){
		--size2;
		tmp = str[i];
		str[i] = str[size2];
		str[size2] = tmp;
	}
	for(int i = 0; i < size; ++i){
		printf("%c ", str[i]);
	}
	printf("\n");
}
