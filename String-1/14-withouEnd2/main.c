/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++)
		*(res+i-start)=*(str+i);
	*(res+end-start)='\0';
	return res;
}

char* withouEnd2(char* str) {
	int len=(strlen(str)<=2)?0:strlen(str)-2;
	char* res=(char*)malloc((len+1)*sizeof(char));
	char* sub=substring(str,1,strlen(str)-1);
	strcpy(res,strlen(str)<=2?"":sub);
	free(sub);
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=withouEnd2("Hello");
	printf("withouEnd2(\"Hello\")=%s\n",result);
	free(result);

	result=withouEnd2("abc");
	printf("withouEnd2(\"abc\")=%s\n",result);
	free(result);

	result=withouEnd2("ab");
	printf("withouEnd2(\"ab\")=%s\n",result);
	free(result);

	return 0;
}
