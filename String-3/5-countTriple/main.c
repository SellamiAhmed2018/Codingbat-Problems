/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int countTriple(char* str) {
	int res=0;
	for(int i=0;(strlen(str)>=3&&i<strlen(str)-2);i++){
		res+=(*(str+i)==*(str+i+1)&&*(str+i)==*(str+i+2))?1:0;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases

	printf("countTriple(\"abcXXXabc\")=%d\n",countTriple("abcXXXabc"));
	printf("countTriple(\"xxxabyyyycd\")=%d\n",countTriple("xxxabyyyycd"));
	printf("countTriple(\"a\")=%d\n",countTriple("a"));

	return 0;
}
