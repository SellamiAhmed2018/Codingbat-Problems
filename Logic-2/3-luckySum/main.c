/* © Ahmed Sellami */
#include<stdio.h>

int luckySum(int a, int b, int c){
	return (a==13)?0:(b==13)?a:(c==13)?a+b:a+b+c;
}

int main(int argc,char** argv){
	// Test Cases
	printf("luckySum(1, 2, 3)=%d\n",luckySum(1, 2, 3));
	printf("luckySum(1, 2, 13)=%d\n",luckySum(1, 2, 13));
	printf("luckySum(1, 13, 3)=%d\n",luckySum(1, 13, 3));
	return 0;
}
