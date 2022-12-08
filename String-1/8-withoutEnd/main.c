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

char* withoutEnd(char* str) {
	return substring(str,1,strlen(str)-1);
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=withoutEnd("Hello");
	printf("withoutEnd(\"Hello\")=%s\n",result);
	free(result);

	result=withoutEnd("java");
	printf("withoutEnd(\"java\")=%s\n",result);
	free(result);

	result=withoutEnd("coding");
	printf("withoutEnd(\"coding\")=%s\n",result);
	free(result);

	return 0;
}
