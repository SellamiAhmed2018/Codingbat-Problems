/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* everyNth(char* str, int n) {
	char* res=(char*)malloc(((strlen(str)%n==0)?((strlen(str)/n)+1):(strlen(str)/n)+2)*sizeof(char));
	int h=0;
	for(int i=0;i<strlen(str);i+=n){
		*(res+h)=*(str+i);
		h++;
	}
	*(res+h)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=everyNth("Miracle", 2);
	printf("everyNth(\"Miracle\", 2)=%s\n",result);
	free(result);

	result=everyNth("abcdefg", 2);
	printf("everyNth(\"abcdefg\", 2)=%s\n",result);
	free(result);

	result=everyNth("abcdefg", 3);
	printf("everyNth(\"abcdefg\", 3)=%s\n",result);
	free(result);

	result=everyNth("Chocolate", 3);
	printf("everyNth(\"Chocolate\", 3)=%s\n",result);
	free(result);

	result=everyNth("Chocolates", 3);
	printf("everyNth(\"Chocolates\", 3)=%s\n",result);
	free(result);

	result=everyNth("Chocolates", 4);
	printf("everyNth(\"Chocolates\", 4)=%s\n",result);
	free(result);

	result=everyNth("Chocolates", 100);
	printf("everyNth(\"Chocolates\", 100)=%s\n",result);
	free(result);

	return 0;
}
