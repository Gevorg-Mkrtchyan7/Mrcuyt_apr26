#include <stdio.h>

int pol(int num){
	int sum = num;
	int a = num;
	int count = 0;
	while(1){
		int rev;
		int res = 0;
		while(a){
			rev = a % 10;
			res = res * 10 + rev;
			a /= 10;
		}
		if(sum == res){
			return count;
		}else{
			sum = num + res;
			a = sum;
			++count;
		}
	}	
}
