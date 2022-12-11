/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* makeMiddle(int a[],int length) {
	int* nums=(int*)malloc(2*sizeof(int));
	*nums=*(a+length/2-1);
	*(nums+1)=*(a+length/2);
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len;

	int a1[]={1, 2, 3, 4};
	len=4;
	nums=makeMiddle(a1,len);
	printf("makeMiddle([1, 2, 3, 4])=[%d,%d]\n",*nums,*(nums+1));
	free(nums);

	int a2[]={7, 1, 2, 3, 4, 9};
	len=6;
	nums=makeMiddle(a2,len);
	printf("makeMiddle([7, 1, 2, 3, 4, 9])=[%d,%d]\n",*nums,*(nums+1));
	free(nums);

	int a3[]={1, 2};
	len=2;
	nums=makeMiddle(a3,len);
	printf("makeMiddle([1, 2])=[%d,%d]\n",*nums,*(nums+1));
	free(nums);

	return 0;
}
