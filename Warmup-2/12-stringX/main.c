/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* stringX(char* str) {
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	int h=0;
	for(int i=0;i<strlen(str);i++){
		if(i!=0&&i!=strlen(str)-1&&*(str+i)=='x')
			continue;
		*(res+h)=*(str+i);
		h++;
	}
	*(res+h)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=stringX("xxHxix");
	printf("stringX(\"xxHxix\")=%s\n",result);
	free(result);

	result=stringX("abxxxcd");
	printf("stringX(\"abxxxcd\")=%s\n",result);
	free(result);

	result=stringX("xabxxxcdx");
	printf("stringX(\"xabxxxcdx\")=%s\n",result);
	free(result);

	result=stringX("xKittenx");
	printf("stringX(\"xKittenx\")=%s\n",result);
	free(result);

	result=stringX("Hello");
	printf("stringX(\"Hello\")=%s\n",result);
	free(result);

	result=stringX("xx");
	printf("stringX(\"xx\")=%s\n",result);
	free(result);

	result=stringX("x");
	printf("stringX(\"x\")=%s\n",result);
	free(result);

	result=stringX("");
	printf("stringX(\"\")=%s\n",result);
	free(result);
	return 0;
}
