/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool help(int nums[],int length,int index,int sum1,int sum2){
	if(index==length) return (sum1%10==0&&sum2%2==1)||(sum1%2==1&&sum2%10==0);
	return help(nums,length,index+1,sum1+*(nums+index),sum2)||help(nums,length,index+1,sum1,sum2+*(nums+index));
}

bool splitOdd10(int nums[], int length) {
	return help(nums,length,0,0,0);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={5, 5, 5};
	printf("splitOdd10([5, 5, 5])=%s\n",(splitOdd10(nums1,3))==0?"false":"true");

	int nums2[]={5, 5, 6};
	printf("splitOdd10([5, 5, 6])=%s\n",(splitOdd10(nums2,3))==0?"false":"true");

	int nums3[]={5, 5, 6, 1};
	printf("splitOdd10([5, 5, 6, 1])=%s\n",(splitOdd10(nums3,4))==0?"false":"true");


	return 0;
}
