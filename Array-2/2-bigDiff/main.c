/* © Ahmed Sellami */
#include<stdio.h>

int bigDiff(int nums[],int len) {
	int min=*nums,max=*nums;
	for(int i=0;i<len;i++){
		min=*(nums+i)<min?*(nums+i):min;
		max=*(nums+i)>max?*(nums+i):max;
	}
	return max-min;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={10, 3, 5, 6};
	len=4;
	printf("bigDiff([10, 3, 5, 6])=%d\n",bigDiff(nums1,len));
	int nums2[]={7, 2, 10, 9};
	len=4;
	printf("bigDiff([7, 2, 10, 9])=%d\n",bigDiff(nums2,len));
	int nums3[]={2, 10, 7, 2};
	len=4;
	printf("bigDiff([2, 10, 7, 2])=%d\n",bigDiff(nums3,len));

	return 0;
}
