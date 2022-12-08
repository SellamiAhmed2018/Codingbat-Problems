/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool noTriples(int nums[],int length) {
	for(int i=0;i<length-2;i++){
		if(*(nums+i)==*(nums+i+1)&&*(nums+i)==*(nums+i+2)) return false;
	}
	return true;
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 1, 2, 2, 1};
	printf("noTriples([1, 1, 2, 2, 1])=%s\n",(noTriples(nums1,5))==0?"false":"true");
	
	int nums2[]={1, 1, 2, 2, 2, 1};
	printf("noTriples([1, 1, 2, 2, 2, 1])=%s\n",(noTriples(nums2,6))==0?"false":"true");
	
	int nums3[]={1, 1, 1, 2, 2, 2, 1};
	printf("noTriples([1, 1, 1, 2, 2, 2, 1])=%s\n",(noTriples(nums3,7))==0?"false":"true");
	
	int nums4[]={1, 1, 2, 2, 1, 2, 1};
	printf("noTriples([1, 1, 2, 2, 1, 2, 1])=%s\n",(noTriples(nums4,7))==0?"false":"true");
	
	int nums5[]={1, 2, 1};
	printf("noTriples([1, 2, 1])=%s\n",(noTriples(nums5,3))==0?"false":"true");

	int nums6[]={1, 1, 1};
	printf("noTriples([1, 1, 1])=%s\n",(noTriples(nums6,3))==0?"false":"true");
	
	int nums7[]={1, 1};
	printf("noTriples([1, 1])=%s\n",(noTriples(nums7,2))==0?"false":"true");
	
	int nums8[]={1};
	printf("noTriples([1])=%s\n",(noTriples(nums8,1))==0?"false":"true");
	
	int nums9[]={};
	printf("noTriples([])=%s\n","true");
	
	return 0;
}