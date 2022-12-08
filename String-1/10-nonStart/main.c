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

char* nonStart(char* a, char* b) {
	char* res=(char*)malloc((strlen(a)+strlen(b)-1)*sizeof(char));
	char* sub=substring(a,1,strlen(a));
	strcpy(res,sub);
	free(sub);
	sub=substring(b,1,strlen(b));
	strcat(res,sub);
	free(sub);
	*(res+strlen(a)+strlen(b)-2)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=nonStart("Hello", "There");
	printf("nonStart(\"Hello\", \"There\")=%s\n",result);
	free(result);

	result=nonStart("java", "code");
	printf("nonStart(\"java\", \"code\")=%s\n",result);
	free(result);

	result=nonStart("shotl", "java");
	printf("nonStart(\"shotl\", \"java\")=%s\n",result);
	free(result);

	return 0;
}
