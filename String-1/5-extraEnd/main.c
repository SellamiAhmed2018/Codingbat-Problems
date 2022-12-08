/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* extraEnd(char* str) {
	char* res=(char*)malloc(7*sizeof(char));
	char last[3]={*(str+strlen(str)-2),*(str+strlen(str)-1),'\0'};
	strcpy(res,last);
	strcat(res,last);
	strcat(res,last);
	*(res+6)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=extraEnd("Hello");
	printf("extraEnd(\"Hello\")=%s\n",result);
	free(result);

	result=extraEnd("ab");
	printf("extraEnd(\"ab\")=%s\n",result);
	free(result);

	result=extraEnd("Hi");
	printf("extraEnd(\"Hi\")=%s\n",result);
	free(result);

	return 0;
}
