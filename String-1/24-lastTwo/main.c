/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* lastTwo(char* str) {
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	strcpy(res,str);
	if(strlen(str)>=2){
		char temp=*(res+strlen(str)-1);
		*(res+strlen(str)-1)=*(res+strlen(res)-2);
		*(res+strlen(res)-2)=temp;
	}
	*(res+strlen(str))='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=lastTwo("coding");
	printf("lastTwo(\"coding\")=%s\n",result);
	free(result);

	result=lastTwo("cat");
	printf("lastTwo(\"cat\")=%s\n",result);
	free(result);

	result=lastTwo("ab");
	printf("lastTwo(\"ab\")=%s\n",result);
	free(result);

	result=lastTwo("");
	printf("lastTwo(\"\")=%s\n",result);
	free(result);
	
	return 0;
}
