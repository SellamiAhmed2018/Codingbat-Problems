/* © Ahmed Sellami */
#include<stdio.h>

int fixTeen(int n){ // helper function
	return n>=13&&n<=19&&n!=15&&n!=16?0:n;
}

int noTeenSum(int a, int b, int c){
	return fixTeen(a)+fixTeen(b)+fixTeen(c);
}

int main(int argc,char** argv){
	// Test Cases
	printf("noTeenSum(1, 2, 3)=%d\n",noTeenSum(1, 2, 3));
	printf("noTeenSum(2, 13, 1)=%d\n",noTeenSum(2, 13, 1));
	printf("noTeenSum(2, 1, 14)=%d\n",noTeenSum(2, 1, 14));
	return 0;
}
