/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

int countClumps(int nums[],int len) {
	int res=0;
	for(int i=0;i<len-1;i++){
		if(*(nums+i)==*(nums+i+1)){
			if(i==0||(i>0&&*(nums+i)!=*(nums+i-1))){
				res++;
			}
		}
	}

	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 2, 2, 3, 4, 4};
	len=6;
	printf("countClumps([1, 2, 2, 3, 4, 4])=%d\n",countClumps(nums1,len));
	int nums2[]={1, 1, 2, 1, 1};
	len=5;
	printf("countClumps([1, 1, 2, 1, 1])=%d\n",countClumps(nums2,len));
	int nums3[]={1, 1, 1, 1, 1};
	len=5;
	printf("countClumps([1, 1, 1, 1, 1])=%d\n",countClumps(nums3,len));

	return 0;
}
