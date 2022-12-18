/* © Ahmed Sellami */
#include<stdio.h>

int powerN(int base, int n){
	return n==0?1:base*powerN(base,n-1);
}

int main(int argc,char** argv){
	// Test Cases
	printf("powerN(3, 1)=%d\n",powerN(3, 1));
	printf("powerN(3, 2)=%d\n",powerN(3, 2));
	printf("powerN(3, 3)=%d\n",powerN(3, 3));
	return 0;
}
