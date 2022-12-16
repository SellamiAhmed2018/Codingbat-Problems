/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* fizzArray(int n){
	int* nums=(int*)malloc(n*sizeof(int));
	int i=0;
	for(int i=0;i<n;i++)
		*(nums+i)=i;
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int n;

	n=4;
	nums=fizzArray(n);
	printf("fizzArray(4)=[");
	for(int i=0;i<n;i++){
		printf(i==n-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	n=1;
	nums=fizzArray(n);
	printf("fizzArray(1)[");
	for(int i=0;i<n;i++){
		printf(i==n-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	n=10;
	nums=fizzArray(n);
	printf("fizzArray(10)=[");
	for(int i=0;i<n;i++){
		printf(i==n-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
