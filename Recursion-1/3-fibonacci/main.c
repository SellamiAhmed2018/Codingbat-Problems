/* © Ahmed Sellami */
#include<stdio.h>

int fibonacci(int n){
	/*if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fibonacci(n-2)+fibonacci(n-1);*/
	return n<=1?n:fibonacci(n-2)+fibonacci(n-1);
}

int main(int argc,char** argv){
	// Test Cases
	printf("fibonacci(0)=%d\n",fibonacci(0));
	printf("fibonacci(1)=%d\n",fibonacci(1));
	printf("fibonacci(2)=%d\n",fibonacci(2));
	printf("fibonacci(3)=%d\n",fibonacci(3));
	return 0;
}
