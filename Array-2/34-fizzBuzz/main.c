/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

char** fizzBuzz(int start, int end){
	char** strings=(char**)malloc((end-start)*sizeof(char*));
	int i=0,len;
	for(int i=start;i<end;i++){
		if(i%15==0){
			len=8;
			*(strings+i-start)=(char*)malloc((len+1)*sizeof(char));
			strcpy(*(strings+i-start),"FizzBuzz");
		}else if(i%5==0){
			len=4;
			*(strings+i-start)=(char*)malloc((len+1)*sizeof(char));
			strcpy(*(strings+i-start),"Buzz");
		}else if(i%3==0){
			len=4;
			*(strings+i-start)=(char*)malloc((len+1)*sizeof(char));
			strcpy(*(strings+i-start),"Fizz");
		}else{
			len=i<0?floor(log10(i))+2:i!=0?floor(log10(i))+1:1;
			*(strings+i-start)=(char*)malloc((len+1)*sizeof(char));
			sprintf(*(strings+i-start),"%d",i);
		}
		*(*(strings+i-start)+len)='\0';
	}
	return strings;
}

int main(int argc,char** argv){
	// Test Cases
	char** strings;
	int start,end;

	start=1;
	end=6;
	strings=fizzBuzz(start,end);
	printf("fizzBuzz(1, 6)=[");
	for(int i=start;i<end;i++){
		printf(i==end-1?"\"%s\"":"\"%s\",",*(strings+i-start));
	}
	printf("]\n");
	free(strings);

	start=1;
	end=8;
	strings=fizzBuzz(start,end);
	printf("fizzBuzz(1, 8)=[");
	for(int i=start;i<end;i++){
		printf(i==end-1?"\"%s\"":"\"%s\",",*(strings+i-start));
	}
	printf("]\n");
	free(strings);

	start=1;
	end=11;
	strings=fizzBuzz(start,end);
	printf("fizzBuzz(1, 11)=[");
	for(int i=start;i<end;i++){
		printf(i==end-1?"\"%s\"":"\"%s\",",*(strings+i-start));
	}
	printf("]\n");
	free(strings);

	return 0;
}
