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

char* withoutX2(char* str) {
	char* sub;
	char* res;
	int len=0;
	if(strlen(str)>=2&&*str=='x'&&*(str+1)=='x'){
		res=substring(str,2,strlen(str));
	}else if(strlen(str)>=1&&*str=='x'){
		res=substring(str,1,strlen(str));
	}else if(strlen(str)>=2&&*(str+1)=='x'){
		len=strlen(str)-1;
		res=(char*)malloc((len+1)*sizeof(char));
		sub=substring(str,0,1);
		strcpy(res,sub);
		free(sub);
		sub=substring(str,2,strlen(str));
		strcat(res,sub);
		free(sub);
	}else{
		res=substring(str,0,strlen(str));
	}
	if(len!=0)
		*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=withoutX2("xHi");
	printf("withoutX2(\"xHi\")=%s\n",result);
	free(result);

	result=withoutX2("Hxi");
	printf("withoutX2(\"Hxi\")=%s\n",result);
	free(result);

	result=withoutX2("Hi");
	printf("withoutX2(\"Hi\")=%s\n",result);
	free(result);
	
	result=withoutX2("");
	printf("withoutX2(\"\")=%s\n",result);
	free(result);
	
	result=withoutX2("xxHi");
	printf("withoutX2(\"xxHi\")=%s\n",result);
	free(result);
	
	result=withoutX2("xx");
	printf("withoutX2(\"xx\")=%s\n",result);
	free(result);

	result=withoutX2("x");
	printf("withoutX2(\"x\")=%s\n",result);
	free(result);

	result=withoutX2("Hix");
	printf("withoutX2(\"Hix\")=%s\n",result);
	free(result);
	
	return 0;
}
