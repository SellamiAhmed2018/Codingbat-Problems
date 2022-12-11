/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

char* fizzString(char* str){
	char* res;
	bool cond1=(strlen(str)>=2&&*str=='f'&&*(str+strlen(str)-1)=='b'),
		cond2=(strlen(str)>=1&&*str=='f'),
		cond3=(strlen(str)>=1&&*(str+strlen(str)-1)=='b');
	int len=cond1?8:(cond2||cond3)?4:strlen(str);
	res=(char*)malloc((len+1)*sizeof(char));
	strcpy(res,cond1?"FizzBuzz":cond2?"Fizz":cond3?"Buzz":str);
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* res;

	res=fizzString("fig");
	printf("fizzString(\"fig\")=%s\n",res);
	free(res);

	res=fizzString("dib");
	printf("fizzString(\"dib\")=%s\n",res);
	free(res);

	res=fizzString("fib");
	printf("fizzString(\"fib\")=%s\n",res);
	free(res);
	
	return 0;
}
