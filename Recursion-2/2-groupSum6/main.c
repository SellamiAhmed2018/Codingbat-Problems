/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool groupSum6(int start, int nums[], int target,int length) {
	if(start>=length) return target==0;
	if(*(nums+start)==6)
		return groupSum6(start+1,nums,target-6,length);
	return groupSum6(start+1,nums,target-*(nums+start),length)||groupSum6(start+1,nums,target,length);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={5, 6, 2};
	printf("groupSum6(0, [5, 6, 2], 8)=%s\n",(groupSum6(0,nums1,8,3))==0?"false":"true");

	int nums2[]={5, 6, 2};
	printf("groupSum6(0, [5, 6, 2], 9)=%s\n",(groupSum6(0,nums2,9,3))==0?"false":"true");

	int nums3[]={5, 6, 2};
	printf("groupSum6(0, [5, 6, 2], 7)=%s\n",(groupSum6(0,nums3,7,3))==0?"false":"true");

	return 0;
}
