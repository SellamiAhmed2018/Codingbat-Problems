/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void help(char* res,char* str,int index){
	if(index==strlen(str))
		return;
	if(*(str+index)=='x')
		*(res+index)='y';
	else
		*(res+index)=*(str+index);
	help(res,str,index+1);
}

char* changeXY(char* str){
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	help(res,str,0);
	*(res+strlen(str))='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* res;

	res=changeXY("codex");
	printf("changeXY(\"codex\")=%s\n",res);
	free(res);

	res=changeXY("xxhixx");
	printf("changeXY(\"xxhixx\")=%s\n",res);
	free(res);

	res=changeXY("xhixhix");
	printf("changeXY(\"xhixhix\")=%s\n",res);
	free(res);

	return 0;
}
