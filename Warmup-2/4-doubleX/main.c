/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool doubleX(char* str) {
	for(int i=0;i<strlen(str)-1;i++){
		if(*(str+i)=='x')
			return *(str+i+1)=='x';
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	printf("doubleX(\"axxbb\")=%s\n",(doubleX("axxbb"))==0?"false":"true");
	printf("doubleX(\"axaxax\")=%s\n",(doubleX("axaxax"))==0?"false":"true");
	printf("doubleX(\"xxxxx\")=%s\n",(doubleX("xxxxx"))==0?"false":"true");
	printf("doubleX(\"xaxxx\")=%s\n",(doubleX("xaxxx"))==0?"false":"true");
	printf("doubleX(\"aaaax\")=%s\n",(doubleX("aaaax"))==0?"false":"true");
	printf("doubleX(\"\")=%s\n",(doubleX(""))==0?"false":"true");
	printf("doubleX(\"abc\")=%s\n",(doubleX("abc"))==0?"false":"true");
	printf("doubleX(\"x\")=%s\n",(doubleX("x"))==0?"false":"true");
	printf("doubleX(\"xx\")=%s\n",(doubleX("xx"))==0?"false":"true");
	printf("doubleX(\"xax\")=%s\n",(doubleX("xax"))==0?"false":"true");
	printf("doubleX(\"xaxx\")=%s\n",(doubleX("xaxx"))==0?"false":"true");

	return 0;
}
