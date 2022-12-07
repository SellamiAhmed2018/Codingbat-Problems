/* © Ahmed Sellami */
#include<stdio.h>

int max1020(int a, int b) {
	return ((a<10||a>20)&&(b<10||b>20))?0:(b>=10&&b<=20&&(a<10||a>20||b>=a))?b:a; // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("max1020(11, 19)=%d\n",max1020(11, 19));
	printf("max1020(19, 11)=%d\n",max1020(19, 11));
	printf("max1020(11, 9)=%d\n",max1020(11, 9));
	printf("max1020(9, 21)=%d\n",max1020(9, 21));
	printf("max1020(10, 21)=%d\n",max1020(10, 21));
	printf("max1020(21, 10)=%d\n",max1020(21, 10));
	printf("max1020(9, 11)=%d\n",max1020(9, 11));
	printf("max1020(23, 10)=%d\n",max1020(23, 10));
	printf("max1020(20, 10)=%d\n",max1020(20, 10));
	printf("max1020(7, 20)=%d\n",max1020(7, 20));
	printf("max1020(17, 16)=%d\n",max1020(17, 16));
	
	return 0;
}
