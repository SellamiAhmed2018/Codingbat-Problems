/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool haveThree(int nums[],int len) {
	int res=0;
	for(int i=0;i<len;i++){
		if(i<len-1&&*(nums+i)==3&&*(nums+i+1)==3)
			return false;
		res+=*(nums+i)==3?1:0;
	}
	return res==3;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={3, 1, 3, 1, 3};
	len=5;
	printf("haveThree([3, 1, 3, 1, 3])=%s\n",(haveThree(nums1,len))==0?"false":"true");
	int nums2[]={3, 1, 3, 3};
	len=4;
	printf("haveThree([3, 1, 3, 3])=%s\n",(haveThree(nums2,len))==0?"false":"true");
	int nums3[]={3, 4, 3, 3, 4};
	len=5;
	printf("haveThree([3, 4, 3, 3, 4])=%s\n",(haveThree(nums3,len))==0?"false":"true");

	return 0;
}
