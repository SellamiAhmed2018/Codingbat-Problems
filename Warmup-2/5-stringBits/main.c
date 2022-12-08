/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* stringBits(char* str) {
	int len=(strlen(str)%2==0)?strlen(str)/2:strlen(str)/2+1;
	char* res=(char*)malloc((len+1)*sizeof(char));
	int h=0;
	for(int i=0;i<strlen(str);i+=2){
		*(res+h)=*(str+i);
		h++;
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=stringBits("Hello");
	printf("stringBits(\"Hello\")=%s\n",result);
	free(result);

	result=stringBits("Hi");
	printf("stringBits(\"Hi\")=%s\n",result);
	free(result);

	result=stringBits("Heeololeo");
	printf("stringBits(\"Heeololeo\")=%s\n",result);
	free(result);

	result=stringBits("HiHiHi");
	printf("stringBits(\"HiHiHi\")=%s\n",result);
	free(result);

	result=stringBits("");
	printf("stringBits(\"\")=%s\n",result);
	free(result);

	result=stringBits("Greetings");
	printf("stringBits(\"Greetings\")=%s\n",result);
	free(result);

	result=stringBits("Chocoate");
	printf("stringBits(\"Chocoate\")=%s\n",result);
	free(result);

	result=stringBits("pi");
	printf("stringBits(\"pi\")=%s\n",result);
	free(result);

	result=stringBits("Hello Kitten");
	printf("stringBits(\"Hello Kitten\")=%s\n",result);
	free(result);
	
	result=stringBits("hxaxpxpxy");
	printf("stringBits(\"hxaxpxpxy\")=%s\n",result);
	free(result);

	return 0;
}
