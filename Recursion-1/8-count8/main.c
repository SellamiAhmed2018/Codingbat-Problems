/* © Ahmed Sellami */
#include<stdio.h>

int count8(int n){
	return n==0?0:n%100==88?2+count8(n/10):n%10==8?1+count8(n/10):count8(n/10);
}

int main(int argc,char** argv){
	// Test Cases
	printf("count8(8)=%d\n",count8(8));
	printf("count8(818)=%d\n",count8(818));
	printf("count8(8818)=%d\n",count8(8818));
	return 0;
}
