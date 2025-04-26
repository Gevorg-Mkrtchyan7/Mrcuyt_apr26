#include <stdio.h>

int main(){
	int size = 5;
	char arr[size] = {};
	scanf("%s", arr);
	for(int i = 0; i < size; ++i){
		arr[i] = arr[i] - 32;
	}
	printf("%s \n", arr);
}
