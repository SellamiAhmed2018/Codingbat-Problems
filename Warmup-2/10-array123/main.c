/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool arrayFront9(int nums[],int length) {
	for(int i=0;i<length-2;i++){
		if(*(nums+i)==1&&*(nums+i+1)==2&&*(nums+i+2)==3) return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 1, 2, 3, 1};
	printf("arrayFront9([1, 1, 2, 3, 1])=%s\n",(arrayFront9(nums1,5))==0?"false":"true");
	
	int nums2[]={1, 1, 2, 4, 1};
	printf("arrayFront9([1, 1, 2, 4, 1])=%s\n",(arrayFront9(nums2,5))==0?"false":"true");
	
	int nums3[]={1, 1, 2, 1, 2, 3};
	printf("arrayFront9([1, 1, 2, 1, 2, 3])=%s\n",(arrayFront9(nums3,6))==0?"false":"true");
	
	int nums4[]={1, 1, 2, 1, 2, 1};
	printf("arrayFront9([1, 1, 2, 1, 2, 1])=%s\n",(arrayFront9(nums4,6))==0?"false":"true");
	
	int nums5[]={1, 2, 3, 1, 2, 3};
	printf("arrayFront9([1, 2, 3, 1, 2, 3])=%s\n",(arrayFront9(nums5,6))==0?"false":"true");
	
	int nums6[]={1, 2, 3};
	printf("arrayFront9([1, 2, 3])=%s\n",(arrayFront9(nums6,3))==0?"false":"true");
	
	int nums7[]={1, 1, 1};
	printf("arrayFront9([1, 1, 1])=%s\n",(arrayFront9(nums7,3))==0?"false":"true");
	
	int nums8[]={1, 2};
	printf("arrayFront9([1, 2])=%s\n",(arrayFront9(nums8,2))==0?"false":"true");
	
	int nums9[]={1};
	printf("arrayFront9([1])=%s\n",(arrayFront9(nums9,1))==0?"false":"true");
	
	int nums10[]={};
	printf("arrayFront9([])=%s\n","false");
	
	return 0;
}