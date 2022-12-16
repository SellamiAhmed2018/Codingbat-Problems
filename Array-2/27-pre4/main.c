/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int indexOfFour(int nums[], int len){
	int index=-1;
	for(int i=0;i<len;i++){
		if(*(nums+i)==4){
			index=i;
			break;
		}
	}
	return index;
}

int* pre4(int nums[], int len){
	int length=indexOfFour(nums,len);
	length=(length==-1)?0:length;
	int* res=(int*)malloc(length*sizeof(int));
	for(int i=0;i<length;i++){
		*(res+i)=*(nums+i);
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len,length;

	int nums1[]={1, 2, 4, 1};
	len=4;
	length=indexOfFour(nums1,len);
	nums=pre4(nums1,len);
	printf("pre4([1, 2, 4, 1])=[");
	for(int i=0;i<length;i++){
		printf(i==length-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={3, 1, 4};
	len=3;
	length=indexOfFour(nums2,len);
	nums=pre4(nums2,len);
	printf("pre4([3, 1, 4])=[");
	for(int i=0;i<length;i++){
		printf(i==length-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={1, 4, 4};
	len=3;
	length=indexOfFour(nums3,len);
	nums=pre4(nums3,len);
	printf("pre4([1, 4, 4])=[");
	for(int i=0;i<length;i++){
		printf(i==length-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
