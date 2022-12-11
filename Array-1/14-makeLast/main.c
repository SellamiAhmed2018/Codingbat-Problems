/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* makeLast(int nums[], int length) {
	int* res=(int*)malloc(2*length*sizeof(int));
	int i;
	for(i=0;i<(2*length)-1;i++)
		*(res+i)=0;
	*(res+i)=*(nums+length-1);
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len;

	int a1[]={4, 5, 6};
	len=3;
	nums=makeLast(a1,len);
	printf("makeLast([4, 5, 6])=[");
	for(int i=0;i<2*len;i++){
		printf((i==2*len-1?"%d]\n":"%d,"),*(nums+i));
	}
	free(nums);

	int a2[]={1, 2};
	len=2;
	nums=makeLast(a2,len);
	printf("makeLast([1, 2])=[");
	for(int i=0;i<2*len;i++){
		printf((i==2*len-1?"%d]\n":"%d,"),*(nums+i));
	}
	free(nums);

	int a3[]={3};
	len=1;
	nums=makeLast(a3,len);
	printf("makeLast([3])=[");
	for(int i=0;i<2*len;i++){
		printf((i==2*len-1?"%d]\n":"%d,"),*(nums+i));
	}
	free(nums);


	return 0;
}
