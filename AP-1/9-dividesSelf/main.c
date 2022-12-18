/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool dividesSelf(int n) {
	int copy=n;
	while(n!=0){
		if(n%10==0||copy%(n%10)!=0)
			return false;
		n/=10;
	}
	return true;
}

int main(int argc,char** argv){
	// Test Cases
	printf("dividesSelf(128)=%s\n",(dividesSelf(128))==0?"false":"true");
	printf("dividesSelf(12)=%s\n",(dividesSelf(12))==0?"false":"true");
	printf("dividesSelf(120)=%s\n",(dividesSelf(120))==0?"false":"true");

	return 0;
}
