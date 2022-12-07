/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* notString(char* str) {
	char* res;
	int h;
	if(strlen(str)>=3 && *str=='n' && *(str+1)=='o' && *(str+2)=='t'){
		res=(char*)malloc((strlen(str)+1)*sizeof(char));
		strcpy(res,str);
		h=strlen(str);
	}else{
		res=(char*)malloc((strlen(str)+5)*sizeof(char));
		strcpy(res,"not ");
		strcat(res,str);
		h=strlen(str)+4;
	}
	*(res+h)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=notString("candy");
	printf("notString(\"candy\")=%s\n",result);
	free(result);

	result=notString("x");
	printf("notString(\"x\")=%s\n",result);
	free(result);

	result=notString("not bad");
	printf("notString(\"not bad\")=%s\n",result);
	free(result);

	result=notString("bad");
	printf("notString(\"bad\")=%s\n",result);
	free(result);

	result=notString("not");
	printf("notString(\"not\")=%s\n",result);
	free(result);

	result=notString("is not");
	printf("notString(\"is not\")=%s\n",result);
	free(result);

	result=notString("no");
	printf("notString(\"no\")=%s\n",result);
	free(result);
	
	return 0;
}
