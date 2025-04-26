#include <stdio.h>

int dig_sum(int num){
	int num2;
	int res = 0;
	while(num){
		num2 = num;
	       	num2 %= 10;
		res += num2;
		num /= 10;	
	}	
	return res;
}
