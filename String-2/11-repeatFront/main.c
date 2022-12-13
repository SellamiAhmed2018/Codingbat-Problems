/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++)
		*(res+i-start)=*(str+i);
	*(res+end-start)='\0';
	return res;
}

int getLength(int n){
	int result=0;
	for(int i=0;i<=n;i++)
		result+=i;
	return result;
}

char* repeatFront(char* str, int n) {
	int len=getLength(n);
	char* res=(char*)malloc((len+1)*sizeof(char));
	char* sub;
	for(int i=0;i<n;i++){
		sub=substring(str,0,n-i);
		(i==0)?strcpy(res,sub):strcat(res,sub);
		free(sub);
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=repeatFront("Chocolate", 4);
	printf("repeatFront(\"Chocolate\", 4)=%s\n",result);
	free(result);
	
	result=repeatFront("Chocolate", 3);
	printf("repeatFront(\"Chocolate\", 3)=%s\n",result);
	free(result);

	result=repeatFront("Ice Cream", 2);
	printf("repeatFront(\"Ice Cream\", 2)=%s\n",result);
	free(result);

	result=repeatFront("Hello", 0);
	printf("repeatFront(\"Hello\", 0)=%s\n",result);
	free(result);

	return 0;
}
