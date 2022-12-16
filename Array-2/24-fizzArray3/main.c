/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* fizzArray3(int start, int end){
	int* nums=(int*)malloc((end-start)*sizeof(int));
	for(int i=start;i<end;i++){
		*(nums+i-start)=i;
	}
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int start,end;

	start=5,end=10;
	nums=fizzArray3(start,end);
	printf("fizzArray3(5, 10)=[");
	for(int i=0;i<end-start;i++){
		printf(i==end-start-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	start=11,end=18;
	nums=fizzArray3(start,end);
	printf("fizzArray3(11, 18)=[");
	for(int i=0;i<end-start;i++){
		printf(i==end-start-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	start=1,end=3;
	nums=fizzArray3(start,end);
	printf("fizzArray3(1, 3)=[");
	for(int i=0;i<end-start;i++){
		printf(i==end-start-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);
	
	return 0;
}
