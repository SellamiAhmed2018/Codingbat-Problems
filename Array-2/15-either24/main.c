/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool either24(int nums[],int len) {
	bool twos=false,fours=false;
	for(int i=0;(i<len-1&&(!(twos&&fours)));i++){
		if(!twos&&*(nums+i)==2&&*(nums+i+1)==2) twos=true;
		if(!fours&&*(nums+i)==4&&*(nums+i+1)==4) fours=true;
	}
	return twos^fours; // (twos&&!fours)||(!twos&&fours)==twos^fours (XOR)
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 2, 2};
	len=3;
	printf("either24([1, 2, 2])=%s\n",(either24(nums1,len))==0?"false":"true");
	int nums2[]={4, 4, 1};
	len=3;
	printf("either24([4, 4, 1])=%s\n",(either24(nums2,len))==0?"false":"true");
	int nums3[]={4, 4, 1, 2, 2};
	len=5;
	printf("either24([4, 4, 1, 2, 2])=%s\n",(either24(nums3,len))==0?"false":"true");

	return 0;
}
