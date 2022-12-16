/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool has12(int nums[],int len) {
	bool one=false;
	for(int i=0;i<len;i++){
		if(!one&&*(nums+i)==1)
			one=true;
		else if(one&&*(nums+i)==2)
			return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 3, 2};
	len=3;
	printf("has12([1, 3, 2])=%s\n",(has12(nums1,len))==0?"false":"true");
	int nums2[]={3, 1, 2};
	len=3;
	printf("has12([3, 1, 2])=%s\n",(has12(nums2,len))==0?"false":"true");
	int nums3[]={3, 1, 4, 5, 2};
	len=5;
	printf("has12([3, 1, 4, 5, 2])=%s\n",(has12(nums3,len))==0?"false":"true");

	return 0;
}
