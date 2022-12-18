/* © Ahmed Sellami */
#include<stdio.h>

int count7(int n){
	return n==0?0:n%10==7?1+count7(n/10):count7(n/10);
}

int main(int argc,char** argv){
	// Test Cases
	printf("count7(717)=%d\n",count7(717));
	printf("count7(7)=%d\n",count7(7));
	printf("count7(123)=%d\n",count7(123));
	return 0;
}
