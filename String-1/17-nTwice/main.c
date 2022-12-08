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

char* nTwice(char* str, int n) {
	char* res=(char*)malloc((2*n+1)*sizeof(char));
	char* sub=substring(str,0,n);
	strcpy(res,sub);
	free(sub);
	sub=substring(str,strlen(str)-n,strlen(str));
	strcat(res,sub);
	free(sub);
	*(res+2*n)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=nTwice("Hello",2);
	printf("nTwice(\"Hello\",2)=%s\n",result);
	free(result);

	result=nTwice("Chocolate",3);
	printf("nTwice(\"Chocolate\",3)=%s\n",result);
	free(result);

	result=nTwice("Chocolate",1);
	printf("nTwice(\"Chocolate\",1)=%s\n",result);
	free(result);

	return 0;
}
