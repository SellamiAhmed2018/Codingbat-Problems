/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool has23(int nums[]) {
	return *nums==2||*nums==3||*(nums+1)==2||*(nums+1)==3;
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={2, 5};
	printf("has23([2, 5])=%s\n",(has23(nums1))==0?"false":"true");
	int nums2[]={4, 3};
	printf("has23([4, 3])=%s\n",(has23(nums2))==0?"false":"true");
	int nums3[]={4, 5};
	printf("has23([4, 5])=%s\n",(has23(nums3))==0?"false":"true");

	return 0;
}
