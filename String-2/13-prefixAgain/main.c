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

bool prefixAgain(char* str, int n) {
	char* sub1=substring(str,0,n);
	char* sub2;
	bool cond=false;
	for(int i=1;(i<strlen(str)-n+1&&!cond);i++){
		sub2=substring(str,i,i+n);
		if(strcmp(sub2,sub1)==0)
			cond=true;
		free(sub2);
	}
	free(sub1);
	return cond;
}

int main(int argc,char** argv){
	// Test Cases

	printf("prefixAgain(\"abXYabc\",1)=%s\n",(prefixAgain("abXYabc",1)==0)?"false":"true");
	printf("prefixAgain(\"abXYabc\",2)=%s\n",(prefixAgain("abXYabc",2)==0)?"false":"true");
	printf("prefixAgain(\"abXYabc\",3)=%s\n",(prefixAgain("abXYabc",3)==0)?"false":"true");

	return 0;
}
