/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool has271(int nums[],int length) {
	for(int i=0;i<length-2;i++){
		if(*(nums+i+1)==*(nums+i)+5&&abs(*(nums+i)-1-*(nums+i+2))<=2) return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 2, 7, 1};
	printf("has271([1, 2, 7, 1])=%s\n",(has271(nums1,4))==0?"false":"true");
	
	int nums2[]={1, 2, 8, 1};
	printf("has271([1, 2, 8, 1])=%s\n",(has271(nums2,4))==0?"false":"true");
	
	int nums3[]={2, 7, 1};
	printf("has271([2, 7, 1])=%s\n",(has271(nums3,3))==0?"false":"true");
	
	int nums4[]={3, 8, 2};
	printf("has271([3, 8, 2])=%s\n",(has271(nums4,3))==0?"false":"true");
	
	int nums5[]={2, 7, 3};
	printf("has271([2, 7, 3])=%s\n",(has271(nums5,3))==0?"false":"true");

	int nums6[]={2, 7, 4};
	printf("has271([2, 7, 4])=%s\n",(has271(nums6,3))==0?"false":"true");
	
	int nums7[]={2, 7, -1};
	printf("has271([2, 7, -1])=%s\n",(has271(nums7,3))==0?"false":"true");
	
	int nums8[]={2, 7, -2};
	printf("has271([2, 7, -2])=%s\n",(has271(nums8,3))==0?"false":"true");
	
	int nums9[]={4, 5, 3, 8, 0};
	printf("has271([4, 5, 3, 8, 0])=%s\n",(has271(nums9,5))==0?"false":"true");
	
	int nums10[]={2, 7, 5, 10, 4};
	printf("has271([2, 7, 5, 10, 4])=%s\n",(has271(nums10,5))==0?"false":"true");
	
	int nums11[]={2, 7, -2, 4, 9, 3};
	printf("has271([2, 7, -2, 4, 9, 3])=%s\n",(has271(nums11,6))==0?"false":"true");
	
	int nums12[]={2, 7, 5, 10, 1};
	printf("has271([2, 7, 5, 10, 1])=%s\n",(has271(nums12,5))==0?"false":"true");
	
	int nums13[]={2, 7, -2, 4, 10, 2};
	printf("has271([2, 7, -2, 4, 10, 2])=%s\n",(has271(nums13,6))==0?"false":"true");
	
	int nums14[]={1, 1, 4, 9, 0};
	printf("has271([1, 1, 4, 9, 0])=%s\n",(has271(nums14,5))==0?"false":"true");
	
	int nums15[]={1, 1, 4, 9, 4, 9, 2};
	printf("has271([1, 1, 4, 9, 4, 9, 2])=%s\n",(has271(nums15,7))==0?"false":"true");
	
	return 0;
}