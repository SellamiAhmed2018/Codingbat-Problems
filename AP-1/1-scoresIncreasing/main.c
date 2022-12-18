/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool scoresIncreasing(int scores[], int length) {
	for(int i=1;i<length;i++){
		if(*(scores+i-1)>*(scores+i))
			return false;
	}
	return true;
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={1, 3, 4};
	printf("scoresIncreasing([1, 3, 4])=%s\n",(scoresIncreasing(nums1,3))==0?"false":"true");

	int nums2[]={1, 3, 2};
	printf("scoresIncreasing([1, 3, 2])=%s\n",(scoresIncreasing(nums2,3))==0?"false":"true");

	int nums3[]={1, 1, 4};
	printf("scoresIncreasing([1, 1, 4])=%s\n",(scoresIncreasing(nums3,3))==0?"false":"true");


	return 0;
}
