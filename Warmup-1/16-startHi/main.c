/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool startHi(char* str) {
	return (strlen(str)>=2 && *str=='h' && *(str+1)=='i'); // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("startHi(\"hi there\")=%s\n",(startHi("hi there"))==0?"false":"true");
	printf("startHi(\"hi\")=%s\n",(startHi("hi"))==0?"false":"true");
	printf("startHi(\"hello hi\")=%s\n",(startHi("hello hi"))==0?"false":"true");
	printf("startHi(\"he\")=%s\n",(startHi("he"))==0?"false":"true");
	printf("startHi(\"h\")=%s\n",(startHi("h"))==0?"false":"true");
	printf("startHi(\"\")=%s\n",(startHi(""))==0?"false":"true");
	printf("startHi(\"ho hi\")=%s\n",(startHi("ho hi"))==0?"false":"true");
	printf("startHi(\"hi ho\")=%s\n",(startHi("hi ho"))==0?"false":"true");
	return 0;
}
