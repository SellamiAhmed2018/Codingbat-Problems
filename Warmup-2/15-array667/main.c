/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

int array667(int nums[],int length) {
	int count=0;
	for(int i=0;i<length-1;i++)
		count+=(*(nums+i)==6&&(*(nums+i+1)==6||*(nums+i+1)==7))?1:0;
	return count;
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={6, 6, 2};
	printf("array667([6, 6, 2])=%d\n",array667(nums1,3));
	
	int nums2[]={6, 6, 2, 6};
	printf("array667([6, 6, 2, 6])=%d\n",array667(nums2,4));
	
	int nums3[]={6, 7, 2, 6};
	printf("array667([6, 7, 2, 6])=%d\n",array667(nums3,4));
	
	int nums4[]={6, 6, 2, 6, 7};
	printf("array667([6, 6, 2, 6, 7])=%d\n",array667(nums4,5));
	
	int nums5[]={1, 6, 3};
	printf("array667([1, 6, 3])=%d\n",array667(nums5,3));
	
	int nums6[]={6, 1};
	printf("array667([6, 1])=%d\n",array667(nums6,2));
	
	int nums7[]={};
	printf("array667([])=%d\n",0);
	
	int nums8[]={3, 6, 7, 6};
	printf("array667([3, 6, 7, 6])=%d\n",array667(nums8,4));
	
	int nums9[]={3, 6, 6, 7};
	printf("array667([3, 6, 6, 7])=%d\n",array667(nums9,4));
	
	int nums10[]={6, 3, 6, 6};
	printf("array667([6, 3, 6, 6])=%d\n",array667(nums10,4));
	
	int nums11[]={6, 7, 6, 6};
	printf("array667([6, 7, 6, 6])=%d\n",array667(nums11,4));

	int nums12[]={1, 2, 3, 5, 6};
	printf("array667([1, 2, 3, 5, 6])=%d\n",array667(nums12,5));
	
	int nums13[]={1, 2, 3, 6, 6};
	printf("array667([1, 2, 3, 6, 6])=%d\n",array667(nums13,5));
	
	
	return 0;
}