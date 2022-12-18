/* © Ahmed Sellami */
#include<stdio.h>

int triangle(int rows){
	return rows==0?0:rows+triangle(rows-1);
}

int main(int argc,char** argv){
	// Test Cases
	printf("triangle(0)=%d\n",triangle(0));
	printf("triangle(1)=%d\n",triangle(1));
	printf("triangle(2)=%d\n",triangle(2));
	printf("triangle(3)=%d\n",triangle(3));
	return 0;
}
