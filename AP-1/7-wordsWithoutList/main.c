/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char** wordsWithoutList(char** words, int length,int n,int* len) {
	*len=0;
	char** res=(char**)malloc(*len*sizeof(char*));
	for(int i=0;i<length;i++){
		if(strlen(*(words+i))==n)
			continue;
		*len+=1;
		res=(char**)realloc(res,*len*sizeof(char*));
		*(res+*len-1)=(char*)malloc((strlen(*(words+i))+1)*sizeof(char));
		strcpy(*(res+*len-1),*(words+i));
		*(*(res+*len-1)+strlen(*(words+i)))='\0';
	}
	return res;
}

void init(char** chars){
	*chars=(char*)malloc(2*sizeof(char));
	strcpy(*chars,"a");
	*(*chars+1)='\0';

	*(chars+1)=(char*)malloc(3*sizeof(char));
	strcpy(*(chars+1),"bb");
	*(*(chars+1)+2)='\0';

	*(chars+2)=(char*)malloc(2*sizeof(char));
	strcpy(*(chars+2),"b");
	*(*(chars+2)+1)='\0';

	*(chars+3)=(char*)malloc(4*sizeof(char));
	strcpy(*(chars+3),"ccc");
	*(*(chars+3)+3)='\0';
}

int main(int argc,char** argv){
	// Test Cases
	char** words;
	int n,len;

	char** chars=(char**)malloc(4*sizeof(char*));
	init(chars);
	
	n=1;
	words=wordsWithoutList(chars,4,n,&len);
	printf("wordsWithoutList([\"a\", \"bb\", \"b\", \"ccc\"])=[");
	for(int i=0;i<len;i++){
		printf((i==len-1?"\"%s\"":"\"%s\","),*(words+i));
	}
	printf("]\n");
	free(words);

	n=3;
	words=wordsWithoutList(chars,4,n,&len);
	printf("wordsWithoutList([\"a\", \"bb\", \"b\", \"ccc\"])=[");
	for(int i=0;i<len;i++){
		printf((i==len-1?"\"%s\"":"\"%s\","),*(words+i));
	}
	printf("]\n");
	free(words);

	n=4;
	words=wordsWithoutList(chars,4,n,&len);
	printf("wordsWithoutList([\"a\", \"bb\", \"b\", \"ccc\"])=[");
	for(int i=0;i<len;i++){
		printf((i==len-1?"\"%s\"":"\"%s\","),*(words+i));
	}
	printf("]\n");
	free(words);

	free(chars);

	return 0;
}
