/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

bool xyBalance(char* str) {
	bool res=true;
	for(int i=0;i<strlen(str);i++)
		res=*(str+i)=='x'&&res?false:*(str+i)=='y'&&!res?true:res;
	return res;
}

int main(int argc,char** argv){
	// Test Cases

	printf("xyBalance(\"aaxbby\")=%s\n",(xyBalance("aaxbby")==0)?"false":"true");
	printf("xyBalance(\"aaxbb\")=%s\n",(xyBalance("aaxbb")==0)?"false":"true");
	printf("xyBalance(\"yaaxbb\")=%s\n",(xyBalance("yaaxbb")==0)?"false":"true");

	return 0;
}
