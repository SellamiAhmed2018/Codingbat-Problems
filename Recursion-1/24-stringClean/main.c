/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void help(char* res,char* str,int index,int indexRes){
	if(index>=strlen(str))
		return;
	else{
		if(index<strlen(str)-1&&*(str+index)==*(str+index+1))
			help(res,str,index+1,indexRes);
		else{
			*(res+indexRes)=*(str+index);
			help(res,str,index+1,indexRes+1);
		}
	}
}

char* stringClean(char* str){
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	strcpy(res,"");
	help(res,str,0,0);
	*(res+strlen(str))='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* res;

	res=stringClean("yyzzza");
	printf("stringClean(\"yyzzza\")=%s\n",res);
	free(res);

	res=stringClean("abbbcdd");
	printf("stringClean(\"abbbcdd\")=%s\n",res);
	free(res);

	res=stringClean("Hello");
	printf("stringClean(\"Hello\")=%s\n",res);
	free(res);

	return 0;
}
