/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* atFirst(char* str) {
	char* res=(char*)malloc(3*sizeof(char));
	if(strlen(str)==0)
		strcpy(res,"@@");
	else if(strlen(str)==1){
		strcpy(res,str);
		*(res+1)='@';
	}else{
		*res=*str;
		*(res+1)=*(str+1);
	}
	*(res+2)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=atFirst("hello");
	printf("atFirst(\"hello\")=%s\n",result);
	free(result);

	result=atFirst("hi");
	printf("atFirst(\"hi\")=%s\n",result);
	free(result);

	result=atFirst("h");
	printf("atFirst(\"h\")=%s\n",result);
	free(result);

	result=atFirst("");
	printf("atFirst(\"\")=%s\n",result);
	free(result);
	
	return 0;
}
