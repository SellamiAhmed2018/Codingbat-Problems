/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char** wordsCount(char** words, int n) {
	char** res=(char**)malloc(n*sizeof(char*));
	for(int i=0;i<n;i++){
		*(res+i)=(char*)malloc((strlen(*(words+i))+1)*sizeof(char));
		strcpy(*(res+i),*(words+i));
		*(res+i+strlen(*(words+i)))='\0';
	}
	return res;
}

void init(char** chars){
	*chars=(char*)malloc(2*sizeof(char));
	strcpy(*chars,"a");
	*(*chars+1)='\0';

	*(chars+1)=(char*)malloc(2*sizeof(char));
	strcpy(*(chars+1),"b");
	*(*(chars+1)+1)='\0';

	*(chars+2)=(char*)malloc(2*sizeof(char));
	strcpy(*(chars+2),"c");
	*(*(chars+2)+1)='\0';

	*(chars+3)=(char*)malloc(2*sizeof(char));
	strcpy(*(chars+3),"d");
	*(*(chars+3)+1)='\0';
}

int main(int argc,char** argv){
	// Test Cases
	char** words;
	int n;

	char** chars=(char**)malloc(4*sizeof(char*));
	init(chars);
	
	n=1;
	words=wordsCount(chars,n);
	printf("wordsCount([\"a\", \"b\", \"c\", \"d\"])=[");
	for(int i=0;i<n;i++){
		printf((i==n-1?"\"%s\"":"\"%s\","),*(words+i));
	}
	printf("]\n");
	free(words);

	n=2;
	words=wordsCount(chars,n);
	printf("wordsCount([\"a\", \"b\", \"c\", \"d\"])=[");
	for(int i=0;i<n;i++){
		printf((i==n-1?"\"%s\"":"\"%s\","),*(words+i));
	}
	printf("]\n");
	free(words);

	n=3;
	words=wordsCount(chars,n);
	printf("wordsCount([\"a\", \"b\", \"c\", \"d\"])=[");
	for(int i=0;i<n;i++){
		printf((i==n-1?"\"%s\"":"\"%s\","),*(words+i));
	}
	printf("]\n");
	free(words);

	free(chars);

	return 0;
}
