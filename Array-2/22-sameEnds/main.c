/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool sameEnds(int nums[], int n, int len) {
	for(int i=0;i<n;i++){
		if(*(nums+i)!=*(nums+len-n+i))
			return false;
	}
	return true;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={5, 6, 45, 99, 13, 5, 6};
	len=7;
	printf("sameEnds([5, 6, 45, 99, 13, 5, 6])=%s\n",(sameEnds(nums1,1,len))==0?"false":"true");
	int nums2[]={5, 6, 45, 99, 13, 5, 6};
	len=7;
	printf("sameEnds([5, 6, 45, 99, 13, 5, 6])=%s\n",(sameEnds(nums2,2,len))==0?"false":"true");
	int nums3[]={5, 6, 45, 99, 13, 5, 6};
	len=7;
	printf("sameEnds([5, 6, 45, 99, 13, 5, 6])=%s\n",(sameEnds(nums3,3,len))==0?"false":"true");

	return 0;
}
