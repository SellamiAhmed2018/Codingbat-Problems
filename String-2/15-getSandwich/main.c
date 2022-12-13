/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	int len=(end<=start)?0:(end-start)+1;
	char* res=(char*)malloc(len*sizeof(char));
	for(int i=start;i<end;i++)
		*(res+i-start)=*(str+i);
	*(res+(len==0?0:len-1))='\0';
	return res;
}

char* getSandwich(char* str) {
	int firstIndex=0,lastIndex=0;
	char* sub;
	for(int i=0;i<strlen(str)-4;i++){
		sub=substring(str,i,i+5);
		if(strcmp(sub,"bread")==0){
			free(sub);
			firstIndex=i+5;
			break;
		}
		free(sub);
	}

	for(int i=strlen(str)-5;i>=0;i--){
		sub=substring(str,i,i+5);
		if(strcmp(sub,"bread")==0){
			free(sub);
			lastIndex=i;
			break;
		}
		free(sub);
	}
	return substring(str,firstIndex,lastIndex);
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=getSandwich("breadjambread");
	printf("getSandwich(\"breadjambread\")=%s\n",result);
	free(result);

	result=getSandwich("xxbreadjambreadyy");
	printf("getSandwich(\"xxbreadjambreadyy\")=%s\n",result);
	free(result);
	
	result=getSandwich("xxbreadyy");
	printf("getSandwich(\"xxbreadyy\")=%s\n",result);
	free(result);

	return 0;
}
