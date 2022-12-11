/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* frontPiece(int a[],int length) {
	int len=length<2?length:2;
	int* nums=(int*)malloc(len*sizeof(int));
	switch(len){
		case 0:break;
		case 1:*nums=*a;break;
		default:*nums=*a;*(nums+1)=*(a+1);break;
	}
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len;

	int a1[]={1, 2, 3};
	len=3;
	nums=frontPiece(a1,len);
	printf("frontPiece([1, 2, 3])=[");
	for(int i=0;i<((len<2)?len:2);i++){
		printf((i==((len<2)?len:2)-1?"%d]\n":"%d,"),*(nums+i));
	}
	free(nums);

	int a2[]={1, 2};
	len=2;
	nums=frontPiece(a2,len);
	printf("frontPiece([1, 2])=[");
	for(int i=0;i<((len<2)?len:2);i++){
		printf((i==((len<2)?len:2)-1?"%d]\n":"%d,"),*(nums+i));
	}
	free(nums);

	int a3[]={1};
	len=1;
	nums=frontPiece(a3,len);
	printf("frontPiece([1])=[");
	for(int i=0;i<((len<2)?len:2);i++){
		printf((i==((len<2)?len:2)-1?"%d]\n":"%d,"),*(nums+i));
	}
	free(nums);


	return 0;
}
