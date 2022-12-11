/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* swapEnds(int a[],int length) {
	int* nums=(int*)malloc(length*sizeof(int));
	*nums=*(a+length-1);
	*(nums+length-1)=*a;
	for(int i=1;i<length-1;i++)
		*(nums+i)=*(a+i);
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len;

	int a1[]={1, 2, 3, 4};
	len=4;
	nums=swapEnds(a1,len);
	printf("swapEnds([1, 2, 3, 4])=[");
	for(int i=0;i<len;i++){
		printf((i==len-1?"%d]\n":"%d,"),*(nums+i));
	}
	free(nums);

	int a2[]={1, 2, 3};
	len=3;
	nums=swapEnds(a2,len);
	printf("swapEnds([1, 2, 3])=[");
	for(int i=0;i<len;i++){
		printf((i==len-1?"%d]\n":"%d,"),*(nums+i));
	}
	free(nums);

	int a3[]={8, 6, 7, 9, 5};
	len=5;
	nums=swapEnds(a3,len);
	printf("swapEnds([8, 6, 7, 9, 5])=[");
	for(int i=0;i<len;i++){
		printf((i==len-1?"%d]\n":"%d,"),*(nums+i));
	}
	free(nums);

	int a4[]={1};
	len=1;
	nums=swapEnds(a4,len);
	printf("swapEnds([1])=[");
	for(int i=0;i<len;i++){
		printf((i==len-1?"%d]\n":"%d,"),*(nums+i));
	}
	free(nums);

	int a5[]={1, 2};
	len=2;
	nums=swapEnds(a5,len);
	printf("swapEnds([1, 2])=[");
	for(int i=0;i<len;i++){
		printf((i==len-1?"%d]\n":"%d,"),*(nums+i));
	}
	free(nums);
	
	return 0;
}
