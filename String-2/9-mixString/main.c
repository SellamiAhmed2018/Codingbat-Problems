/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* mixString(char* a, char* b) {
	int len=strlen(a)+strlen(b);
	char* res=(char*)malloc((len+1)*sizeof(char));
	int indexA=0,indexB=0;
	for(int i=0;i<len;i++){
		if(indexA<strlen(a)&&(indexA==indexB||indexB>=strlen(b))){
			*(res+i)=*(a+indexA);
			indexA++;
		}else if(indexB<strlen(b)&&(indexA>indexB||indexA>=strlen(a))){
			*(res+i)=*(b+indexB);
			indexB++;
		}
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=mixString("abc", "xyz");
	printf("mixString(\"abc\", \"xyz\")=%s\n",result);
	free(result);
	
	result=mixString("Hi", "There");
	printf("mixString(\"Hi\", \"There\")=%s\n",result);
	free(result);

	result=mixString("xxxx", "There");
	printf("mixString(\"xxxx\", \"There\")=%s\n",result);
	free(result);
	
	return 0;
}
