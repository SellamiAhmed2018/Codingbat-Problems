/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* makeEnds(int nums[], int length) {
	int* res=(int*)malloc(2*sizeof(int));
	*res=*a;
	*(res+1)=*(a+length-1);
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;

	int a1[]={1, 2, 3};
	nums=makeEnds(a1,3);
	printf("makeEnds([1, 2, 3])=[%d,%d]\n",*nums,*(nums+1));
	free(nums);

	int a2[]={1, 2, 3, 4};
	nums=makeEnds(a2,4);
	printf("makeEnds([1, 2, 3, 4])=[%d,%d]\n",*nums,*(nums+1));
	free(nums);

	int a3[]={7, 4, 6, 2};
	nums=makeEnds(a3,4);
	printf("makeEnds([7, 4, 6, 2])=[%d,%d]\n",*nums,*(nums+1));
	free(nums);

	return 0;
}
