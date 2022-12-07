/* © Ahmed Sellami */
#include<stdio.h>

int sumDouble(int a, int b) {
	/*
		if(a==b){
			return (a+b)*2;
		}else{ // we can also not use else!
			return a+b;
		}
	*/
	return (a==b)?(a+b)*2:a+b;
}

int main(int argc,char** argv){
	// Test Cases
	printf("sumDouble(1, 2)=%d\n",sumDouble(1, 2));
	printf("sumDouble(3, 2)=%d\n",sumDouble(3, 2));
	printf("sumDouble(2, 2)=%d\n",sumDouble(2, 2));
	printf("sumDouble(-1, 0)=%d\n",sumDouble(-1, 0));
	printf("sumDouble(3, 3)=%d\n",sumDouble(3, 3));
	printf("sumDouble(0, 0)=%d\n",sumDouble(0, 0));
	printf("sumDouble(0, 1)=%d\n",sumDouble(0, 1));
	printf("sumDouble(3, 4)=%d\n",sumDouble(3, 4));
	return 0;
}
