/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool lucky13(int nums[],int len) {
	for(int i=0;i<len;i++){
		if(*(nums+i)==1||*(nums+i)==3)
			return false;
	}
	return true;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={0, 2, 4};
	len=3;
	printf("lucky13([0, 2, 4])=%s\n",(lucky13(nums1,len))==0?"false":"true");
	int nums2[]={1, 2, 3};
	len=3;
	printf("lucky13([1, 2, 3])=%s\n",(lucky13(nums2,len))==0?"false":"true");
	int nums3[]={1, 2, 4};
	len=3;
	printf("lucky13([1, 2, 4])=%s\n",(lucky13(nums3,len))==0?"false":"true");

	return 0;
}
