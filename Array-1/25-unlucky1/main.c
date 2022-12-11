/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool unlucky1(int nums[],int length) {
	return (length>=2&&((*nums==1&&*(nums+1)==3)||(*(nums+length-2)==1&&*(nums+length-1)==3)))
	|| (length>=3&&((*(nums+1)==1&&*(nums+2)==3)));
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 3, 4, 5};
	printf("unlucky1([1, 3, 4, 5])=%s\n",(unlucky1(nums1,4))==0?"false":"true");
	int nums2[]={2, 1, 3, 4, 5};
	printf("unlucky1([2, 1, 3, 4, 5])=%s\n",(unlucky1(nums2,5))==0?"false":"true");
	int nums3[]={1, 1, 1};
	printf("unlucky1([1, 1, 1])=%s\n",(unlucky1(nums3,3))==0?"false":"true");

	return 0;
}
