/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char** wordsWithout(char** words, char* target,int length,int* len) {
	*len=0;
	char** res=(char**)malloc(*len*sizeof(char*));
	for(int i=0;i<length;i++){
		if(strcmp(*(words+i),target)==0)
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

	*(chars+1)=(char*)malloc(2*sizeof(char));
	strcpy(*(chars+1),"b");
	*(*(chars+1)+1)='\0';

	*(chars+2)=(char*)malloc(2*sizeof(char));
	strcpy(*(chars+2),"c");
	*(*(chars+2)+1)='\0';

	*(chars+3)=(char*)malloc(2*sizeof(char));
	strcpy(*(chars+3),"a");
	*(*(chars+3)+1)='\0';
}

int main(int argc,char** argv){
	// Test Cases
	char** res;
	int len;

	char** chars=(char**)malloc(4*sizeof(char*));
	init(chars);
	
	res=wordsWithout(chars,"a",4,&len);
	printf("wordsWithout([\"a\", \"b\", \"c\", \"a\"], \"a\")=[");
	for(int i=0;i<len;i++){
		printf((i==len-1?"\"%s\"":"\"%s\","),*(res+i));
	}
	printf("]\n");
	free(res);

	res=wordsWithout(chars,"b",4,&len);
	printf("wordsWithout([\"a\", \"b\", \"c\", \"a\"], \"b\")=[");
	for(int i=0;i<len;i++){
		printf((i==len-1?"\"%s\"":"\"%s\","),*(res+i));
	}
	printf("]\n");
	free(res);

	res=wordsWithout(chars,"c",4,&len);
	printf("wordsWithout([\"a\", \"b\", \"c\", \"a\"], \"c\")=[");
	for(int i=0;i<len;i++){
		printf((i==len-1?"\"%s\"":"\"%s\","),*(res+i));
	}
	printf("]\n");
	free(res);

	free(chars);

	return 0;
}
