/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sumNumbers(char* str) {
	int res=0,h=0,i;
	char* numb=(char*)malloc((strlen(str)+1)*sizeof(char));
	for(i=0;i<strlen(str);i++){
		if(*(str+i)>='0'&&*(str+i)<='9'){
			*(numb+h)=*(str+i);
			h++;
		}else{
			*(numb+h)='\0';
			res+=(strlen(numb)>0)?atoi(numb):0;
			strcpy(numb,"");
			h=0;
		}
	}
	*(numb+h)='\0';
	res+=(strlen(numb)>0)?atoi(numb):0;
	free(numb);
	return res;
}

int main(int argc,char** argv){
	// Test Cases

	printf("sumNumbers(\"abc123xyz\")=%d\n",sumNumbers("abc123xyz"));
	printf("sumNumbers(\"aa11b33\")=%d\n",sumNumbers("aa11b33"));
	printf("sumNumbers(\"7 11\")=%d\n",sumNumbers("7 11"));

	return 0;
}
