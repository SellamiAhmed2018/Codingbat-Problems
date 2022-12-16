/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool tripleUp(int nums[],int len) {
	for(int i=0;i<len-2;i++){
		if(*(nums+i+1)=*(nums+i)+1&&*(nums+i+2)==*(nums+i+1)+1)
			return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 4, 5, 6, 2};
	len=5;
	printf("tripleUp([1, 4, 5, 6, 2])=%s\n",(tripleUp(nums1,len))==0?"false":"true");
	int nums2[]={1, 2, 3};
	len=3;
	printf("tripleUp([1, 2, 3])=%s\n",(tripleUp(nums2,len))==0?"false":"true");
	int nums3[]={1, 2, 4};
	len=3;
	printf("tripleUp([1, 2, 4])=%s\n",(tripleUp(nums3,len))==0?"false":"true");

	return 0;
}
