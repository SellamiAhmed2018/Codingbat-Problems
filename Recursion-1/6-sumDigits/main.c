/* © Ahmed Sellami */
#include<stdio.h>

int sumDigits(int n){
	return n==0?0:n%10+sumDigits(n/10);
}

int main(int argc,char** argv){
	// Test Cases
	printf("sumDigits(126)=%d\n",sumDigits(126));
	printf("sumDigits(49)=%d\n",sumDigits(49));
	printf("sumDigits(12)=%d\n",sumDigits(12));
	return 0;
}
