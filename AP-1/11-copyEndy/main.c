/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int* copyEndy(int nums[], int count) {
	int* res=(int*)malloc(count*sizeof(int));
	int i=0,h=0;	
	while(count!=0){
		if((*(nums+i)>=0&&*(nums+i)<=10)||(*(nums+i)>=90&&*(nums+i)<=100)){
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

	int nums1[]={9, 11, 90, 22, 6};
	count=2;
	nums=copyEndy(nums1,count);

	printf("copyEndy([9, 11, 90, 22, 6], 2)=[");
	for(int i=0;i<count;i++){
		printf((i!=count-1?"%d,":"%d"),*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums2[]={9, 11, 90, 22, 6};
	count=3;
	nums=copyEndy(nums2,count);

	printf("copyEndy([9, 11, 90, 22, 6], 3)=[");
	for(int i=0;i<count;i++){
		printf((i!=count-1?"%d,":"%d"),*(nums+i));
	}
	printf("]\n");
	free(nums);

	int nums3[]={12, 1, 1, 13, 0, 20};
	count=2;
	nums=copyEndy(nums3,count);

	printf("copyEndy([12, 1, 1, 13, 0, 20], 3)=[");
	for(int i=0;i<count;i++){
		printf((i!=count-1?"%d,":"%d"),*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
