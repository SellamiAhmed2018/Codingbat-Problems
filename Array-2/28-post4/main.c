/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int indexOfFour(int nums[], int len){
	int index=-1;
	for(int i=0;i<len;i++){
		if(*(nums+i)==4){
			index=i;
		}
	}
	return index;
}

int* post4(int nums[], int len){
	int index=indexOfFour(nums,len),length=len-index-1;
	int* res=(int*)malloc(length*sizeof(int));
	int h=0;
	for(int i=index+1;i<len;i++){
		*(res+h)=*(nums+i);
		h++;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len,length;

	int nums1[]={2, 4, 1, 2};
	len=4;
	length=len-indexOfFour(nums1,len)-1;
	nums=post4(nums1,len);
	printf("post4([2, 4, 1, 2])=[");
	for(int i=0;i<length;i++){
		printf(i==length-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={4, 1, 4, 2};
	len=4;
	length=len-indexOfFour(nums2,len)-1;
	nums=post4(nums2,len);
	printf("post4([4, 1, 4, 2])=[");
	for(int i=0;i<length;i++){
		printf(i==length-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={4, 4, 1, 2, 3};
	len=5;
	length=len-indexOfFour(nums3,len)-1;
	nums=post4(nums3,len);
	printf("post4([4, 4, 1, 2, 3])=[");
	for(int i=0;i<length;i++){
		printf(i==length-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
