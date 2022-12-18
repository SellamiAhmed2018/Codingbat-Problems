/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool help(int nums[],int length,int index,int sum1,int sum2){
	if(index==length) return sum1==sum2;
	return help(nums,length,index+1,sum1+*(nums+index),sum2)||help(nums,length,index+1,sum1,sum2+*(nums+index));
}

bool splitArray(int nums[], int length) {
	return help(nums,length,0,0,0);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={2, 2};
	printf("splitArray([2, 2])=%s\n",(splitArray(nums1,2))==0?"false":"true");

	int nums2[]={2, 3};
	printf("splitArray([2, 3])=%s\n",(splitArray(nums2,2))==0?"false":"true");

	int nums3[]={5, 2, 3};
	printf("splitArray([5, 2, 3])=%s\n",(splitArray(nums3,3))==0?"false":"true");


	return 0;
}
