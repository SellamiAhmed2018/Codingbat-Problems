/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++){
		*(res+i-start)=*(str+i);
	}
	*(res+end-start)='\0';
	return res;
}

void help(char* str,char* sub,int index,int* n){
	if(index>=strlen(str)-strlen(sub)+1||*n<=0)
		return;
	char* sub1=substring(str,index,index+strlen(sub));
	int cond=strcmp(sub1,sub);
	free(sub1);
	if(cond==0){
		*n-=1;
	}
	help(str,sub,index+1,n);
	return ;
}

bool strCopies(char* str, char* sub, int n) {
	help(str,sub,0,&n);
	return n==0;
}

int main(int argc,char** argv){
	// Test Cases
	printf("strCopies(\"catcowcat\", \"cat\", 2)=%s\n",(strCopies("catcowcat", "cat", 2))==0?"false":"true");
	printf("strCopies(\"catcowcat\", \"cow\", 2)=%s\n",(strCopies("catcowcat", "cow", 2))==0?"false":"true");
	printf("strCopies(\"catcowcat\", \"cow\", 1)=%s\n",(strCopies("catcowcat", "cow", 1))==0?"false":"true");

	return 0;
}
