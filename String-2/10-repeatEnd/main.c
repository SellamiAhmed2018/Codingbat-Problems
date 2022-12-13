/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* repeatEnd(char* str, int n) {
	int len=n*n;
	char* res=(char*)malloc((len+1)*sizeof(char));
	int h=strlen(str)-n;
	for(int i=0;i<len;i++){
		*(res+i)=*(str+h);
		h++;
		if(h==strlen(str))
			h=strlen(str)-n;
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=repeatEnd("Hello", 3);
	printf("repeatEnd(\"Hello\", 3)=%s\n",result);
	free(result);
	
	result=repeatEnd("Hello", 2);
	printf("repeatEnd(\"Hello\", 2)=%s\n",result);
	free(result);

	result=repeatEnd("Hello", 1);
	printf("repeatEnd(\"Hello\", 1)=%s\n",result);
	free(result);

	result=repeatEnd("Hello", 0);
	printf("repeatEnd(\"Hello\", 0)=%s\n",result);
	free(result);

	return 0;
}
