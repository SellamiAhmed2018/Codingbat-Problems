/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool more14(int nums[],int len) {
	int ones=0,fours=0;
	for(int i=0;i<len;i++){
		ones+=(*(nums+i)==1)?1:0;
		fours+=(*(nums+i)==4)?1:0;
	}
	return ones>fours;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 4, 1};
	len=3;
	printf("more14([1, 4, 1])=%s\n",(more14(nums1,len))==0?"false":"true");
	int nums2[]={1, 4, 1, 4};
	len=4;
	printf("more14([1, 4, 1, 4])=%s\n",(more14(nums2,len))==0?"false":"true");
	int nums3[]={1, 1};
	len=2;
	printf("more14([1, 1])=%s\n",(more14(nums3,len))==0?"false":"true");

	return 0;
}
