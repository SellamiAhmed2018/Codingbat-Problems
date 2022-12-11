/* © Ahmed Sellami */
#include<stdio.h>
#include<math.h>

int sumLimit(int a, int b){
	return (floor(log10(a+b))+1==floor(log10(a))+1)?a+b:a;
}

int main(int argc,char** argv){
	// Test Cases
	printf("sumLimit(2, 3)=%d\n",sumLimit(2, 3));
	printf("sumLimit(8, 3)=%d\n",sumLimit(8, 3));
	printf("sumLimit(8, 1)=%d\n",sumLimit(8, 1));
	return 0;
}
