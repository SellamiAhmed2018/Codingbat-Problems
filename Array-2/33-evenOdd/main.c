/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* evenOdd(int nums[], int len){
	int* res=(int*)malloc(len*sizeof(int));
	int current=-1,temp;
	for(int i=0;i<len;i++)
		*(res+i)=*(nums+i);
	for(int i=0;i<len;i++){
		if(*(res+i)%2!=0){
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

	int nums1[]={1, 0, 1, 0, 0, 1, 1};
	len=7;
	nums=evenOdd(nums1,len);
	printf("evenOdd([1, 0, 1, 0, 0, 1, 1])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={3, 3, 2};
	len=3;
	nums=evenOdd(nums2,len);
	printf("evenOdd([3, 3, 2])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={2, 2, 2};
	len=3;
	nums=evenOdd(nums3,len);
	printf("evenOdd([2, 2, 2])=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
