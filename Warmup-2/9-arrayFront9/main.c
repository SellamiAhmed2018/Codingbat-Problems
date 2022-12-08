/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool arrayFront9(int nums[],int length) {
	for(int i=0;i<((length<4)?length:4);i++){
		if (*(nums+i)==9) return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 2, 9, 3, 4};
	printf("arrayFront9([1, 2, 9, 3, 4])=%s\n",(arrayFront9(nums1,5))==0?"false":"true");
	
	int nums2[]={1, 2, 3, 4, 9};
	printf("arrayFront9([1, 2, 3, 4, 9])=%s\n",(arrayFront9(nums2,5))==0?"false":"true");
	
	int nums3[]={1, 2, 3, 4, 5};
	printf("arrayFront9([1, 2, 3, 4, 5])=%s\n",(arrayFront9(nums3,5))==0?"false":"true");
	
	int nums4[]={9, 2, 3};
	printf("arrayFront9([9, 2, 3])=%s\n",(arrayFront9(nums4,3))==0?"false":"true");
	
	int nums5[]={1, 9, 9};
	printf("arrayFront9([1, 9, 9])=%s\n",(arrayFront9(nums5,3))==0?"false":"true");
	
	int nums6[]={1, 2, 3};
	printf("arrayFront9([1, 2, 3])=%s\n",(arrayFront9(nums6,3))==0?"false":"true");
	
	int nums7[]={1, 9};
	printf("arrayFront9([1, 9])=%s\n",(arrayFront9(nums7,2))==0?"false":"true");
	
	int nums8[]={5, 5};
	printf("arrayFront9([5, 5])=%s\n",(arrayFront9(nums8,2))==0?"false":"true");
	
	int nums9[]={2};
	printf("arrayFront9([2])=%s\n",(arrayFront9(nums9,1))==0?"false":"true");
	
	int nums10[]={9};
	printf("arrayFront9([9])=%s\n",(arrayFront9(nums10,1))==0?"false":"true");
	
	int nums11[]={};
	printf("arrayFront9([])=%s\n","false");

	int nums12[]={3, 9, 2, 3, 3};
	printf("arrayFront9([3, 9, 2, 3, 3])=%s\n",(arrayFront9(nums12,5))==0?"false":"true");
	
	
	return 0;
}