/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool twoTwo(int nums[],int len) {
	if(len==1&&*nums==2) return false;
	if(len<2) return true;
	for(int i=0;i<len;i++){
		if(*(nums+i)==2&&((i==len-1&&*(nums+i-1)!=2)||(i>0&&i<len-1&&i==0&&*(nums+i+1)!=2)||(*(nums+i-1)!=2&&*(nums+i+1)!=2)))
			return false;
	}
	return true;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={4, 2, 2, 3};
	len=4;
	printf("twoTwo([4, 2, 2, 3])=%s\n",(twoTwo(nums1,len))==0?"false":"true");
	int nums2[]={2, 2, 4};
	len=3;
	printf("twoTwo([2, 2, 4])=%s\n",(twoTwo(nums2,len))==0?"false":"true");
	int nums3[]={2, 2, 4, 2};
	len=4;
	printf("twoTwo([2, 2, 4, 2])=%s\n",(twoTwo(nums3,len))==0?"false":"true");

	return 0;
}
