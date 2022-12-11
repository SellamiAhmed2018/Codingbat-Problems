/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool inOrder(int a, int b, int c, bool bOk){
	return (bOk&&c>b)||(!bOk&&b>a&&c>b);
}

int main(int argc,char** argv){
	// Test Cases
	printf("inOrder(1, 2, 4, false)=%s\n",(inOrder(1, 2, 4, false)==0)?"false":"true");
	printf("inOrder(1, 2, 1, false)=%s\n",(inOrder(1, 2, 1, false)==0)?"false":"true");
	printf("inOrder(1, 1, 2, true)=%s\n",(inOrder(1, 1, 2, true)==0)?"false":"true");
	return 0;
}
