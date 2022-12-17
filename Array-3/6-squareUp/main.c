/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* squareUp(int n){
	int* res=(int*)malloc(n*n*sizeof(int));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			*(res+((n*i)+j))=(j>=(n-i-1))?n-j:0;
		}
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int n;

	n=3;
	nums=squareUp(n);
	printf("squareUp(3)=[");
	for(int i=0;i<n*n;i++){
		printf(i==(n*n)-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	n=2;
	nums=squareUp(n);
	printf("squareUp(2)=[");
	for(int i=0;i<n*n;i++){
		printf(i==(n*n)-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	n=4;
	nums=squareUp(n);
	printf("squareUp(4)=[");
	for(int i=0;i<n*n;i++){
		printf(i==(n*n)-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
