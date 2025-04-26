#include <stdio.h>

int main(){
	int size = 3;
	int arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}
	int all = 0;; 
	int a = 0;;
	for(int i = 0; i < size; ++i){
		all += arr[i];
		++a;
	}
	float res = all / a;
	printf("%f \n", res);
}
