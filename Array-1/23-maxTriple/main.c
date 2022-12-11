/* © Ahmed Sellami */
#include<stdio.h>

int maxTriple(int nums[],int length) {
	return (*nums>=*(nums+length/2)&&*nums>=*(nums+length-1))?*nums:(*(nums+length/2)>=*nums&&*(nums+length/2)>=*(nums+length-1))?*(nums+length/2):*(nums+length-1);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 2, 3};
	printf("maxTriple([1, 2, 3])=%d\n",maxTriple(nums1));
	int nums2[]={1, 5, 3};
	printf("maxTriple([1, 5, 3])=%d\n",maxTriple(nums2));
	int nums3[]={5, 2, 3};
	printf("maxTriple([5, 2, 3])=%d\n",maxTriple(nums3));

	return 0;
}
