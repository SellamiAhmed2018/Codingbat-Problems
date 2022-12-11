/* © Ahmed Sellami */
#include<stdio.h>

int loneSum(int a, int b, int c){
	return (a==b&&a==c)?0:(a==b)?c:(a==c)?b:(b==c)?a:a+b+c;
}

int main(int argc,char** argv){
	// Test Cases
	printf("loneSum(1, 2, 3)=%d\n",loneSum(1, 2, 3));
	printf("loneSum(3, 2, 3)=%d\n",loneSum(3, 2, 3));
	printf("loneSum(3, 3, 3)=%d\n",loneSum(3, 3, 3));
	return 0;
}
