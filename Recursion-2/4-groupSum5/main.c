/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool groupSum5(int start, int nums[], int target,int length) {
	if(start>=length) return target==0;
	if(*(nums+start)%5==0){
		if(start<length-1&&*(nums+start+1)==1)
			return groupSum5(start+2,nums,target-*(nums+start),length);
		else
			return groupSum5(start+1,nums,target-*(nums+start),length);
	}else{
		return groupSum5(start+1,nums,target-*(nums+start),length)||groupSum5(start+1,nums,target,length);
	}
}
int main(int argc,char** argv){
	// Test Cases
	int nums1[]={2, 5, 10, 4};
	printf("groupSum5(0, [2, 5, 10, 4], 19)=%s\n",(groupSum5(0,nums1,19,4))==0?"false":"true");

	int nums2[]={2, 5, 10, 4};
	printf("groupSum5(0, [2, 5, 10, 4], 17)=%s\n",(groupSum5(0,nums2,17,4))==0?"false":"true");

	int nums3[]={2, 5, 10, 4};
	printf("groupSum5(0, [2, 5, 10, 4], 12)=%s\n",(groupSum5(0,nums3,12,4))==0?"false":"true");

	return 0;
}
