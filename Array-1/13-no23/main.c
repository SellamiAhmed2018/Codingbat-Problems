/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool no23(int nums[]) {
	return *nums!=2&&*nums!=3&&*(nums+1)!=2&&*(nums+1)!=3;
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={4, 5};
	printf("no23([4, 5])=%s\n",(no23(nums1))==0?"false":"true");
	int nums2[]={4, 2};
	printf("no23([4, 2])=%s\n",(no23(nums2))==0?"false":"true");
	int nums3[]={3, 5};
	printf("no23([3, 5])=%s\n",(no23(nums3))==0?"false":"true");

	return 0;
}
