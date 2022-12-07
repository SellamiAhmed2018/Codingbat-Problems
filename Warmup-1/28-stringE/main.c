/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool stringE(char* str) {
	int count=0;
	for(int i=0;i<strlen(str);i++)
		count+=(*(str+i)=='e')?1:0; // could be done with 'if' instead
	return count>=1&&count<=3; // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("stringE(\"Hello\")=%s\n",(stringE("Hello"))==0?"false":"true");
	printf("stringE(\"Heelle\")=%s\n",(stringE("Heelle")==0)?"false":"true");
	printf("stringE(\"Heelele\")=%s\n",(stringE("Heelele")==0)?"false":"true");
	printf("stringE(\"Hll\")=%s\n",(stringE("Hll")==0)?"false":"true");
	printf("stringE(\"e\")=%s\n",(stringE("e")==0)?"false":"true");
	printf("stringE(\"\")=%s\n",(stringE("")==0)?"false":"true");
	return 0;
}
