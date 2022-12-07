/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* startOz(char* str) {
	char* res;
	int h;
	if(strlen(str)>=2 && *str=='o' && *(str+1)=='z'){
		res=(char*)malloc(3*sizeof(char));
		strcpy(res,"oz");
		h=2;
	}else if(strlen(str)>=2 && *(str+1)=='z'){
		res=(char*)malloc(2*sizeof(char));
		*res='z';
		h=1;
	}else if(strlen(str)>=1 && *str=='o'){
		res=(char*)malloc(2*sizeof(char));
		*res='o';
		h=1;
	}else{
		res=(char*)malloc(sizeof(char));
		strcpy(res,"");
		h=0;
	}
	*(res+h)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=startOz("ozymandias");
	printf("startOz(\"ozymandias\")=%s\n",result);
	free(result);

	result=startOz("bzoo");
	printf("startOz(\"bzoo\")=%s\n",result);
	free(result);

	result=startOz("oxx");
	printf("startOz(\"oxx\")=%s\n",result);
	free(result);

	result=startOz("oz");
	printf("startOz(\"oz\")=%s\n",result);
	free(result);

	result=startOz("ounce");
	printf("startOz(\"ounce\")=%s\n",result);
	free(result);

	result=startOz("o");
	printf("startOz(\"o\")=%s\n",result);
	free(result);

	result=startOz("abc");
	printf("startOz(\"abc\")=%s\n",result);
	free(result);

	result=startOz("");
	printf("startOz(\"\")=%s\n",result);
	free(result);
	
	result=startOz("zoo");
	printf("startOz(\"zoo\")=%s\n",result);
	free(result);
	
	result=startOz("aztec");
	printf("startOz(\"aztec\")=%s\n",result);
	free(result);
	
	result=startOz("zzzz");
	printf("startOz(\"zzzz\")=%s\n",result);
	free(result);

	result=startOz("oznic");
	printf("startOz(\"oznic\")=%s\n",result);
	free(result);

	return 0;
}
