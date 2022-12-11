/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* make2(int a[], int b[], int lengthA , int lengthB) {
	int* nums=(int*)malloc(2*sizeof(int));
	*nums=(lengthA>=1)?*a:*b;
	*(nums+1)=(lengthA>=2)?*(a+1):(lengthA==1)?*b:*(b+1);
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;

	int a1[]={4, 5},b1[]={1, 2, 3};
	nums=make2(a1,b1,2,3);
	printf("make2([4, 5], [1, 2, 3])=[%d,%d]\n",*nums,*(nums+1),*(nums+2),*(nums+3));
	free(nums);
	
	int a2[]={4},b2[]={1, 2, 3};
	nums=make2(a2,b2,1,3);
	printf("make2([4], [1, 2, 3])=[%d,%d]\n",*nums,*(nums+1),*(nums+2),*(nums+3));
	free(nums);

	int b3[]={1, 2};
	nums=make2(NULL,b3,0,2);
	printf("make2([], [1, 2])=[%d,%d]\n",*nums,*(nums+1),*(nums+2),*(nums+3));
	free(nums);

	return 0;
}
