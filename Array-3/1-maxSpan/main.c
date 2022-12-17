/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

int maxSpan(int nums[],int len) {
	int res=0;
	for(int i=0;i<len;i++){
		for(int j=len-1;j>=i;j--){
			if(*(nums+j)==*(nums+i)){
				res=res<(j-i+1)?(j-i+1):res;
				break;
			}
		}
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 2, 1, 1, 3};
	len=5;
	printf("maxSpan([1, 2, 1, 1, 3])=%d\n",maxSpan(nums1,len));
	int nums2[]={1, 4, 2, 1, 4, 1, 4};
	len=7;
	printf("maxSpan([1, 4, 2, 1, 4, 1, 4])=%d\n",maxSpan(nums2,len));
	int nums3[]={1, 4, 2, 1, 4, 4, 4};
	len=7;
	printf("maxSpan([1, 4, 2, 1, 4, 4, 4])=%d\n",maxSpan(nums3,len));

	return 0;
}
