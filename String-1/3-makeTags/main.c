/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* makeTags(char* tag, char* word) {
	char* res=(char*)malloc((2*strlen(tag)+strlen(word)+6)*sizeof(char));
	strcpy(res,"<");
	strcat(res,tag);
	strcat(res,">");
	strcat(res,word);
	strcat(res,"</");
	strcat(res,tag);
	strcat(res,">");
	*(res+2*strlen(tag)+strlen(word)+5)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=makeTags("i", "Yay");
	printf("makeTags(\"i\", \"Yay\")=%s\n",result);
	free(result);

	result=makeTags("i", "Hello");
	printf("makeTags(\"i\", \"Hello\")=%s\n",result);
	free(result);

	result=makeTags("cite", "Yay");
	printf("makeTags(\"cite\", \"Yay\")=%s\n",result);
	free(result);

	return 0;
}
