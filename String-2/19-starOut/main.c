/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* starOut(char* str) {
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	int h=0;
	for(int i=0;i<strlen(str);i++){
		if(*(str+i)=='*'||(i>0&&*(str+i-1)=='*')||(i<strlen(str)-1&&*(str+i+1)=='*'))
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

	result=starOut("ab*cd");
	printf("starOut(\"ab*cd\")=%s\n",result);
	free(result);

	result=starOut("ab**cd");
	printf("starOut(\"ab**cd\")=%s\n",result);
	free(result);
	
	result=starOut("sm*eilly");
	printf("starOut(\"sm*eilly\")=%s\n",result);
	free(result);

	return 0;
}
