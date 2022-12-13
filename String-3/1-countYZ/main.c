/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* lowerCase(char* str){
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	for(int i=0;i<strlen(str);i++){
		*(res+i)=*(str+i)>='A'&&*(str+i)<='Z'?*(str+i)+32:*(str+i);
	}
	*(res+strlen(str))='\0';
	return res;
}

int countYZ(char* str) {
	int res=0;
	char* str2=lowerCase(str);
	for(int i=0;i<strlen(str);i++){
		if((i==strlen(str)-1||!(*(str2+i+1)>='a'&&*(str2+i+1)<='z'))&&(*(str2+i)=='y'||*(str2+i)=='z'))
			res++;
	}
	free(str2);
	return res;
}

int main(int argc,char** argv){
	// Test Cases

	printf("countYZ(\"fez day\")=%d\n",countYZ("fez day"));
	printf("countYZ(\"day fez\")=%d\n",countYZ("day fez"));
	printf("countYZ(\"day fyyyz\")=%d\n",countYZ("day fyyyz"));

	return 0;
}
