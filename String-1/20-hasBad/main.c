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

bool hasBad(char* str) {
	bool cond;
	char* sub1=(strlen(str)>=4)?substring(str,1,4):NULL;
	char* sub2=(strlen(str)>=3)?substring(str,0,3):NULL;
	cond=(sub1!=NULL&&strcmp(sub1,"bad")==0)||(sub2!=NULL&&strcmp(sub2,"bad")==0);
	free(sub1);
	free(sub2);
	return cond;
}

int main(int argc,char** argv){
	// Test Cases
	printf("hasBad(\"badxx\")=%s\n",(hasBad("badxx"))==0?"false":"true");
	printf("hasBad(\"xbadxx\")=%s\n",(hasBad("xbadxx")==0)?"false":"true");
	printf("hasBad(\"xxbadxx\")=%s\n",(hasBad("xxbadxx")==0)?"false":"true");
	return 0;
}
