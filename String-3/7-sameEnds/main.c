/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	int len=(end<=start)?0:end-start+1;
	char* res=(char*)malloc(len*sizeof(char));
	for(int i=start;i<end;i++)
		*(res+i-start)=*(str+i);
	*(res+(len==0?0:len-1))='\0';
	return res;
}

char* sameEnds(char* string) {
	char* res=(char*)malloc((strlen(string)+1)*sizeof(char));
	char* sub1;
	char* sub2;
	int i;
	for(i=strlen(string)/2;i>=0;i--){
		sub1=substring(string,0,i);
		sub2=substring(string,strlen(string)-i,strlen(string));
		if(strcmp(sub1,sub2)==0){
			strcpy(res,sub1);
			free(sub1);
			free(sub2);
			break;
		}
		free(sub1);
		free(sub2);
	}
	*(res+i)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=sameEnds("abXYab");
	printf("sameEnds(\"abXYab\")=%s\n",result);
	free(result);
	
	result=sameEnds("xx");
	printf("sameEnds(\"xx\")=%s\n",result);
	free(result);
	
	result=sameEnds("xxx");
	printf("sameEnds(\"xxx\")=%s\n",result);
	free(result);
	
	return 0;
}
