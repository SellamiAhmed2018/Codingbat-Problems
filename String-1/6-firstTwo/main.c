/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* firstTwo(char* str) {
	int len=(strlen(str)<2)?strlen(str):3;
	char* res=(char*)malloc((len+1)*sizeof(char));
	if(strlen(str)<2)
		strcpy(res,str);
	else{
		*res=*str;
		*(res+1)=*(str+1);
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=firstTwo("Hello");
	printf("firstTwo(\"Hello\")=%s\n",result);
	free(result);

	result=firstTwo("abcdefg");
	printf("firstTwo(\"abcdefg\")=%s\n",result);
	free(result);

	result=firstTwo("ab");
	printf("firstTwo(\"ab\")=%s\n",result);
	free(result);

	return 0;
}
