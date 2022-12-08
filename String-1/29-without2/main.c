/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++)
		*(res+i-start)=*(str+i);
	*(res+end-start)='\0';
	return res;
}

char* without2(char* str) {
	char* sub1=(strlen(str)>=2)?substring(str,0,2):NULL;
	char* sub2=(strlen(str)>=2)?substring(str,strlen(str)-2,strlen(str)):NULL;
	int len=(sub1!=NULL&&sub2!=NULL&&strcmp(sub1,sub2)==0)?strlen(str)-2:strlen(str);
	free(sub1);
	free(sub2);
	char* res=(char*)malloc((len+1)*sizeof(char));
	char* sub3=(len!=strlen(str))?substring(str,2,strlen(str)):NULL;
	if(sub3!=NULL){
		strcpy(res,sub3);
		free(sub3);
	}else{
		strcpy(res,str);
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=without2("HelloHe");
	printf("without2(\"HelloHe\")=%s\n",result);
	free(result);

	result=without2("HelloHi");
	printf("without2(\"HelloHi\")=%s\n",result);
	free(result);

	result=without2("Hi");
	printf("without2(\"Hi\")=%s\n",result);
	free(result);
	
	result=without2("");
	printf("without2(\"\")=%s\n",result);
	free(result);
	
	return 0;
}
