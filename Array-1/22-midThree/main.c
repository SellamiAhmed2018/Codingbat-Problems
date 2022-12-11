/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* midThree(int a[],int length) {
	int* nums=(int*)malloc(3*sizeof(int));
	*nums=*(a+length/2-1);
	*(nums+1)=*(a+length/2);
	*(nums+2)=*(a+length/2+1);
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len;

	int a1[]={1, 2, 3, 4, 5};
	len=5;
	nums=midThree(a1,len);
	printf("midThree([1, 2, 3, 4, 5])=[%d,%d,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);

	int a2[]={8, 6, 7, 5, 3, 0, 9};
	len=7;
	nums=midThree(a2,len);
	printf("midThree([8, 6, 7, 5, 3, 0, 9])=[%d,%d,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);

	int a3[]={1, 2, 3};
	len=3;
	nums=midThree(a3,len);
	printf("midThree([1, 2, 3])=[%d,%d,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);

	return 0;
}
