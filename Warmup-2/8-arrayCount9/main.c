/* © Ahmed Sellami */
#include<stdio.h>

int arrayCount9(int nums[],int length) {
	int count=0;
	for(int i=0;i<length;i++)
		count+=(*(nums+i)==9)?1:0;
	return count;
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 2, 9};
	printf("arrayCount9([1, 2, 9])=%d\n",arrayCount9(nums1,3));
	int nums2[]={1, 9, 9};
	printf("arrayCount9([1, 9, 9])=%d\n",arrayCount9(nums2,3));
	int nums3[]={1, 9, 9, 3, 9};
	printf("arrayCount9([1, 9, 9, 3, 9])=%d\n",arrayCount9(nums3,5));
	int nums4[]={1, 2, 3};
	printf("arrayCount9([1, 2, 3])=%d\n",arrayCount9(nums4,3));
	int nums5[]={};
	printf("arrayCount9([])=%d\n",0);
	int nums6[]={4, 2, 4, 3, 1};
	printf("arrayCount9([4, 2, 4, 3, 1])=%d\n",arrayCount9(nums6,5));
	int nums7[]={9, 2, 4, 3, 1};
	printf("arrayCount9([9, 2, 4, 3, 1])=%d\n",arrayCount9(nums7,5));

	return 0;
}
