/* © Ahmed Sellami */
#include<stdio.h>

int countEvens(int nums[],int len) {
	int res=0;
	for(int i=0;i<len;i++){
		res+=*(nums+i)%2==0?1:0;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={2, 1, 2, 3, 4};
	len=5;
	printf("countEvens([2, 1, 2, 3, 4])=%d\n",countEvens(nums1,len));
	int nums2[]={2, 2, 0};
	len=3;
	printf("countEvens([2, 2, 0])=%d\n",countEvens(nums2,len));
	int nums3[]={1, 3, 5};
	len=3;
	printf("countEvens([1, 3, 5])=%d\n",countEvens(nums3,len));

	return 0;
}
