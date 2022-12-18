/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

int bigHeights(int heights[], int start, int end, int length) {
	int res=0;
	for(int i=start;i<end;i++){
		res+=abs(*(heights+i+1)-*(heights+i))>=5?1:0;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases

	int heights1[]={5, 3, 6, 7, 2};
	printf("bigHeights([5, 3, 6, 7, 2],2,4)=%d\n",bigHeights(heights1,2,4,5));
	
	int heights2[]={5, 3, 6, 7, 2};
	printf("bigHeights([5, 3, 6, 7, 2],0,1)=%d\n",bigHeights(heights2,0,1,5));
	
	int heights3[]={5, 3, 6, 7, 2};
	printf("bigHeights([5, 3, 6, 7, 2],0, 4)=%d\n",bigHeights(heights3,0, 4,5));
	
	return 0;
}
