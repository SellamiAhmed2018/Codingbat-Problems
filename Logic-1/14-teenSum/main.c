/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

int teenSum(int a, int b){
	return ((a>=13&&a<=19)||(b>=13&&b<=19))?19:a+b;
}

int main(int argc,char** argv){
	// Test Cases
	printf("teenSum(3, 4)=%d\n",teenSum(3, 4));
	printf("teenSum(10, 13)=%d\n",teenSum(10, 13));
	printf("teenSum(13, 2)=%d\n",teenSum(13, 2));
	return 0;
}
