/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

char** fizzArray2(int n){
	char** strings=(char**)malloc(n*sizeof(char*));
	int i=0,len;
	for(int i=0;i<n;i++){
		len=i!=0?floor(log10(i))+1:1;
		*(strings+i)=(char*)malloc((len+1)*sizeof(char));
		sprintf(*(strings+i),"%d",i);
		*(*(strings+i)+len)='\0';
	}
	return strings;
}

int main(int argc,char** argv){
	// Test Cases
	char** strings;
	int n;

	n=4;
	strings=fizzArray2(n);
	printf("fizzArray2(4)=[");
	for(int i=0;i<n;i++){
		printf(i==n-1?"\"%s\"":"\"%s\",",*(strings+i));
	}
	printf("]\n");
	free(strings);

	n=10;
	strings=fizzArray2(n);
	printf("fizzArray2(10)=[");
	for(int i=0;i<n;i++){
		printf(i==n-1?"\"%s\"":"\"%s\",",*(strings+i));
	}
	printf("]\n");
	free(strings);

	n=2;
	strings=fizzArray2(n);
	printf("fizzArray2(2)=[");
	for(int i=0;i<n;i++){
		printf(i==n-1?"\"%s\"":"\"%s\",",*(strings+i));
	}
	printf("]\n");
	free(strings);


	return 0;
}
