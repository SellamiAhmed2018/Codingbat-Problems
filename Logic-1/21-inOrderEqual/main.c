/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool inOrderEqual(int a, int b, int c, bool equalOk){
	return (equalOk&&a<=b&&b<=c)||(!equalOk&&a<b&&b<c);
}

int main(int argc,char** argv){
	// Test Cases
	printf("inOrderEqual(2, 5, 11, false)=%s\n",(inOrderEqual(2, 5, 11, false)==0)?"false":"true");
	printf("inOrderEqual(5, 7, 6, false)=%s\n",(inOrderEqual(5, 7, 6, false)==0)?"false":"true");
	printf("inOrderEqual(5, 5, 7, true)=%s\n",(inOrderEqual(5, 5, 7, true)==0)?"false":"true");
	return 0;
}
