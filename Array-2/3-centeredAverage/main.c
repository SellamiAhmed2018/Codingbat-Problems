/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

int centeredAverage(int nums[],int len) {
	int min=*nums,max=*nums;
	for(int i=0;i<len;i++){
		min=*(nums+i)<min?*(nums+i):min;
		max=*(nums+i)>max?*(nums+i):max;
	}
	int res=0,h=0;
	bool maxIgnore=true,minIgnore=true;
	for(int i=0;i<len;i++){
		if(*(nums+i)==max){
			if(maxIgnore)
				maxIgnore=false;
			else{
				res+=max;
				h++;
			}
		}
		else if(*(nums+i)==min){
			if(minIgnore)
				minIgnore=false;
			else{
				res+=min;
				h++;
			}
		}else{
			res+=*(nums+i);
			h++;
		}
	}
	return (h!=0)?res/h:0;
}

int main(int argc,char** argv){
	// Test Cases
	int len;

	int nums1[]={1, 2, 3, 4, 100};
	len=5;
	printf("centeredAverage([1, 2, 3, 4, 100])=%d\n",centeredAverage(nums1,len));
	int nums2[]={1, 1, 5, 5, 10, 8, 7};
	len=7;
	printf("centeredAverage([1, 1, 5, 5, 10, 8, 7])=%d\n",centeredAverage(nums2,len));
	int nums3[]={-10, -4, -2, -4, -2, 0};
	len=6;
	printf("centeredAverage([-10, -4, -2, -4, -2, 0])=%d\n",centeredAverage(nums3,len));

	return 0;
}
