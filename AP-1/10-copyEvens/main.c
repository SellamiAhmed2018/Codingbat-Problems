/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int* copyEvens(int nums[], int count) {
	int* res=(int*)malloc(count*sizeof(int));
	int i=0,h=0;	
	while(count!=0){
		if(*(nums+i)%2==0){
			*(res+h)=*(nums+i);
			h++;
			count--;
		}
		i++;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int count;
	int* nums;

	int nums1[]={3, 2, 4, 5, 8};
	count=2;
	nums=copyEvens(nums1,count);

	printf("copyEvens([3, 2, 4, 5, 8], 2)=[");
	for(int i=0;i<count;i++){
		printf((i!=count-1?"%d,":"%d"),*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={3, 2, 4, 5, 8};
	count=3;
	nums=copyEvens(nums2,count);

	printf("copyEvens([3, 2, 4, 5, 8], 3)=[");
	for(int i=0;i<count;i++){
		printf((i!=count-1?"%d,":"%d"),*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={6, 1, 2, 4, 5, 8};
	count=3;
	nums=copyEvens(nums3,count);

	printf("copyEvens([6, 1, 2, 4, 5, 8], 3)=[");
	for(int i=0;i<count;i++){
		printf((i!=count-1?"%d,":"%d"),*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
