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

char* firstHalf(char* str) {
	return substring(str,0,strlen(str)/2);
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=firstHalf("WooHoo");
	printf("firstHalf(\"WooHoo\")=%s\n",result);
	free(result);

	result=firstHalf("HelloThere");
	printf("firstHalf(\"HelloThere\")=%s\n",result);
	free(result);

	result=firstHalf("abcdef");
	printf("firstHalf(\"abcdef\")=%s\n",result);
	free(result);

	return 0;
}
