/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* notAlone(int nums[], int len, int val){
	int* res=(int*)malloc(len*sizeof(int));
	for(int i=0;i<len;i++){
		if(i!=0&&i!=len-1&&*(nums+i)==val&&*(nums+i-1)!=val&&*(nums+i+1)!=val){
			*(res+i)=*(nums+i-1)>*(nums+i+1)?*(nums+i-1):*(nums+i+1);
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

	int nums1[]={1, 2, 3};
	len=3;
	nums=notAlone(nums1,len,2);
	printf("notAlone([1, 2, 3], 2)=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={1, 2, 3, 2, 5, 2};
	len=6;
	nums=notAlone(nums2,len,2);
	printf("notAlone([1, 2, 3, 2, 5, 2], 2)=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={3, 4};
	len=2;
	nums=notAlone(nums3,len,3);
	printf("notAlone([3, 4], 3)=[");
	for(int i=0;i<len;i++){
		printf(i==len-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
