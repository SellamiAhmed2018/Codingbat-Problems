/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++)
		*(res+i-start)=*(str+i);
	*(res+end-start)='\0';
	return res;
}

char* extraFront(char* str) {
	int len=(strlen(str)<2)?strlen(str):2;
	char* res=(char*)malloc((len*3+1)*sizeof(char));
	char* sub=(len>=2)?substring(str,0,2):NULL;
	if(sub!=NULL){
		strcpy(res,sub);
		strcat(res,sub);
		strcat(res,sub);
	}else{
		strcpy(res,str);
		strcat(res,str);
		strcat(res,str);
	}
	free(sub);
	*(res+len*3)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=extraFront("Hello");
	printf("extraFront(\"Hello\")=%s\n",result);
	free(result);

	result=extraFront("ab");
	printf("extraFront(\"ab\")=%s\n",result);
	free(result);

	result=extraFront("H");
	printf("extraFront(\"H\")=%s\n",result);
	free(result);
	
	result=extraFront("");
	printf("extraFront(\"\")=%s\n",result);
	free(result);
	
	return 0;
}
