/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* zeroMax(int nums[], int len){
	int* res=(int*)malloc(len*sizeof(int));
	int odd;
	for(int i=0;i<len;i++){
		if(*(nums+i)==0){
			odd=*(nums+i);
			for(int j=i;j<len;j++){
				odd=*(nums+j)%2!=0&&*(nums+j)>odd?*(nums+j):odd;
			}
			*(res+i)=odd;
		}else{
			*(res+i)=*(nums+i);
		}
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len;

	int nums1[]={0, 5, 0, 3};
	len=4;
	nums=zeroMax(nums1,len);
	printf("zeroMax([0, 5, 0, 3])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={0, 4, 0, 3};
	len=4;
	nums=zeroMax(nums2,len);
	printf("zeroMax([0, 4, 0, 3])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={0, 1, 0};
	len=3;
	nums=zeroMax(nums3,len);
	printf("zeroMax([0, 1, 0])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
