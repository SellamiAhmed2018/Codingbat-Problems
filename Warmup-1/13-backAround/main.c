/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* backAround(char* str) {
	char* res=(char*)malloc((strlen(str)+3)*sizeof(char));
	*res=*(str+strlen(str)-1);
	int h=1;
	for(int i=0;i<strlen(str);i++){
		*(res+h)=*(str+i);
		h++;
	}
	*(res+h)=*(res+h-1);
	*(res+h+1)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=backAround("cat");
	printf("backAround(\"cat\")=%s\n",result);
	free(result);

	result=backAround("Hello");
	printf("backAround(\"Hello\")=%s\n",result);
	free(result);

	result=backAround("a");
	printf("backAround(\"a\")=%s\n",result);
	free(result);

	result=backAround("abc");
	printf("backAround(\"abc\")=%s\n",result);
	free(result);

	result=backAround("read");
	printf("backAround(\"read\")=%s\n",result);
	free(result);

	result=backAround("boo");
	printf("backAround(\"boo\")=%s\n",result);
	free(result);

	return 0;
}
