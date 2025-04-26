#include <stdio.h>

int cmp(int* arr1, int* arr2, int size){
	for(int i = 0; i < size; ++i){
		if(arr1[i] == arr2[i]){
		}else{
			printf("No \n");
			return 0;
		}
	}
	printf("Yes \n");
	return 0;
}
