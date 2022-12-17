/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* fix45(int nums[], int len){
	int* res=(int*)malloc(len*sizeof(int));
	for(int i=0;i<len;i++)
		*(res+i)=*(nums+i);
	int temp;
	for(int i=0;i<len;i++){
		if(*(res+i)==4&&i!=len-1&&*(res+i+1)!=5){
			for(int j=0;j<len;j++){
				if(*(res+j)==5&&((j>0&&*(res+j-1)!=4)||j==0)){
					temp=*(res+j);
					*(res+j)=*(res+i+1);
					*(res+i+1)=temp;
					break;
				}
			}
		}
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len;

	int nums1[]={5, 4, 9, 4, 9, 5};
	len=6;
	nums=fix45(nums1,len);
	printf("fix45([5, 4, 9, 4, 9, 5])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={1, 4, 1, 5};
	len=4;
	nums=fix45(nums2,len);
	printf("fix45([1, 4, 1, 5])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={1, 4, 1, 5, 5, 4, 1};
	len=7;
	nums=fix45(nums3,len);
	printf("fix45([1, 4, 1, 5, 5, 4, 1])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
