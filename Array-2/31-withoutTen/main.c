/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* withoutTen(int nums[], int len){
	int* res=(int*)malloc(len*sizeof(int));
	int current=-1,temp;
	for(int i=0;i<len;i++)
		*(res+i)=*(nums+i);
	for(int i=0;i<len;i++){
		if(*(res+i)==10){
			*(res+i)=0;
			if(current==-1)
				current=i;
		}else if(current!=-1){
			temp=*(res+current);
			*(res+current)=*(res+i);
			*(res+i)=temp;
			current++;
		}
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len;

	int nums1[]={1, 10, 10, 2};
	len=4;
	nums=withoutTen(nums1,len);
	printf("withoutTen([1, 10, 10, 2])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={10, 2, 10};
	len=3;
	nums=withoutTen(nums2,len);
	printf("withoutTen([10, 2, 10])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={1, 99, 10};
	len=3;
	nums=withoutTen(nums3,len);
	printf("withoutTen([1, 99, 10])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
