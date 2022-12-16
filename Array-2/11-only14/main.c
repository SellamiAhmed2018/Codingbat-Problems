/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool only14(int nums[],int len) {
	for(int i=0;i<len;i++){
		if(*(nums+i)!=1&&*(nums+i)!=4)
			return false;
	}
	return true;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 4, 1, 4};
	len=4;
	printf("only14([1, 4, 1, 4])=%s\n",(only14(nums1,len))==0?"false":"true");
	int nums2[]={1, 4, 2, 4};
	len=4;
	printf("only14([1, 4, 2, 4])=%s\n",(only14(nums2,len))==0?"false":"true");
	int nums3[]={1, 1};
	len=2;
	printf("only14([1, 1])=%s\n",(only14(nums3,len))==0?"false":"true");

	return 0;
}
