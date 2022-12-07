/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* endUp(char* str) {
	char* res;
	int first,i;
	res=(char*)malloc((strlen(str)+1)*sizeof(char));
	first=strlen(str)<3?0:strlen(str)-3;
	for(i=0;i<strlen(str);i++){
		*(res+i)=(i>=first&&*(str+i)>='a'&&*(str+i)<='z')?*(str+i)-32:*(str+i);
	}
	*(res+i)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=endUp("Hello");
	printf("endUp(\"Hello\")=%s\n",result);
	free(result);

	result=endUp("hi there");
	printf("endUp(\"hi there\")=%s\n",result);
	free(result);

	result=endUp("hi");
	printf("endUp(\"hi\")=%s\n",result);
	free(result);

	result=endUp("woo hoo");
	printf("endUp(\"woo hoo\")=%s\n",result);
	free(result);

	result=endUp("xyz12");
	printf("endUp(\"xyz12\")=%s\n",result);
	free(result);

	result=endUp("x");
	printf("endUp(\"x\")=%s\n",result);
	free(result);

	result=endUp("");
	printf("endUp(\"\")=%s\n",result);
	free(result);

	return 0;
}
