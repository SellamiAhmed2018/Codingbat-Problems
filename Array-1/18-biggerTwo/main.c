/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* biggerTwo(int a[], int b[]) {
	int* nums=(int*)malloc(2*sizeof(int));
	int sumA=*a+*(a+1),sumB=*b+*(b+1);
	if(sumA>=sumB){
		*nums=*a;
		*(nums+1)=*(a+1);
	}else{
		*nums=*b;
		*(nums+1)=*(b+1);
	}
	return nums;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;

	int a1[]={1, 2},b1[]={3, 4};
	nums=biggerTwo(a1,b1);
	printf("biggerTwo([1, 2], [3, 4])=[%d,%d]\n",*nums,*(nums+1));
	free(nums);
	
	int a2[]={3, 4},b2[]={1, 2};
	nums=biggerTwo(a2,b2);
	printf("biggerTwo([3, 4], [1, 2])=[%d,%d]\n",*nums,*(nums+1));
	free(nums);

	int a3[]={1, 1},b3[]={1, 2};
	nums=biggerTwo(a3,b3);
	printf("biggerTwo([1, 1], [1, 2])=[%d,%d]\n",*nums,*(nums+1));
	free(nums);

	return 0;
}
