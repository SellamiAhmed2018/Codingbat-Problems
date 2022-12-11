/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* rotateLeft3(int nums0[]) {
	int* nums=(int*)malloc(3*sizeof(int));
	*nums=*(nums0+1);
	*(nums+1)=*(nums0+2);
	*(nums+2)=*(nums0);
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;

	int nums1[]={1, 2, 3};
	nums=rotateLeft3(nums1);
	printf("rotateLeft3([1, 2, 3])=[%d,%d,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);

	int nums2[]={5, 11, 9};
	nums=rotateLeft3(nums2);
	printf("rotateLeft3([5, 11, 9])=[%d,%d,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);

	int nums3[]={7, 0, 0};
	nums=rotateLeft3(nums3);
	printf("rotateLeft3([7, 0, 0])=[%d,%d,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);

	return 0;
}
