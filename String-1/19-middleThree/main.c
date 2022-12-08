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

char* middleThree(char* str) {
	return substring(str,strlen(str)/2-1,strlen(str)/2+2);
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=middleThree("Candy");
	printf("middleThree(\"Candy\")=%s\n",result);
	free(result);

	result=middleThree("and");
	printf("middleThree(\"and\")=%s\n",result);
	free(result);

	result=middleThree("solving");
	printf("middleThree(\"solving\")=%s\n",result);
	free(result);

	return 0;
}
