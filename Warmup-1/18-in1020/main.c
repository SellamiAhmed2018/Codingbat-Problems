/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool in1020(int a, int b) {
	return ((a>=10&&a<=20) || (b>=10&&b<=20)); // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("in1020(12, 99)=%s\n",(in1020(12, 99))==0?"false":"true");
	printf("in1020(21, 12)=%s\n",(in1020(21, 12)==0)?"false":"true");
	printf("in1020(8, 99)=%s\n",(in1020(8, 99)==0)?"false":"true");
	printf("in1020(99, 10)=%s\n",(in1020(99, 10)==0)?"false":"true");
	printf("in1020(20, 20)=%s\n",(in1020(20, 20)==0)?"false":"true");
	printf("in1020(21, 21)=%s\n",(in1020(21, 21)==0)?"false":"true");
	printf("in1020(9, 9)=%s\n",(in1020(9, 9)==0)?"false":"true");
	return 0;
}
