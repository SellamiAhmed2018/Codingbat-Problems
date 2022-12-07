/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type
#include<stdlib.h> // So that we can use the abs()

bool nearHundred(int n) {
	return abs(100-n)<=10 || abs(200-n)<=10; // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("nearHundred(93)=%s\n",(nearHundred(93))==0?"false":"true");
	printf("nearHundred(90)=%s\n",(nearHundred(90))==0?"false":"true");
	printf("nearHundred(89)=%s\n",(nearHundred(89))==0?"false":"true");
	printf("nearHundred(110)=%s\n",(nearHundred(110))==0?"false":"true");
	printf("nearHundred(111)=%s\n",(nearHundred(111))==0?"false":"true");
	printf("nearHundred(121)=%s\n",(nearHundred(121))==0?"false":"true");
	printf("nearHundred(-101)=%s\n",(nearHundred(-101))==0?"false":"true");
	printf("nearHundred(-209)=%s\n",(nearHundred(-209))==0?"false":"true");
	printf("nearHundred(190)=%s\n",(nearHundred(190))==0?"false":"true");
	printf("nearHundred(209)=%s\n",(nearHundred(209))==0?"false":"true");
	printf("nearHundred(0)=%s\n",(nearHundred(0))==0?"false":"true");
	printf("nearHundred(5)=%s\n",(nearHundred(5))==0?"false":"true");
	printf("nearHundred(-50)=%s\n",(nearHundred(-50))==0?"false":"true");
	printf("nearHundred(191)=%s\n",(nearHundred(191))==0?"false":"true");
	printf("nearHundred(189)=%s\n",(nearHundred(189))==0?"false":"true");
	printf("nearHundred(200)=%s\n",(nearHundred(200))==0?"false":"true");
	printf("nearHundred(210)=%s\n",(nearHundred(210))==0?"false":"true");
	printf("nearHundred(211)=%s\n",(nearHundred(211))==0?"false":"true");
	printf("nearHundred(290)=%s\n",(nearHundred(290))==0?"false":"true");
	return 0;
}
