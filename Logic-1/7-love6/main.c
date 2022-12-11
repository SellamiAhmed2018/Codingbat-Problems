/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool love6(int a, int b){
	return (a==6||b==6||a+b==6||abs(a-b)==6);
}

int main(int argc,char** argv){
	// Test Cases
	printf("love6(6, 4)=%s\n",(love6(6, 4)==0)?"false":"true");
	printf("love6(4, 5)=%s\n",(love6(4, 5)==0)?"false":"true");
	printf("love6(1, 5)=%s\n",(love6(1, 5)==0)?"false":"true");
	return 0;
}
