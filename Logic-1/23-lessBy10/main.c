/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool lessBy10(int a, int b, int c){
	return (a+10<=b||a+10<=c||b+10<=a||b+10<=c||c+10<=a||c+10<=b);
}

int main(int argc,char** argv){
	// Test Cases
	printf("lessBy10(1, 7, 11)=%s\n",(lessBy10(1, 7, 11)==0)?"false":"true");
	printf("lessBy10(1, 7, 10)=%s\n",(lessBy10(1, 7, 10)==0)?"false":"true");
	printf("lessBy10(11, 1, 7)=%s\n",(lessBy10(11, 1, 7)==0)?"false":"true");
	return 0;
}
