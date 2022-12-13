/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* repeatSeparator(char* word, char* sep, int count) {
	int len=(count*(strlen(word)+strlen(sep))-strlen(sep));
	char* res=(char*)malloc((len+1)*sizeof(char));
	for(int i=0;i<count;i++){
		(i==0)?strcpy(res,word):strcat(res,word);
		(i!=count-1)?strcat(res,sep):strcat(res,"");
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=repeatSeparator("Word", "X", 3);
	printf("repeatSeparator(\"Word\", \"X\", 3)=%s\n",result);
	free(result);
	
	result=repeatSeparator("This", "And", 2);
	printf("repeatSeparator(\"This\", \"And\", 2)=%s\n",result);
	free(result);

	result=repeatSeparator("This", "And", 1);
	printf("repeatSeparator(\"This\", \"And\", 1)=%s\n",result);
	free(result);

	return 0;
}
