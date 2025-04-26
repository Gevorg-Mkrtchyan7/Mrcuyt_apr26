#include <stdio.h>

int main(){
	int size = 3;
	int num = 0;
	int arr[size] = {};
	scanf("%d", &num);
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < size; ++i){
		if(num == arr[i]){
			printf("Yes, ");
		}else{
			printf("No, ");
		}
	}
	printf("\n");
}
