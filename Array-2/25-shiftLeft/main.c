/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* shiftLeft(int nums[], int len){
	int* res=(int*)malloc(len*sizeof(int));
	if(len==1){
		*res=*nums;	
	}else{
		for(int i=1;i<len;i++){
			*(res+i-1)=*(nums+i);
		}
		*(res+len-1)=*nums;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len;

	int nums1[]={6, 2, 5, 3};
	len=4;
	nums=shiftLeft(nums1,len);
	printf("shiftLeft([6, 2, 5, 3])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={1, 2};
	len=2;
	nums=shiftLeft(nums2,len);
	printf("shiftLeft([1, 2])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={1};
	len=1;
	nums=shiftLeft(nums3,len);
	printf("shiftLeft([1])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
