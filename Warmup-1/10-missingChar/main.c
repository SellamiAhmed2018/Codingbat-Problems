/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* missingChar(char* str,int n) {
	char* res;
	int h,i;
	res=(char*)malloc(strlen(str)*sizeof(char)); // it would have been strlen(str)-1 but don't forget about '\0'
	h=0;
	for(i=0;i<strlen(str);i++){
		if(i==n)
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

	result=missingChar("kitten", 1);
	printf("missingChar(\"kitten\", 1)=%s\n",result);
	free(result);

	result=missingChar("kitten", 0);
	printf("missingChar(\"kitten\", 0)=%s\n",result);
	free(result);

	result=missingChar("kitten", 4);
	printf("missingChar(\"kitten\", 4)=%s\n",result);
	free(result);

	result=missingChar("Hi", 0);
	printf("missingChar(\"Hi\", 0)=%s\n",result);
	free(result);

	result=missingChar("Hi", 1);
	printf("missingChar(\"Hi\", 1)=%s\n",result);
	free(result);

	result=missingChar("code", 0);
	printf("missingChar(\"code\", 0)=%s\n",result);
	free(result);

	result=missingChar("code", 1);
	printf("missingChar(\"code\", 1)=%s\n",result);
	free(result);

	result=missingChar("code", 2);
	printf("missingChar(\"code\", 2)=%s\n",result);
	free(result);

	result=missingChar("code", 3);
	printf("missingChar(\"code\", 3)=%s\n",result);
	free(result);

	result=missingChar("chocolate", 8);
	printf("missingChar(\"chocolate\", 8)=%s\n",result);
	free(result);
	
	return 0;
}
