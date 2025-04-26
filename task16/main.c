#include <stdio.h>

void rev(char*, int);

int main(){
	int size = 5;
	char str[size] = {};
	for(int i = 0; i < size; ++i){
		scanf(" %c", &str[i]);
	}
	rev(str, size);
}
