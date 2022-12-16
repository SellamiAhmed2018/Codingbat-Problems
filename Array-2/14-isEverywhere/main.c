/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool isEverywhere(int nums[],int len,int val) {
	for(int i=0;i<len-1;i++){
		if(*(nums+i)!=val&&*(nums+i+1)!=val)
			return false;
	}
	return true;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 2, 1, 3};
	len=4;
	printf("isEverywhere([1, 2, 1, 3], 1)=%s\n",(isEverywhere(nums1,len,1))==0?"false":"true");
	int nums2[]={1, 2, 1, 3};
	len=4;
	printf("isEverywhere([1, 2, 1, 3], 2)=%s\n",(isEverywhere(nums2,len,2))==0?"false":"true");
	int nums3[]={1, 2, 1, 3, 4};
	len=5;
	printf("isEverywhere([1, 2, 1, 3, 4], 1)=%s\n",(isEverywhere(nums3,len,1))==0?"false":"true");

	return 0;
}
