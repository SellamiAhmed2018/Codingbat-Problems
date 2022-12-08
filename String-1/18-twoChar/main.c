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

char* twoChar(char* str, int index) {
	return (index<0||index+2>strlen(str))?substring(str,0,2):substring(str,index,index+2);
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=twoChar("java",0);
	printf("twoChar(\"java\",0)=%s\n",result);
	free(result);

	result=twoChar("java",2);
	printf("twoChar(\"java\",2)=%s\n",result);
	free(result);

	result=twoChar("java",3);
	printf("twoChar(\"java\",3)=%s\n",result);
	free(result);

	return 0;
}
