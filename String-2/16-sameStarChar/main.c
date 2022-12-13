/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

bool sameStarChar(char* str) {
	for(int i=1;i<strlen(str)-1;i++){
		if(*(str+i)=='*'&&(*(str+i-1)!=*(str+i+1)))
			return false;
	}
	return true;
}

int main(int argc,char** argv){
	// Test Cases

	printf("sameStarChar(\"xy*yzz\")=%s\n",(sameStarChar("xy*yzz")==0)?"false":"true");
	printf("sameStarChar(\"xy*zzz\")=%s\n",(sameStarChar("xy*zzz")==0)?"false":"true");
	printf("sameStarChar(\"*xa*az\")=%s\n",(sameStarChar("*xa*az")==0)?"false":"true");

	return 0;
}
