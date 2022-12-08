/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

char* theEnd(char* str, bool front) {
	char* res=(char*)malloc(2*sizeof(char));
	*res=front?*str:*(str+strlen(str)-1);
	*(res+1)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=theEnd("Hello",true);
	printf("theEnd(\"Hello\",true)=%s\n",result);
	free(result);

	result=theEnd("Hello",false);
	printf("theEnd(\"Hello\",false)=%s\n",result);
	free(result);

	result=theEnd("oh",true);
	printf("theEnd(\"oh\",true)=%s\n",result);
	free(result);

	return 0;
}
