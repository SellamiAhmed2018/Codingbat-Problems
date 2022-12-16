/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool sum28(int nums[],int len) {
	int res=0;
	for(int i=0;i<len;i++){
		res+=*(nums+i)==2?1:0;
		if(res>4) break;
	}
	return res==4;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={2, 3, 2, 2, 4, 2};
	len=6;
	printf("sum28([2, 3, 2, 2, 4, 2])=%s\n",(sum28(nums1,len))==0?"false":"true");
	int nums2[]={2, 3, 2, 2, 4, 2, 2};
	len=7;
	printf("sum28([2, 3, 2, 2, 4, 2, 2])=%s\n",(sum28(nums2,len))==0?"false":"true");
	int nums3[]={1, 2, 3, 4};
	len=4;
	printf("sum28([1, 2, 3, 4])=%s\n",(sum28(nums3,len))==0?"false":"true");

	return 0;
}
