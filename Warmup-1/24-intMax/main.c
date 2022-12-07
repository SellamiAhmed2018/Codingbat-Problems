/* © Ahmed Sellami */
#include<stdio.h>

int intMax(int a, int b, int c) {
	return (a>=b&&a>=c)?a:(b>=a&&b>=c)?b:c; // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("intMax(1, 2, 3)=%d\n",intMax(1, 2, 3));
	printf("intMax(1, 3, 2)=%d\n",intMax(1, 3, 2));
	printf("intMax(3, 2, 1)=%d\n",intMax(3, 2, 1));
	printf("intMax(9, 3, 3)=%d\n",intMax(9, 3, 3));
	printf("intMax(3, 9, 3)=%d\n",intMax(3, 9, 3));
	printf("intMax(3, 3, 9)=%d\n",intMax(3, 3, 9));
	printf("intMax(8, 2, 3)=%d\n",intMax(8, 2, 3));
	printf("intMax(-3, -1, -2)=%d\n",intMax(-3, -1, -2));
	printf("intMax(6, 2, 5)=%d\n",intMax(6, 2, 5));
	printf("intMax(5, 6, 2)=%d\n",intMax(5, 6, 2));
	printf("intMax(5, 2, 6)=%d\n",intMax(5, 2, 6));
	
	return 0;
}
