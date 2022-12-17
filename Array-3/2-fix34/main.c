/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* fix34(int nums[], int len){
	int* res=(int*)malloc(len*sizeof(int));
	for(int i=0;i<len;i++)
		*(res+i)=*(nums+i);
	int temp;
	for(int i=0;i<len;i++){
		if(*(res+i)==3&&i!=len-1&&*(res+i+1)!=4){
			for(int j=0;j<len;j++){
				if(*(res+j)==4&&j>0&&*(res+j-1)!=3){
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

	int nums1[]={1, 3, 1, 4};
	len=4;
	nums=fix34(nums1,len);
	printf("fix34([1, 3, 1, 4])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={1, 3, 1, 4, 4, 3, 1};
	len=7;
	nums=fix34(nums2,len);
	printf("fix34([1, 3, 1, 4, 4, 3, 1])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={3, 2, 2, 4};
	len=4;
	nums=fix34(nums3,len);
	printf("fix34([3, 2, 2, 4])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
