/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* middleWay(int a[], int b[]) {
	int* nums=(int*)malloc(2*sizeof(int));
	*nums=*(a+1);
	*(nums+1)=*(b+1);
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;

	int a1[]={1, 2, 3},b1[]={4, 5, 6};
	nums=middleWay(a1,b1);
	printf("middleWay([1, 2, 3], [4, 5, 6])=[%d,%d]\n",*nums,*(nums+1));
	free(nums);

	int a2[]={7, 7, 7},b2[]={3, 8, 0};
	nums=middleWay(a2,b2);
	printf("middleWay([7, 7, 7], [3, 8, 0])=[%d,%d]\n",*nums,*(nums+1));
	free(nums);

	int a3[]={5, 2, 9},b3[]={1, 4, 5};
	nums=middleWay(a3,b3);
	printf("middleWay([5, 2, 9], [1, 4, 5])=[%d,%d]\n",*nums,*(nums+1));
	free(nums);

	return 0;
}
