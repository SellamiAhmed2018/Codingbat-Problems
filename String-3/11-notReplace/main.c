/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool isChar(char c){
	return (c>='a'&&c<='z')||(c>='A'&&c<='Z');
}

int getLength(char* str){
	int x=0;
	for(int i=0;i<strlen(str)-1;i++){
		if(i<=strlen(str)-2&&*(str+i)=='i'&&*(str+i+1)=='s'&&
			((i==0||!isChar(*(str+i-1))))&&(i==strlen(str)-2||!isChar(*(str+i+2))))
				x++;
	}
	return strlen(str)+4*x;
}

char* notReplace(char* str) {
	int len=getLength(str);
	char* res=(char*)malloc((len+1)*sizeof(char));
	strcpy(res,"");
	int i=0,h=0;
	while(i<strlen(str)){
		if(i<=strlen(str)-2&&*(str+i)=='i'&&*(str+i+1)=='s'&&
			((i==0||!isChar(*(str+i-1))))&&(i==strlen(str)-2||!isChar(*(str+i+2)))){
				strcat(res,"is not");
				i+=2;
				h+=6;
		}else{
			*(res+h)=*(str+i);
			h++;
			i++;
		}
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=notReplace("is test");
	printf("notReplace(\"is test\")=%s\n",result);
	free(result);
	
	result=notReplace("is-is");
	printf("notReplace(\"is-is\")=%s\n",result);
	free(result);
	
	result=notReplace("This is right");
	printf("notReplace(\"This is right\")=%s\n",result);
	free(result);
	
	return 0;
}
