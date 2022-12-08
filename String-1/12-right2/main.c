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

char* right2(char* str) {
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	char* sub=substring(str,strlen(str)-2,strlen(str));
	strcpy(res,sub);
	free(sub);
	sub=substring(str,0,strlen(str)-2);
	strcat(res,sub);
	free(sub);
	*(res+strlen(str))='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=right2("Hello");
	printf("right2(\"Hello\")=%s\n",result);
	free(result);

	result=right2("java");
	printf("right2(\"java\")=%s\n",result);
	free(result);

	result=right2("Hi");
	printf("right2(\"Hi\")=%s\n",result);
	free(result);

	return 0;
}
