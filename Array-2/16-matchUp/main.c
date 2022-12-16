/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int matchUp(int nums1[], int nums2[], int len) {
	int res=0;
	for(int i=0;i<len;i++){
		res+=(*(nums1+i)!=*(nums2+i)&&abs(*(nums1+i)-*(nums2+i))<=2)?1:0;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 2, 3},nums2[]={2, 3, 10};
	len=3;
	printf("matchUp([1, 2, 3], [2, 3, 10])=%d\n",matchUp(nums1,nums2,len));

	int nums3[]={1, 2, 3},nums4[]={2, 3, 5};
	len=3;
	printf("matchUp([1, 2, 3], [2, 3, 5])=%d\n",matchUp(nums3,nums4,len));

	int nums5[]={1, 2, 3},nums6[]={2, 3, 3};
	len=3;
	printf("matchUp([1, 2, 3], [2, 3, 3])=%d\n",matchUp(nums5,nums6,len));

	return 0;
}
