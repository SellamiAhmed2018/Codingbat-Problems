/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool icyHot(int temp1, int temp2) {
	return (temp1<0 && temp2>100)||(temp1>100 && temp2<0); // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("icyHot(120,-1)=%s\n",(icyHot(120,-1))==0?"false":"true");
	printf("icyHot(-1,120)=%s\n",(icyHot(-1,120))==0?"false":"true");
	printf("icyHot(2,120)=%s\n",(icyHot(2,120))==0?"false":"true");
	printf("icyHot(-1,100)=%s\n",(icyHot(-1,100))==0?"false":"true");
	printf("icyHot(-2,-2)=%s\n",(icyHot(-2,-2))==0?"false":"true");
	printf("icyHot(120, 120)=%s\n",(icyHot(120, 120))==0?"false":"true");
	return 0;
}
