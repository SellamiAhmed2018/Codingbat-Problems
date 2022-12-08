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

char* deFront(char* str) {
	char* sub;
	char* res;
	int len;
	if(strlen(str)>=2&&*str=='a'&&*(str+1)=='b'){
		len=strlen(str);
		res=(char*)malloc((len+1)*sizeof(char));
		strcpy(res,str);
	}else{
		sub=(strlen(str)>=2)?substring(str,2,strlen(str)):NULL;
		if(strlen(str)>=1&&*str=='a'){
			len=strlen(str)!=1?strlen(str)-1:1;
			res=(char*)malloc((len+1)*sizeof(char));
			strcpy(res,"a");
		}else if(strlen(str)>=2&&*(str+1)=='b'){
			len=strlen(str)-1;
			res=(char*)malloc((len+1)*sizeof(char));
			strcpy(res,"b");
		}else if(strlen(str)>=2){
			len=strlen(str)-2;
			res=(char*)malloc((len+1)*sizeof(char));
			strcpy(res,"");
		}else{
			len=0;
			res=(char*)malloc(sizeof(char));
			*res='\0';
		}
		strcat(res,sub!=NULL?sub:"");
		free(sub);
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=deFront("Hello");
	printf("deFront(\"Hello\")=%s\n",result);
	free(result);

	result=deFront("java");
	printf("deFront(\"java\")=%s\n",result);
	free(result);

	result=deFront("away");
	printf("deFront(\"away\")=%s\n",result);
	free(result);
	
	result=deFront("");
	printf("deFront(\"\")=%s\n",result);
	free(result);
	
	result=deFront("ab");
	printf("deFront(\"ab\")=%s\n",result);
	free(result);
	
	result=deFront("a");
	printf("deFront(\"a\")=%s\n",result);
	free(result);

	result=deFront("b");
	printf("deFront(\"b\")=%s\n",result);
	free(result);

	result=deFront("axb");
	printf("deFront(\"axb\")=%s\n",result);
	free(result);
	
	return 0;
}
