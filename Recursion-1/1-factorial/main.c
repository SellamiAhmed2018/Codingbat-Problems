/* © Ahmed Sellami */
#include<stdio.h>

int factorial(int n){
	/*if(n==0)
		return 1;
	return n*factorial(n-1);*/
	return n==0?1:n*factorial(n-1);
}

int main(int argc,char** argv){
	// Test Cases
	printf("factorial(1)=%d\n",factorial(1));
	printf("factorial(2)=%d\n",factorial(2));
	printf("factorial(3)=%d\n",factorial(3));
	return 0;
}
