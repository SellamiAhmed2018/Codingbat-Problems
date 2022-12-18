/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool array220(int nums[],int length, int index) {
	return index>=length-1?false:*(nums+index+1)==10*(*(nums+index))?true:array220(nums,length,index+1);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 2, 20};
	printf("array220([1, 2, 20], 0)=%s\n",(array220(nums1,3,0))==0?"false":"true");
	int nums2[]={3, 30};
	printf("array220([3, 30], 0)=%s\n",(array220(nums2,2,0))==0?"false":"true");
	int nums3[]={3};
	printf("array220([3], 0)=%s\n",(array220(nums3,1,0))==0?"false":"true");

	return 0;
}
