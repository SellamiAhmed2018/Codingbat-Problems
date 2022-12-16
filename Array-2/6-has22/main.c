/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool has22(int nums[],int len) {
	for(int i=0;i<len-1;i++){
		if(*(nums+i)==2&&*(nums+i+1)==2)
			return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 2, 2};
	len=3;
	printf("has22([1, 2, 2])=%s\n",(has22(nums1,len))==0?"false":"true");
	int nums2[]={1, 2, 1, 2};
	len=4;
	printf("has22([1, 2, 1, 2])=%s\n",(has22(nums2,len))==0?"false":"true");
	int nums3[]={2, 1, 2};
	len=3;
	printf("has22([2, 1, 2])=%s\n",(has22(nums3,len))==0?"false":"true");

	return 0;
}
