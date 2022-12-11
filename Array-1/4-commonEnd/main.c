/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool commonEnd(int a[] , int b[], int lengthA, int lengthB) {
	return (*a==*b||*(a+lengthA-1)==*(b+lengthB-1));
}

int main(int argc,char** argv){
	// Test Cases
	int a1[]={1, 2, 3},b1[]={7, 3};
	printf("commonEnd([1, 2, 3],[7, 3])=%s\n",(commonEnd(a1,b1,3,2))==0?"false":"true");
	int a2[]={1, 2, 3},b2[]={7, 3, 2};
	printf("commonEnd([1, 2, 3],[7, 3, 2])=%s\n",(commonEnd(a2,b2,3,3))==0?"false":"true");
	int a3[]={1, 2, 3},b3[]={1, 3};
	printf("commonEnd([1, 2, 3],[1, 3])=%s\n",(commonEnd(a3,b3,3,2))==0?"false":"true");

	return 0;
}
