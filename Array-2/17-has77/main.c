/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool has77(int nums[],int len) {
	for(int i=0;i<len;i++){
		if((i<len-1&&*(nums+i)==7&&*(nums+i+1)==7)||((i<len-2&&*(nums+i)==7&&*(nums+i+2)==7)))
			return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 7, 7};
	len=3;
	printf("has77([1, 7, 7])=%s\n",(has77(nums1,len))==0?"false":"true");
	int nums2[]={1, 7, 1, 7};
	len=4;
	printf("has77([1, 7, 1, 7])=%s\n",(has77(nums2,len))==0?"false":"true");
	int nums3[]={1, 7, 1, 1, 7};
	len=5;
	printf("has77([1, 7, 1, 1, 7])=%s\n",(has77(nums3,len))==0?"false":"true");

	return 0;
}
