/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool firstLast6(int nums[],int length) {
	return *nums==6||*(nums+length-1)==6; // since length>=1
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 2, 6};
	printf("firstLast6([1, 2, 6])=%s\n",(firstLast6(nums1,3))==0?"false":"true");
	int nums2[]={6, 1, 2, 3};
	printf("firstLast6([6, 1, 2, 3])=%s\n",(firstLast6(nums2,4))==0?"false":"true");
	int nums3[]={13, 6, 1, 2, 3};
	printf("firstLast6([13, 6, 1, 2, 3])=%s\n",(firstLast6(nums3,5))==0?"false":"true");

	return 0;
}
