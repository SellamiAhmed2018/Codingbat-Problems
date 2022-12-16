/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

int sum67(int nums[],int len) {
	int res=0,i=0;
	bool counting=true;
	while(i<len){
		if(*(nums+i)==6)
			counting=false;
		else if(*(nums+i)==7&&!counting){
			counting=true;
			i++;
			continue;
		}
		if(counting)
			res+=*(nums+i);
		i++;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 2, 2};
	len=3;
	printf("sum67([1, 2, 2])=%d\n",sum67(nums1,len));
	int nums2[]={1, 2, 2, 6, 99, 99, 7};
	len=7;
	printf("sum67([1, 2, 2, 6, 99, 99, 7])=%d\n",sum67(nums2,len));
	int nums3[]={1, 1, 6, 7, 2};
	len=5;
	printf("sum67([1, 1, 6, 7, 2])=%d\n",sum67(nums3,len));

	return 0;
}
