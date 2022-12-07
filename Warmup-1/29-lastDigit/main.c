/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool lastDigit(int a, int b) {
	return a%10==b%10; // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("lastDigit(7, 17)=%s\n",(lastDigit(7, 17))==0?"false":"true");
	printf("lastDigit(6, 17)=%s\n",(lastDigit(6, 17)==0)?"false":"true");
	printf("lastDigit(3, 113)=%s\n",(lastDigit(3, 113)==0)?"false":"true");
	printf("lastDigit(114, 113)=%s\n",(lastDigit(114, 113)==0)?"false":"true");
	printf("lastDigit(114, 4)=%s\n",(lastDigit(114, 4)==0)?"false":"true");
	printf("lastDigit(10, 0)=%s\n",(lastDigit(10, 0)==0)?"false":"true");
	printf("lastDigit(11, 0)=%s\n",(lastDigit(11, 0)==0)?"false":"true");
	return 0;
}
