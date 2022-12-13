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

char* lowerCase(char* str){
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	for(int i=0;i<strlen(str);i++){
		*(res+i)=*(str+i)>='A'&&*(str+i)<='Z'?*(str+i)+32:*(str+i);
	}
	*(res+strlen(str))='\0';
	return res;
}

bool endOther(char* a,char* b) {
	a=lowerCase(a);
	b=lowerCase(b);
	char* sub;
	bool cond=false;
	if(strlen(a)>=strlen(b)){
		sub=substring(a,strlen(a)-strlen(b),strlen(a));
		cond=strcmp(sub,b)==0;
		free(sub);
	}else{
		sub=substring(b,strlen(b)-strlen(a),strlen(b));
		cond=strcmp(sub,a)==0;
		free(sub);
	}
	free(a);
	free(b);
	return cond;
}

int main(int argc,char** argv){
	// Test Cases
	printf("endOther(\"Hiabc\",\"abc\")=%s\n",(endOther("Hiabc","abc")==0)?"false":"true");
	printf("endOther(\"AbC\",\"HiaBc\")=%s\n",(endOther("AbC","HiaBc")==0)?"false":"true");
	printf("endOther(\"abc\",\"abXabc\")=%s\n",(endOther("abc","abXabc")==0)?"false":"true");

	return 0;
}
