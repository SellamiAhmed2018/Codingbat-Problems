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

bool xyzMiddle(char* str) {
	bool cond=false;
	char* sub;
	for(int i=0;(i<strlen(str)-2&&!cond);i++){
		sub=substring(str,i,i+3);
		if(strcmp(sub,"xyz")==0&&abs(2*i-strlen(str)+3)<=1)
			cond=true;
		free(sub);
	}
	return cond;
}

int main(int argc,char** argv){
	// Test Cases

	printf("xyzMiddle(\"AAxyzBB\")=%s\n",(xyzMiddle("AAxyzBB")==0)?"false":"true");
	printf("xyzMiddle(\"AxyzBB\")=%s\n",(xyzMiddle("AxyzBB")==0)?"false":"true");
	printf("xyzMiddle(\"AxyzBBB\")=%s\n",(xyzMiddle("AxyzBBB")==0)?"false":"true");

	return 0;
}
