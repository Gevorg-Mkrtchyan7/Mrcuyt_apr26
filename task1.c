#include <stdio.h>

int main(){
	int size = 3;
	int arr1[size] = {};
	int arr2[size] = {};
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr1[i]);
	}
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr2[i]);
	}

	for(int i = 0; i < size; ++i){
		int res = arr1[i] * arr2[i];
		printf("%d \n", res);
	}
}
