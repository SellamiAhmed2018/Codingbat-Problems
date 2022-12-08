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

char* conCat(char* a, char* b) {
	bool cond=(strlen(a)>0&&strlen(b)>0&&*(a+strlen(a)-1)==*b);
	int len=cond?strlen(a)+strlen(b)-1:strlen(a)+strlen(b);
	char* res=(char*)malloc((len+1)*sizeof(char));
	strcpy(res,a);
	char* sub=cond?substring(b,1,strlen(b)):NULL;
	strcat(res,sub==NULL?b:sub);
	free(sub);
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=conCat("abc","cat");
	printf("conCat(\"abc\",\"cat\")=%s\n",result);
	free(result);

	result=conCat("dog","cat");
	printf("conCat(\"dog\",\"cat\")=%s\n",result);
	free(result);

	result=conCat("abc","");
	printf("conCat(\"abc\",\"\")=%s\n",result);
	free(result);

	result=conCat("","");
	printf("conCat(\"\",\"\")=%s\n",result);
	free(result);
	
	return 0;
}
