/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

bool bobThere(char* str) {
	for(int i=0;i<strlen(str)-2;i++){
		if(*(str+i)=='b'&&*(str+i+2)=='b') return true;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases

	printf("bobThere(\"abcbob\")=%s\n",(bobThere("abcbob")==0)?"false":"true");
	printf("bobThere(\"b9b\")=%s\n",(bobThere("b9b")==0)?"false":"true");
	printf("bobThere(\"bac\")=%s\n",(bobThere("bac")==0)?"false":"true");

	return 0;
}
