/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* maxEnd3(int nums0[]) {
	int* nums=(int*)malloc(3*sizeof(int));
	int larger=(*nums0>=*(nums0+2))?*nums0:*(nums0+2);
	*nums=larger;
	*(nums+1)=larger;
	*(nums+2)=larger;
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;

	int nums1[]={1, 2, 3};
	nums=maxEnd3(nums1);
	printf("maxEnd3([1, 2, 3])=[%d,%d,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);

	int nums2[]={11, 5, 9};
	nums=maxEnd3(nums2);
	printf("maxEnd3([11, 5, 9])=[%d,%d,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);

	int nums3[]={2, 11, 3};
	nums=maxEnd3(nums3);
	printf("maxEnd3([2, 11, 3])=[%d,%d,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);

	return 0;
}
