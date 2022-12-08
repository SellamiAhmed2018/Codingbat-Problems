/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* lastChars(char* a, char* b) {
	char* res=(char*)malloc(3*sizeof(char));
	if(strlen(a)==0&&strlen(b)==0)
		strcpy(res,"@@");
	else if(strlen(a)==0){
		*res='@';
		*(res+1)=*(b+strlen(b)-1);
	}else if(strlen(b)==0){
		*res=*a;
		*(res+1)='@';
	}else{
		*res=*a;
		*(res+1)=*(b+strlen(b)-1);
	}
	*(res+2)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=lastChars("last","chars");
	printf("lastChars(\"last\",\"chars\")=%s\n",result);
	free(result);

	result=lastChars("yo","java");
	printf("lastChars(\"yo\",\"java\")=%s\n",result);
	free(result);

	result=lastChars("hi","");
	printf("lastChars(\"hi\",\"\")=%s\n",result);
	free(result);

	result=lastChars("","");
	printf("lastChars(\"\",\"\")=%s\n",result);
	free(result);
	
	return 0;
}
