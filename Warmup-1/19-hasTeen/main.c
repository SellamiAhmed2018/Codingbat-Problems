/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool hasTeen(int a, int b, int c) {
	return (a>=13&&a<=19)||(b>=13&&b<=19)||(c>=13&&c<=19); // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("hasTeen(13, 20, 10)=%s\n",(hasTeen(13, 20, 10))==0?"false":"true");
	printf("hasTeen(20, 19, 10)=%s\n",(hasTeen(20, 19, 10)==0)?"false":"true");
	printf("hasTeen(20, 10, 13)=%s\n",(hasTeen(20, 10, 13)==0)?"false":"true");
	printf("hasTeen(1, 20, 12)=%s\n",(hasTeen(1, 20, 12)==0)?"false":"true");
	printf("hasTeen(19, 20, 12)=%s\n",(hasTeen(19, 20, 12)==0)?"false":"true");
	printf("hasTeen(12, 20, 19)=%s\n",(hasTeen(12, 20, 19)==0)?"false":"true");
	printf("hasTeen(12, 9, 20)=%s\n",(hasTeen(12, 9, 20)==0)?"false":"true");
	printf("hasTeen(12, 18, 20)=%s\n",(hasTeen(12, 18, 20)==0)?"false":"true");
	printf("hasTeen(14, 2, 20)=%s\n",(hasTeen(14, 2, 20)==0)?"false":"true");
	printf("hasTeen(4, 2, 20)=%s\n",(hasTeen(4, 2, 20)==0)?"false":"true");
	printf("hasTeen(11, 22, 22)=%s\n",(hasTeen(11, 22, 22)==0)?"false":"true");

	return 0;
}
