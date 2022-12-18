/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++){
		*(res+i-start)=*(str+i);
	}
	*(res+end-start)='\0';
	return res;
}

int help(char* str,char* sub,int index){
	if(index>=strlen(str)-strlen(sub)+1)
		return 0;
	char* sub1=substring(str,index,index+strlen(sub));
	int add=strcmp(sub1,sub)==0?1:0;
	free(sub1);
	return add+(add==1?help(str,sub,index+strlen(sub)):help(str,sub,index+1));
}

int strCount(char* str,char* sub){
	return help(str,sub,0);
}

int main(int argc,char** argv){
	// Test Cases
	printf("strCount(\"catcowcat\", \"cat\")=%d\n",strCount("catcowcat", "cat"));
	printf("strCount(\"catcowcat\", \"cow\")=%d\n",strCount("catcowcat", "cow"));
	printf("strCount(\"catcowcat\", \"dog\")=%d\n",strCount("catcowcat", "dog"));
	printf("strCount(\"iiiijj\", \"ii\")=%d\n",strCount("iiiijj", "ii"));
	return 0;
}
