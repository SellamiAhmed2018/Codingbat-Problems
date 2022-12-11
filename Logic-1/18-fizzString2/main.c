/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

char* fizzString2(int n){
	char* res;
	bool cond1=n%15==0,cond2=n%3==0,cond3=n%5==0;
	int len=cond1?9:cond2||cond3?5:floor(log10(n))+2;
	res=(char*)malloc((len+1)*sizeof(char));
	strcpy(res,cond1?"FizzBuzz":cond2?"Fizz":cond3?"Buzz":"");
	if(!cond1&&!cond2&&!cond3){
		char str[len-1];
		sprintf(str,"%d",n);
		strcpy(res,str);
	}
	*(res+len-1)='!';
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* res;

	res=fizzString2(1);
	printf("fizzString2(1)=%s\n",res);
	free(res);

	res=fizzString2(2);
	printf("fizzString2(2)=%s\n",res);
	free(res);

	res=fizzString2(3);
	printf("fizzString2(3)=%s\n",res);
	free(res);
	
	return 0;
}
