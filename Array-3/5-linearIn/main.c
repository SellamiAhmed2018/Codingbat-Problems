/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool linearIn(int outer[],int inner[],int len1,int len2) {
	int j=0;
	for(int i=0;(i<len1&&j<len2);i++){
		if(*(outer+i)==*(inner+j)){
			j++;
		}
	}
	return j==len2;
}

int main(int argc,char** argv){
	// Test Cases
	int len1,len2;

	int nums1[]={1, 2, 4, 6},nums2[]={2, 4};
	len1=4;
	len2=2;
	printf("linearIn([1, 2, 4, 6], [2, 4])=%s\n",(linearIn(nums1,nums2,len1,len2))==0?"false":"true");

	int nums3[]={1, 2, 4, 6},nums4[]={2, 3, 4};
	len1=4;
	len2=3;
	printf("linearIn([1, 2, 4, 6], [2, 3, 4])=%s\n",(linearIn(nums3,nums4,len1,len2))==0?"false":"true");

	int nums5[]={1, 2, 4, 4, 6},nums6[]={2, 4};
	len1=5;
	len2=2;
	printf("linearIn([1, 2, 4, 4, 6], [2, 4])=%s\n",(linearIn(nums5,nums6,len1,len2))==0?"false":"true");

	int nums7[]={2, 2, 4, 4, 6, 6},nums8[]={2, 4};
	len1=6;
	len2=2;
	printf("linearIn([2, 2, 4, 4, 6, 6], [2, 4])=%s\n",(linearIn(nums7,nums8,len1,len2))==0?"false":"true");

	return 0;
}
