/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool in1To10(int n, bool outsideMode){
	return n==1||n==10||(n>1&&n<10)^outsideMode;
}

int main(int argc,char** argv){
	// Test Cases
	printf("in1To10(5, false)=%s\n",(in1To10(5, false)==0)?"false":"true");
	printf("in1To10(11, false)=%s\n",(in1To10(11, false)==0)?"false":"true");
	printf("in1To10(11, true)=%s\n",(in1To10(11, true)==0)?"false":"true");
	return 0;
}
