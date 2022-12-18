/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool array6(int nums[],int length, int index) {
	return index==length?false:*(nums+index)==6?true:array6(nums,length,index+1);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 6, 4};
	printf("array6([1, 6, 4], 0)=%s\n",(array6(nums1,3,0))==0?"false":"true");
	int nums2[]={1, 4};
	printf("array6([1, 4], 0)=%s\n",(array6(nums2,2,0))==0?"false":"true");
	int nums3[]={6};
	printf("array6([6], 0)=%s\n",(array6(nums3,1,0))==0?"false":"true");

	return 0;
}
