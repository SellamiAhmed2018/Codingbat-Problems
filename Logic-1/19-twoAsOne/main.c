/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool twoAsOne(int a, int b, int c){
	return (a+b==c||a+c==b||b+c==a);
}

int main(int argc,char** argv){
	// Test Cases
	printf("twoAsOne(1, 2, 3)=%s\n",(twoAsOne(1, 2, 3)==0)?"false":"true");
	printf("twoAsOne(3, 1, 2)=%s\n",(twoAsOne(3, 1, 2)==0)?"false":"true");
	printf("twoAsOne(3, 2, 2)=%s\n",(twoAsOne(3, 2, 2)==0)?"false":"true");
	return 0;
}
