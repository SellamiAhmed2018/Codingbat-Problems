/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool shareDigit(int a, int b){
	return a%10==b%10||a%10==b/10||a/10==b%10||a/10==b/10;
}

int main(int argc,char** argv){
	// Test Cases
	printf("shareDigit(12, 23)=%s\n",(shareDigit(12, 23)==0)?"false":"true");
	printf("shareDigit(12, 43)=%s\n",(shareDigit(12, 43)==0)?"false":"true");
	printf("shareDigit(12, 44)=%s\n",(shareDigit(12, 44)==0)?"false":"true");
	return 0;
}
