/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool sameFirstLast(int nums[],int length) {
	return length>=1 && *nums==*(nums+length-1);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 2, 3};
	printf("sameFirstLast([1, 2, 3])=%s\n",(sameFirstLast(nums1,3))==0?"false":"true");
	int nums2[]={1, 2, 3, 1};
	printf("sameFirstLast([1, 2, 3, 1])=%s\n",(sameFirstLast(nums2,4))==0?"false":"true");
	int nums3[]={1, 2, 1};
	printf("sameFirstLast([1, 2, 1])=%s\n",(sameFirstLast(nums3,3))==0?"false":"true");

	return 0;
}
