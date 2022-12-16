/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool no14(int nums[],int len) {
	bool noOnes=true,noFours=true;
	for(int i=0;(i<len&&(noOnes||noFours));i++){
		if(*(nums+i)==1) noOnes=false;
		if(*(nums+i)==4) noFours=false;
	}
	return noOnes||noFours;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 2, 3};
	len=3;
	printf("no14([1, 2, 3])=%s\n",(no14(nums1,len))==0?"false":"true");
	int nums2[]={1, 2, 3, 4};
	len=4;
	printf("no14([1, 2, 3, 4])=%s\n",(no14(nums2,len))==0?"false":"true");
	int nums3[]={2, 3, 4};
	len=3;
	printf("no14([2, 3, 4])=%s\n",(no14(nums3,len))==0?"false":"true");

	return 0;
}
