/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* front11(int a[], int b[], int lengthA , int lengthB) {
	int len=(lengthA==0&&lengthB==0)?0:(lengthA==0||lengthB==0)?1:2;
	int* nums=(int*)malloc(len*sizeof(int));
	if(len==1)
		*nums=(lengthA==0)?*b:*a;
	else if(len==2){
		*nums=*a;
		*(nums+1)=*b;
	}
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int len,lenA,lenB;

	int a1[]={1, 2, 3},b1[]={7, 9, 8};
	lenA=3;
	lenB=3;
	nums=front11(a1,b1,lenA,lenB);
	len=(lenA==0&&lenB==0)?0:(lenA==0||lenB==0)?1:2;
	printf("front11([1, 2, 3], [7, 9, 8])=[");
	for(int i=0;i<len;i++)
		printf((i==len-1?"%d":"%d,"),*(nums+i));
	printf("]\n");
	free(nums);

	int a2[]={1},b2[]={2};
	lenA=1;
	lenB=1;
	nums=front11(a2,b2,lenA,lenB);
	len=(lenA==0&&lenB==0)?0:(lenA==0||lenB==0)?1:2;
	printf("front11([1], [2])=[");
	for(int i=0;i<len;i++)
		printf((i==len-1?"%d":"%d,"),*(nums+i));
	printf("]\n");
	free(nums);

	int a3[]={1, 7};
	lenA=1;
	lenB=0;
	nums=front11(a3,NULL,lenA,lenB);
	len=(lenA==0&&lenB==0)?0:(lenA==0||lenB==0)?1:2;
	printf("front11([1, 7], [])=[");
	for(int i=0;i<len;i++)
		printf((i==len-1?"%d":"%d,"),*(nums+i));
	printf("]\n");
	free(nums);

	return 0;
}
