/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool canBalance(int nums[],int len) {
	int sum1,sum2;
	for(int i=0;i<len;i++){
		sum1=0;
		sum2=0;
		for(int j=0;j<=i;j++){
			sum1+=*(nums+j);
		}
		for(int k=i+1;k<len;k++){
			sum2+=*(nums+k);
		}
		if(sum1==sum2)
			return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 1, 1, 2, 1};
	len=5;
	printf("canBalance([1, 1, 1, 2, 1])=%s\n",(canBalance(nums1,len))==0?"false":"true");
	int nums2[]={2, 1, 1, 2, 1};
	len=5;
	printf("canBalance([2, 1, 1, 2, 1])=%s\n",(canBalance(nums2,len))==0?"false":"true");
	int nums3[]={10, 10};
	len=2;
	printf("canBalance([10, 10])=%s\n",(canBalance(nums3,len))==0?"false":"true");

	return 0;
}
