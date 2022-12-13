/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

bool xyzThere(char* str) {
	if(strlen(str)<3) return false;
	if(*str=='x'&&*(str+1)=='y'&&*(str+2)=='z') return true;
	for(int i=1;i<strlen(str)-2;i++){
		if(*(str+i-1)!='.'&&*(str+i)=='x'&&*(str+i+1)=='y'&&*(str+i+2)=='z')
			return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases

	printf("xyzThere(\"abcxyz\")=%s\n",(xyzThere("abcxyz")==0)?"false":"true");
	printf("xyzThere(\"abc.xyz\")=%s\n",(xyzThere("abc.xyz")==0)?"false":"true");
	printf("xyzThere(\"xyz.abc\")=%s\n",(xyzThere("xyz.abc")==0)?"false":"true");

	return 0;
}
