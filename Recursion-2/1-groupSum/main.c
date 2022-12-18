/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool groupSum(int start, int nums[], int target,int length) {
	if(start>=length) return target==0;
	return groupSum(start+1,nums,target-*(nums+start),length)||groupSum(start+1,nums,target,length);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={2, 4, 8};
	printf("groupSum(0, [2, 4, 8], 10)=%s\n",(groupSum(0,nums1,10,3))==0?"false":"true");

	int nums2[]={2, 4, 8};
	printf("groupSum(0, [2, 4, 8], 14)=%s\n",(groupSum(0,nums2,14,3))==0?"false":"true");

	int nums3[]={2, 4, 8};
	printf("groupSum(0, [2, 4, 8], 9)=%s\n",(groupSum(0,nums3,9,3))==0?"false":"true");

	return 0;
}
