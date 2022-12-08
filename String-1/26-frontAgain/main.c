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

bool frontAgain(char* str) {
	bool cond=false;
	if(strlen(str)>=2){
		char* sub1=substring(str,0,2);
		char* sub2=substring(str,strlen(str)-2,strlen(str));
		cond=(strcmp(sub1,sub2)==0);
		free(sub1);
		free(sub2);
	}
	return cond;
}

int main(int argc,char** argv){
	// Test Cases
	printf("frontAgain(\"edited\")=%s\n",(frontAgain("edited"))==0?"false":"true");
	printf("frontAgain(\"edit\")=%s\n",(frontAgain("edit")==0)?"false":"true");
	printf("frontAgain(\"ed\")=%s\n",(frontAgain("ed")==0)?"false":"true");
	return 0;
}
