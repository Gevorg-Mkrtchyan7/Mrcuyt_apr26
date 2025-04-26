#include <stdio.h>

int main(){
	int s1 = 3;
	int s2 = 4;
	int arr1[s1] = {};
	int arr2[s2] = {};
	for(int i = 0; i < s1; ++i){
		scanf("%d", &arr1[i]);
	}
	for(int i = 0; i < s2; ++i){
		scanf("%d", &arr2[i]);
	}
	
	int a = s1;
	int b = s2;

	for(int i = s1 + s2; i > 0; --i){
		if(--a >= 0){
			printf("%d ", arr1[a]);
		}else{
			--b;
			printf("%d ", arr2[b]);
			
		}
	}
	printf("\n");
}
