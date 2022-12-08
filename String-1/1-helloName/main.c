/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* helloName(char* str) {
	char* res=(char*)malloc((strlen(str)+8)*sizeof(char));
	strcpy(res,"Hello ");
	strcat(res,str);
	*(res+strlen(str)+6)='!';
	*(res+strlen(str)+7)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=helloName("Bob");
	printf("helloName(\"Bob\")=%s\n",result);
	free(result);

	result=helloName("Alice");
	printf("helloName(\"Alice\")=%s\n",result);
	free(result);

	result=helloName("X");
	printf("helloName(\"X\")=%s\n",result);
	free(result);

	return 0;
}
