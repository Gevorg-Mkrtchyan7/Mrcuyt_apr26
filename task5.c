#include <stdio.h>

int main(){
	int size = 5;
	char arr[size] = {};
	scanf("%s", arr);
	for(int i = 0; i < size; ++i){
		if(arr[i] > 96 && arr[i] < 123){
		arr[i] = arr[i] - 32;
		}
	}
	printf("%s \n", arr);
}
