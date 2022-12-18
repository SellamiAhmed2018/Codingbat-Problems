/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

int array11(int nums[],int length, int index) {
	return index==length?0:*(nums+index)==11?1+array11(nums,length,index+1):array11(nums,length,index+1);
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 2, 11};
	printf("array11([1, 2, 11], 0)=%d\n",array11(nums1,3,0));

	int nums2[]={11, 11};
	printf("array11([11, 11], 0)=%d\n",array11(nums2,2,0));

	int nums3[]={1, 2, 3, 4};
	printf("array11([1, 2, 3, 4], 0)=%d\n",array11(nums3,4,0));

	return 0;
}
