/* © Ahmed Sellami */
#include<stdio.h>

int start1(int a[], int b[], int lengthA, int lengthB) {
	return (lengthA>=1&&lengthB>=1&&*a==1&&*b==1)?2:((lengthA>=1&&*a==1)||(lengthB>=1&&*b==1))?1:0;
}

int main(int argc,char** argv){
	// Test Cases
	int a1[]={1, 2, 3},b1[]={1, 3};
	printf("start1([1, 2, 3], [1, 3])=%d\n",start1(a1,b1,3,2));
	int a2[]={7, 2, 3},b2[]={1};
	printf("start1([7, 2, 3], [1])=%d\n",start1(a2,b2,3,1));
	int a3[]={1, 2};
	printf("start1([1, 2], [])=%d\n",start1(a3,NULL,2,0));

	return 0;
}
