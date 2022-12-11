/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* plusTwo(int a[], int b[]) {
	int* nums=(int*)malloc(4*sizeof(int));
	*nums=*a;
	*(nums+1)=*(a+1);
	*(nums+2)=*b;
	*(nums+3)=*(b+1);
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;

	int a1[]={1, 2},b1[]={3, 4};
	nums=plusTwo(a1,b1);
	printf("plusTwo([1, 2], [3, 4])=[%d,%d,%d,%d]\n",*nums,*(nums+1),*(nums+2),*(nums+3));
	free(nums);
	
	int a2[]={4, 4},b2[]={2, 2};
	nums=plusTwo(a2,b2);
	printf("plusTwo([4, 4], [2, 2])=[%d,%d,%d,%d]\n",*nums,*(nums+1),*(nums+2),*(nums+3));
	free(nums);

	int a3[]={9, 2},b3[]={3, 4};
	nums=plusTwo(a3,b3);
	printf("plusTwo([9, 2], [3, 4])=[%d,%d,%d,%d]\n",*nums,*(nums+1),*(nums+2),*(nums+3));
	free(nums);

	return 0;
}
