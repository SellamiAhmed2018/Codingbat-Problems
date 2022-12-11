/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool double23(int nums[],int length) {
	return (length<=1)?false:(*nums==2&&*(nums+1)==2)||(*nums==3&&*(nums+1)==3);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={2, 2};
	printf("double23([2, 2])=%s\n",(double23(nums1,2))==0?"false":"true");
	int nums2[]={3, 3};
	printf("double23([3, 3])=%s\n",(double23(nums2,2))==0?"false":"true");
	int nums3[]={2, 3};
	printf("double23([2, 3])=%s\n",(double23(nums3,2))==0?"false":"true");

	return 0;
}
