/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>

int* fix23(int nums[]) {
	int* res=(int*)malloc(3*sizeof(int));
	if(*nums==2&&*(nums+1)==3){
		*res=2;
		*(res+1)=0;
		*(res+2)=*(nums+2);
	}else if(*(nums+1)==2&&*(nums+2)==3){
		*res=*nums;
		*(res+1)=2;
		*(res+2)=0;
	}else{
		*res=*nums;
		*(res+1)=*(nums+1);
		*(res+2)=*(nums+2);
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;

	int a1[]={1, 2, 3};
	nums=fix23(a1);
	printf("fix23([1, 2, 3])=[%d,%d,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);

	int a2[]={2, 3, 5};
	nums=fix23(a2);
	printf("fix23([2, 3, 5])=[%d,%d,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);

	int a3[]={1, 2, 1};
	nums=fix23(a3);
	printf("fix23([1, 2, 1])=[%d,%d,%d]\n",*nums,*(nums+1),*(nums+2));
	free(nums);

	return 0;
}
