/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* doubleChar(char* str) {
	int len=2*strlen(str);
	char* res=(char*)malloc((len+1)*sizeof(char));
	int h=0;
	for(int i=0;i<strlen(str);i++){
		*(res+h)=*(str+i);
		*(res+h+1)=*(str+i);
		h+=2;	
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=doubleChar("The");
	printf("doubleChar(\"The\")=%s\n",result);
	free(result);

	result=doubleChar("AAbb");
	printf("doubleChar(\"AAbb\")=%s\n",result);
	free(result);

	result=doubleChar("Hi-There");
	printf("doubleChar(\"Hi-There\")=%s\n",result);
	free(result);
	
	return 0;
}
