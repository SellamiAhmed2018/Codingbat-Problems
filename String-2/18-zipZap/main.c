/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* zipZap(char* str) {
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	int h=0;
	for(int i=0;i<strlen(str);i++){
		if(i>0&&i<strlen(str)-1&&*(str+i-1)=='z'&&*(str+i+1)=='p'){
			continue;
		}
		*(res+h)=*(str+i);
		h++;
	}
	*(res+h)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=zipZap("zipXzap");
	printf("zipZap(\"zipXzap\")=%s\n",result);
	free(result);

	result=zipZap("zopzop");
	printf("zipZap(\"zopzop\")=%s\n",result);
	free(result);
	
	result=zipZap("zzzopzop");
	printf("zipZap(\"zzzopzop\")=%s\n",result);
	free(result);

	return 0;
}
