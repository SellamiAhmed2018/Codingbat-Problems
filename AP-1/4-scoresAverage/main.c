/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int average(int scores[], int start, int end){
	int res=0;
	for(int i=start;i<end;i++)
		res+=*(scores+i);
	return res/(end-start);
}

int scoresAverage(int scores[], int length) {
	int half1=average(scores,0,length/2),
		half2=average(scores,length/2,length);
	return half1>=half2?half1:half2;
}

int main(int argc,char** argv){
	// Test Cases
	int nums1[]={2, 2, 4, 4};
	printf("scoresAverage([2, 2, 4, 4])=%d\n",scoresAverage(nums1,4));

	int nums2[]={4, 4, 4, 2, 2, 2};
	printf("scoresAverage([4, 4, 4, 2, 2, 2])=%d\n",scoresAverage(nums2,6));

	int nums3[]={3, 4, 5, 1, 2, 3};
	printf("scoresAverage([3, 4, 5, 1, 2, 3])=%d\n",scoresAverage(nums3,6));


	return 0;
}
