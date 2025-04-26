#include <stdio.h>

int main(){
	int size = 10;
	char arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf(" %c", &arr[i]);
	}
	for(int i = 0; i < size; ++i){
		if(arr[i] > 47 && arr[i] < 58){
			printf("%c, ", arr[i]);
		}
	}
	printf("\n");
}
