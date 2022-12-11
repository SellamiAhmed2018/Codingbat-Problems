/* © Ahmed Sellami */
#include<stdio.h>

int round10(int n){ // helper function
	return n%10>=5?((n/10)+1)*10:(n/10)*10;
}

int noTeenSum(int a, int b, int c){
	return round10(a)+round10(b)+round10(c);
}

int main(int argc,char** argv){
	// Test Cases
	printf("noTeenSum(16, 17, 18)=%d\n",noTeenSum(16, 17, 18));
	printf("noTeenSum(12, 13, 14)=%d\n",noTeenSum(12, 13, 14));
	printf("noTeenSum(6, 4, 4)=%d\n",noTeenSum(6, 4, 4));
	return 0;
}
