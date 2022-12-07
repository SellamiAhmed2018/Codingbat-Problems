/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* frontBack(char* str) {
	char* res;
	res=(char*)malloc((strlen(str)+1)*sizeof(char));
	strcpy(res,str);
	if(strlen(str)>1){
		*res=*(str+strlen(str)-1);
		*(res+strlen(str)-1)=*str;
	}
	*(res+strlen(str))='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=frontBack("code");
	printf("frontBack(\"code\")=%s\n",result);
	free(result);

	result=frontBack("a");
	printf("frontBack(\"a\")=%s\n",result);
	free(result);

	result=frontBack("ab");
	printf("frontBack(\"ab\")=%s\n",result);
	free(result);

	result=frontBack("abc");
	printf("frontBack(\"abc\")=%s\n",result);
	free(result);

	result=frontBack("");
	printf("frontBack(\"\")=%s\n",result);
	free(result);

	result=frontBack("Chocolate");
	printf("frontBack(\"Chocolate\")=%s\n",result);
	free(result);

	result=frontBack("aavJ");
	printf("frontBack(\"aavJ\")=%s\n",result);
	free(result);

	result=frontBack("hello");
	printf("frontBack(\"hello\")=%s\n",result);
	free(result);
	
	return 0;
}
