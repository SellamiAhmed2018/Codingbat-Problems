/* © Ahmed Sellami */
#include<stdio.h>

int sortaSum(int a, int b){
	return (a+b)>=10&&(a+b)<=19?20:a+b;
}

int main(int argc,char** argv){
	// Test Cases
	printf("sortaSum(3, 4)=%d\n",sortaSum(3, 4));
	printf("sortaSum(9, 4)=%d\n",sortaSum(9, 4));
	printf("sortaSum(10, 11)=%d\n",sortaSum(10, 11));
	return 0;
}
