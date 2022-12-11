/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool lastDigit(int a, int b, int c){
	return (a%10==b%10||a%10==c%10||b%10==c%10);
}

int main(int argc,char** argv){
	// Test Cases
	printf("lastDigit(23, 19, 13)=%s\n",(lastDigit(23, 19, 13)==0)?"false":"true");
	printf("lastDigit(23, 19, 12)=%s\n",(lastDigit(23, 19, 12)==0)?"false":"true");
	printf("lastDigit(23, 19, 3)=%s\n",(lastDigit(23, 19, 3)==0)?"false":"true");
	return 0;
}
