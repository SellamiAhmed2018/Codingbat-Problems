/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* tenRun(int nums[], int len){
	int* res=(int*)malloc(len*sizeof(int));
	int current=-1;
	for(int i=0;i<len;i++){
		current=*(nums+i)%10==0?*(nums+i):current;
		*(res+i)=current==-1?*(nums+i):current;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len;

	int nums1[]={2, 10, 3, 4, 20, 5};
	len=6;
	nums=tenRun(nums1,len);
	printf("tenRun([2, 10, 3, 4, 20, 5])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={10, 1, 20, 2};
	len=4;
	nums=tenRun(nums2,len);
	printf("tenRun([10, 1, 20, 2])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={10, 1, 9, 20};
	len=4;
	nums=tenRun(nums3,len);
	printf("tenRun([10, 1, 9, 20])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
