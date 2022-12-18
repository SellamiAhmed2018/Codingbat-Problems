/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool groupSumClump(int start, int nums[], int target,int length) {
	if(start>=length) return target==0;
	int prod=1,current=*(nums+start);
	for(int i=start+1;i<length;i++){
		if(*(nums+i)!=current)
			break;
		prod++;
	}
	current*=prod;
	return groupSumClump(start+prod,nums,target-current,length)||groupSumClump(start+prod,nums,target,length);
}
int main(int argc,char** argv){
	// Test Cases
	int nums1[]={2, 4, 8};
	printf("groupSumClump(0, [2, 4, 8], 10)=%s\n",(groupSumClump(0,nums1,10,3))==0?"false":"true");

	int nums2[]={1, 2, 4, 8, 1};
	printf("groupSumClump(0, [1, 2, 4, 8, 1], 14)=%s\n",(groupSumClump(0,nums2,14,5))==0?"false":"true");

	int nums3[]={2, 4, 4, 8};
	printf("groupSumClump(0, [2, 4, 4, 8], 14)=%s\n",(groupSumClump(0,nums3,14,4))==0?"false":"true");

	return 0;
}
