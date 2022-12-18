/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

int scoreUp(char** key, char** answers, int length) {
	int res=0;
	for(int i=0;i<length;i++){
		res+=strcmp(*(answers+i),*(key+i))==0?4:strcmp(*(answers+i),"?")==0?0:-1;
	}
	return res;
}

void init(char** chars,char* ch1,char* ch2,char* ch3, char* ch4){
	*chars=(char*)malloc((strlen(ch1)+1)*sizeof(char*));
	strcpy(*chars,ch1);
	*(*chars+strlen(ch1))='\0';

	*(chars+1)=(char*)malloc((strlen(ch2)+1)*sizeof(char*));
	strcpy(*(chars+1),ch2);
	*(*(chars+1)+strlen(ch2))='\0';

	*(chars+2)=(char*)malloc((strlen(ch3)+1)*sizeof(char*));
	strcpy(*(chars+2),ch3);
	*(*(chars+2)+strlen(ch3))='\0';

	*(chars+3)=(char*)malloc((strlen(ch4)+1)*sizeof(char*));
	strcpy(*(chars+3),ch4);
	*(*(chars+3)+strlen(ch4))='\0';
}

int main(int argc,char** argv){
	// Test Cases
	char** a=(char**)malloc(4*sizeof(char*));
	char** b=(char**)malloc(4*sizeof(char*));
	init(a,"a", "a", "b", "b");

	init(b,"a", "c", "b", "c");
	printf("scoreUp([\"a\", \"a\", \"b\", \"b\"], [\"a\", \"c\", \"b\", \"c\"])=%d\n",scoreUp(a,b,4));
	init(b,"a", "a", "b", "c");
	printf("scoreUp([\"a\", \"a\", \"b\", \"b\"], [\"a\", \"a\", \"b\", \"c\"])=%d\n",scoreUp(a,b,4));
	init(b,"a", "a", "b", "b");
	printf("scoreUp([\"a\", \"a\", \"b\", \"b\"], [\"a\", \"a\", \"b\", \"b\"])=%d\n",scoreUp(a,b,4));
	free(b);

	free(a);
	return 0;
}
