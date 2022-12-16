/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool modThree(int nums[],int len) {
	for(int i=0;i<len-2;i++){
		if((*(nums+i)%2==0&&*(nums+i+1)%2==0&&*(nums+i+2)%2==0)||(*(nums+i)%2!=0&&*(nums+i+1)%2!=0&&*(nums+i+2)%2!=0))
			return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={2, 1, 3, 5};
	len=4;
	printf("modThree([2, 1, 3, 5])=%s\n",(modThree(nums1,len))==0?"false":"true");
	int nums2[]={2, 1, 2, 5};
	len=4;
	printf("modThree([2, 1, 2, 5])=%s\n",(modThree(nums2,len))==0?"false":"true");
	int nums3[]={2, 4, 2, 5};
	len=4;
	printf("modThree([2, 4, 2, 5])=%s\n",(modThree(nums3,len))==0?"false":"true");

	return 0;
}
