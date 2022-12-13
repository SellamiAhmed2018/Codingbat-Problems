/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int countCode(char* str) {
	int res=0;
	for(int i=0;i<strlen(str)-3;i++){
		res+=(*(str+i)=='c'&&*(str+i+1)=='o'&&*(str+i+3)=='e')?1:0;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases

	printf("countCode(\"aaacodebbb\")=%d\n",countCode("aaacodebbb"));
	printf("countCode(\"codexxcode\")=%d\n",countCode("codexxcode"));
	printf("countCode(\"cozexxcope\")=%d\n",countCode("cozexxcope"));

	return 0;
}
