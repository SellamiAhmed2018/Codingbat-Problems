/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* zeroFront(int nums[], int len){
	int* res=(int*)malloc(len*sizeof(int));
	int current=0,temp;
	for(int i=0;i<len;i++)
		*(res+i)=*(nums+i);
	for(int i=0;i<len;i++){
		if(*(nums+i)==0){
			if(i==current){
				*(res+i)=0;
			}else{
				temp=*(res+current);
				*(res+current)=0;
				*(res+i)=temp;
			}
			current++;
		}
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len;

	int nums1[]={1, 0, 0, 1};
	len=4;
	nums=zeroFront(nums1,len);
	printf("zeroFront([1, 0, 0, 1])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={0, 1, 1, 0, 1};
	len=5;
	nums=zeroFront(nums2,len);
	printf("zeroFront([0, 1, 1, 0, 1])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={1, 0};
	len=2;
	nums=zeroFront(nums3,len);
	printf("zeroFront([1, 0])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
