/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

bool gHappy(char* str) {
	if(strlen(str)==1 || (strlen(str)>=2&&((*str=='g'&&*(str+1)!='g')||(*(str+strlen(str)-1)=='g'&&*(str+strlen(str)-2)!='g'))))
		return false;
	for(int i=1;i<strlen(str)-1;i++){
		if(*(str+i)=='g'&&*(str+i-1)!='g'&&*(str+i+1)!='g')
			return false;
	}
	return true;
}

int main(int argc,char** argv){
	// Test Cases

	printf("gHappy(\"xxggxx\")=%s\n",(gHappy("xxggxx")==0)?"false":"true");
	printf("gHappy(\"xxgxx\")=%s\n",(gHappy("xxgxx")==0)?"false":"true");
	printf("gHappy(\"xxggyygxx\")=%s\n",(gHappy("xxggyygxx")==0)?"false":"true");

	return 0;
}
