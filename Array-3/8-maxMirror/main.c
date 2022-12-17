/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

int maxMirror(int nums[],int len) {
	int max=0,count=0;
	for(int i=0;i<len;i++){
		count=0;
		for(int j=len-1;j>=0&&i+count<len;j--){
			if(*(nums+i+count)==*(nums+j)){
				count++;
			}else if(count>0){
				max=count>max?count:max;
				count=0;
			}
		}
		max=count>max?count:max;
	}
	return max;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 2, 3, 8, 9, 3, 2, 1};
	len=8;
	printf("maxMirror([1, 2, 3, 8, 9, 3, 2, 1])=%d\n",maxMirror(nums1,len));
	int nums2[]={1, 2, 1, 4};
	len=4;
	printf("maxMirror([1, 2, 1, 4])=%d\n",maxMirror(nums2,len));
	int nums3[]={7, 1, 2, 9, 7, 2, 1};
	len=7;
	printf("maxMirror([7, 1, 2, 9, 7, 2, 1])=%d\n",maxMirror(nums3,len));

	return 0;
}
