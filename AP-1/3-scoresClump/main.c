/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool scoresClump(int scores[], int length) {
	for(int i=0;i<length-2;i++){
		if(abs(*(scores+i)-*(scores+i+1))<=2&&abs(*(scores+i)-*(scores+i+2))<=2)
			return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={3, 4, 5};
	printf("scoresClump([3, 4, 5])=%s\n",(scoresClump(nums1,3))==0?"false":"true");

	int nums2[]={3, 4, 6};
	printf("scoresClump([3, 4, 6])=%s\n",(scoresClump(nums2,3))==0?"false":"true");

	int nums3[]={1, 3, 5, 5};
	printf("scoresClump([1, 3, 5, 5])=%s\n",(scoresClump(nums3,4))==0?"false":"true");


	return 0;
}
