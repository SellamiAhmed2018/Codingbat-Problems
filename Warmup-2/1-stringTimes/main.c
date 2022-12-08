/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* stringTimes(char* str,int n) {
	char* res=(char*)malloc((strlen(str)*n+1)*sizeof(char));
	for(int i=0;i<n;i++){
		(i==0)?strcpy(res,str):strcat(res,str);
	}
	*(res+(strlen(str)*n))='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=stringTimes("Hi", 2);
	printf("stringTimes(\"Hi\", 2)=%s\n",result);
	free(result);

	result=stringTimes("Hi", 3);
	printf("stringTimes(\"Hi\", 3)=%s\n",result);
	free(result);

	result=stringTimes("Hi", 1);
	printf("stringTimes(\"Hi\", 1)=%s\n",result);
	free(result);

	result=stringTimes("Hi", 0);
	printf("stringTimes(\"Hi\", 0)=%s\n",result);
	free(result);

	result=stringTimes("Hi", 5);
	printf("stringTimes(\"Hi\", 5)=%s\n",result);
	free(result);

	result=stringTimes("Oh Boy!", 2);
	printf("stringTimes(\"Oh Boy!\", 2)=%s\n",result);
	free(result);

	result=stringTimes("x", 4);
	printf("stringTimes(\"x\", 4)=%s\n",result);
	free(result);

	result=stringTimes("", 4);
	printf("stringTimes(\"\", 4)=%s\n",result);
	free(result);

	result=stringTimes("code", 2);
	printf("stringTimes(\"code\", 2)=%s\n",result);
	free(result);

	result=stringTimes("code", 3);
	printf("stringTimes(\"code\", 3)=%s\n",result);
	free(result);
	
	return 0;
}
