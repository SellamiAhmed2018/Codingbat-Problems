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

char* conCat(char* str, char* word) {
	char* res=malloc(sizeof(char));
	char* sub1;
	char* sub2;
	char* sub3;
	int len=0;
	if(strlen(str)>=strlen(word)){
		sub1=substring(str,1,strlen(word));
		sub2=substring(word,1,strlen(word));
		if(strcmp(sub1,sub2)==0){
			len=strlen(word);
			res=(char*)realloc(res,(len+1)*sizeof(char));
			sub3=substring(str,0,strlen(word));
			strcpy(res,sub3);
			free(sub3);
		}
		free(sub1);
		free(sub2);
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=conCat("hippo","hi");
	printf("conCat(\"hippo\",\"hi\")=%s\n",result);
	free(result);

	result=conCat("hippo","xip");
	printf("conCat(\"hippo\",\"xip\")=%s\n",result);
	free(result);

	result=conCat("hippo","i");
	printf("conCat(\"hippo\",\"i\")=%s\n",result);
	free(result);

	result=conCat("","i");
	printf("conCat(\"\",\"i\")=%s\n",result);
	free(result);
	
	return 0;
}
