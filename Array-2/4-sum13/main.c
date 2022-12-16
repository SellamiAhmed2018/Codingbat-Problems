/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

int sum13(int nums[],int len) {
	int res=0,i=0;
	bool counting=true;
	while(i<len){
		if(*(nums+i)==13)
			counting=false;
		else if(!counting)
			counting=true;
		else
			res+=*(nums+i);
		i++;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 2, 2, 1};
	len=4;
	printf("sum13([1, 2, 2, 1])=%d\n",sum13(nums1,len));
	int nums2[]={1, 1};
	len=2;
	printf("sum13([1, 1])=%d\n",sum13(nums2,len));
	int nums3[]={1, 2, 2, 1, 13};
	len=5;
	printf("sum13([1, 2, 2, 1, 13])=%d\n",sum13(nums3,len));

	return 0;
}
