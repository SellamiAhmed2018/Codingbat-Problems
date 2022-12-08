/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++)
		*(res+i-start)=*(str+i);
	*(res+end-start)='\0';
	return res;
}

char* middleTwo(char* str) {
	return substring(str,strlen(str)/2-1,strlen(str)/2+1);
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=middleTwo("string");
	printf("middleTwo(\"string\")=%s\n",result);
	free(result);

	result=middleTwo("code");
	printf("middleTwo(\"code\")=%s\n",result);
	free(result);

	result=middleTwo("Practice");
	printf("middleTwo(\"Practice\")=%s\n",result);
	free(result);

	return 0;
}
