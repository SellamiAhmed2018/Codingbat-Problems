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

char* withoutX(char* str) {
	return (strlen(str)>=2&&*str=='x'&&*(str+strlen(str)-1)=='x')?substring(str,1,strlen(str)-1):(strlen(str)>=1&&*str=='x')?substring(str,1,strlen(str)):(strlen(str)>=1&&*(str+strlen(str)-1)=='x')?substring(str,0,strlen(str)-1):substring(str,0,strlen(str));
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=withoutX("xHix");
	printf("withoutX(\"xHix\")=%s\n",result);
	free(result);

	result=withoutX("xHi");
	printf("withoutX(\"xHi\")=%s\n",result);
	free(result);

	result=withoutX("Hxix");
	printf("withoutX(\"Hxix\")=%s\n",result);
	free(result);
	
	result=withoutX("");
	printf("withoutX(\"\")=%s\n",result);
	free(result);
	
	result=withoutX("xx");
	printf("withoutX(\"xx\")=%s\n",result);
	free(result);
	
	result=withoutX("x");
	printf("withoutX(\"x\")=%s\n",result);
	free(result);

	result=withoutX("xxHi");
	printf("withoutX(\"xxHi\")=%s\n",result);
	free(result);

	result=withoutX("Hi");
	printf("withoutX(\"Hi\")=%s\n",result);
	free(result);
	
	return 0;
}
