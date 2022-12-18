/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool scores100(int scores[], int length) {
	for(int i=1;i<length;i++){
		if(*(scores+i)==100&&*(scores+i-1)==*(scores+i))
			return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 100, 100};
	printf("scores100([1, 100, 100])=%s\n",(scores100(nums1,3))==0?"false":"true");

	int nums2[]={1, 100, 99, 100};
	printf("scores100([1, 100, 99, 100])=%s\n",(scores100(nums2,4))==0?"false":"true");

	int nums3[]={100, 1, 100, 100};
	printf("scores100([100, 1, 100, 100])=%s\n",(scores100(nums3,4))==0?"false":"true");


	return 0;
}
