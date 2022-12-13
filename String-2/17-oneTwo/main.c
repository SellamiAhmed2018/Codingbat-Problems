/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* oneTwo(char* str) {
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	int i=0;
	while(i<strlen(str)){
		if(i<strlen(str)-2){
			*(res+i)=*(str+i+1);
			*(res+i+1)=*(str+i+2);
			*(res+i+2)=*(str+i);
			i+=3;
		}else{
			i++;
		}
	}
	*(res+strlen(str))='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=oneTwo("abc");
	printf("oneTwo(\"abc\")=%s\n",result);
	free(result);

	result=oneTwo("tca");
	printf("oneTwo(\"tca\")=%s\n",result);
	free(result);
	
	result=oneTwo("tcagdo");
	printf("oneTwo(\"tcagdo\")=%s\n",result);
	free(result);

	return 0;
}
