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
	
	int a = 0;
	for(int i = 0; i < size * 2; ++i){
		if(a < 3){
			printf("%d ", arr1[i]);
		}else{
			printf("%d ", arr2[i - size]);
		}
		++a;
	}
	printf("\n");
}
