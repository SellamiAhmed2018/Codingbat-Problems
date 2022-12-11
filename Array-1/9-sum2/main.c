/* © Ahmed Sellami */
#include<stdio.h>

int sum2(int nums[],int length) {
	return (length==0)?0:(length==1)?*nums:*nums+*(nums+1);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 2, 3};
	printf("sum2([1, 2, 3])=%d\n",sum2(nums1,3));
	int nums2[]={1, 1};
	printf("sum2([1, 1])=%d\n",sum2(nums2,2));
	int nums3[]={1, 1, 1, 1};
	printf("sum2([1, 1, 1, 1])=%d\n",sum2(nums3,4));

	printf("sum2([])=%d\n",sum2(nums3,0));

	int nums4[]={1};
	printf("sum2([1])=%d\n",sum2(nums4,1));

	return 0;
}
