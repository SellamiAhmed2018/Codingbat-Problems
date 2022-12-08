/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* makeAbba(char* a, char* b) {
	char* res=(char*)malloc((2*(strlen(a)+strlen(b))+1)*sizeof(char));
	strcpy(res,a);
	strcat(res,b);
	strcat(res,b);
	strcat(res,a);
	*(res+2*(strlen(a)+strlen(b)))='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=makeAbba("Hi", "Bye");
	printf("makeAbba(\"Hi\", \"Bye\")=%s\n",result);
	free(result);

	result=makeAbba("Yo", "Alice");
	printf("makeAbba(\"Yo\", \"Alice\")=%s\n",result);
	free(result);

	result=makeAbba("What", "Up");
	printf("makeAbba(\"What\", \"Up\")=%s\n",result);
	free(result);

	return 0;
}
