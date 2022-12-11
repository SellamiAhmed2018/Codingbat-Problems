/* © Ahmed Sellami */
#include<stdio.h>

int sum3(int nums[]) {
	return *nums+*(nums+1)+*(nums+2);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 2, 3};
	printf("sum3([1, 2, 3])=%d\n",sum3(nums1));
	int nums2[]={5, 11, 2};
	printf("sum3([5, 11, 2])=%d\n",sum3(nums2));
	int nums3[]={7, 0, 0};
	printf("sum3([7, 0, 0])=%d\n",sum3(nums3));

	return 0;
}
