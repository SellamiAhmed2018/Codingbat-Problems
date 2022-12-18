/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

int sumHeights2(int heights[], int start, int end, int length) {
	int res=0;
	for(int i=start;i<end;i++){
		res+=*(heights+i+1)>*(heights+i)?2*(*(heights+i+1)-*(heights+i)):*(heights+i)-*(heights+i+1);
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases

	int heights1[]={5, 3, 6, 7, 2};
	printf("sumHeights2([5, 3, 6, 7, 2],2,4)=%d\n",sumHeights2(heights1,2,4,5));
	
	int heights2[]={5, 3, 6, 7, 2};
	printf("sumHeights2([5, 3, 6, 7, 2],0,1)=%d\n",sumHeights2(heights2,0,1,5));
	
	int heights3[]={5, 3, 6, 7, 2};
	printf("sumHeights2([5, 3, 6, 7, 2],0, 4)=%d\n",sumHeights2(heights3,0, 4,5));
	
	return 0;
}
