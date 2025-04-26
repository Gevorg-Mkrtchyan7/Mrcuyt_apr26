#include <stdio.h>

void cmp(int*, int*, int);

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
	cmp(arr1, arr2, size);
}
