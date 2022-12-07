/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int close10(int a, int b) {
	return (abs(a-10)==abs(b-10))?0:(abs(a-10)<abs(b-10))?a:b; // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("close10(8, 13)=%d\n",close10(8, 13));
	printf("close10(13, 8)=%d\n",close10(13, 8));
	printf("close10(13, 7)=%d\n",close10(13, 7));
	printf("close10(7, 13)=%d\n",close10(7, 13));
	printf("close10(9, 13)=%d\n",close10(9, 13));
	printf("close10(13, 8)=%d\n",close10(13, 8));
	printf("close10(10, 12)=%d\n",close10(10, 12));
	printf("close10(11, 10)=%d\n",close10(11, 10));
	printf("close10(5, 21)=%d\n",close10(5, 21));
	printf("close10(0, 20)=%d\n",close10(0, 20));
	printf("close10(10, 10)=%d\n",close10(10, 10));
	
	return 0;
}
