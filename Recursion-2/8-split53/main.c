/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool help(int nums[],int length,int index,int sum1,int sum2){
	if(index==length) return sum1==sum2;
	if(*(nums+index)%5==0)
		return help(nums,length,index+1,sum1+*(nums+index),sum2);
	else if(*(nums+index)%3==0)
		return help(nums,length,index+1,sum1,sum2+*(nums+index));
	return help(nums,length,index+1,sum1+*(nums+index),sum2)||help(nums,length,index+1,sum1,sum2+*(nums+index));
}

bool split53(int nums[], int length) {
	return help(nums,length,0,0,0);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 1};
	printf("split53([1, 1])=%s\n",(split53(nums1,2))==0?"false":"true");

	int nums2[]={1, 1, 1};
	printf("split53([1, 1, 1])=%s\n",(split53(nums2,3))==0?"false":"true");

	int nums3[]={2, 4, 2};
	printf("split53([2, 4, 2])=%s\n",(split53(nums3,3))==0?"false":"true");


	return 0;
}
