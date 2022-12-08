/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* comboString(char* a, char* b) {
	int len=(strlen(a)<=strlen(b))?2*strlen(a)+strlen(b):2*strlen(b)+strlen(a);
	char* res=(char*)malloc((len+1)*sizeof(char));
	strcpy(res,(strlen(a)<=strlen(b))?a:b);
	strcat(res,(strlen(a)<=strlen(b))?b:a);
	strcat(res,(strlen(a)<=strlen(b))?a:b);
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=comboString("Hello", "hi");
	printf("comboString(\"Hello\", \"hi\")=%s\n",result);
	free(result);

	result=comboString("hi", "Hello");
	printf("comboString(\"hi\", \"Hello\")=%s\n",result);
	free(result);

	result=comboString("aaa", "b");
	printf("comboString(\"aaa\", \"b\")=%s\n",result);
	free(result);

	return 0;
}
