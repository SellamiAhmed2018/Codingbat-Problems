/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* makePi() {
	int* nums=(int*)malloc(3*sizeof(int));
	*nums=3;
	*(nums+1)=1;
	*(nums+2)=4;
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums=makePi();
	printf("[%d ,%d ,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);
	return 0;
}
