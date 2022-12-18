/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void help(char* str,int* index){
	if(*(str+*index)=='('&&*(str+strlen(str)-*index-1)==')'){
		*index+=1;
		help(str,index);
	}else
		return;
}

bool nestParen(char* str) {
	int index=0;
	help(str,&index);
	return index>=strlen(str)/2;
}

int main(int argc,char** argv){
	// Test Cases
	printf("nestParen(\"(())\")=%s\n",(nestParen("(())"))==0?"false":"true");
	printf("nestParen(\"((()))\")=%s\n",(nestParen("((()))"))==0?"false":"true");
	printf("nestParen(\"(((x))\")=%s\n",(nestParen("(((x))"))==0?"false":"true");

	return 0;
}
