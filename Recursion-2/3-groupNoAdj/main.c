/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool groupNoAdj(int start, int nums[], int target,int length) {
	if(start>=length) return target==0;
	return groupNoAdj(start+2,nums,target-*(nums+start),length)||groupNoAdj(start+1,nums,target,length);
}
int main(int argc,char** argv){
	// Test Cases
	int nums1[]={2, 5, 10, 4};
	printf("groupNoAdj(0, [2, 5, 10, 4], 12)=%s\n",(groupNoAdj(0,nums1,12,4))==0?"false":"true");

	int nums2[]={2, 5, 10, 4};
	printf("groupNoAdj(0, [2, 5, 10, 4], 14)=%s\n",(groupNoAdj(0,nums2,14,4))==0?"false":"true");

	int nums3[]={2, 5, 10, 4};
	printf("groupNoAdj(0, [2, 5, 10, 4], 7)=%s\n",(groupNoAdj(0,nums3,7,4))==0?"false":"true");

	return 0;
}
