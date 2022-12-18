/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

int matchUp(char** a, char** b, int length) {
	int res=0;
	for(int i=0;i<length;i++)
		res+=strlen(*(a+i))>0&&strlen(*(b+i))>0&&*(*(a+i))==*(*(b+i))?1:0;
	return res;
}

void init(char** chars,char* ch1,char* ch2,char* ch3){
	*chars=(char*)malloc((strlen(ch1)+1)*sizeof(char*));
	strcpy(*chars,ch1);
	*(*chars+strlen(ch1))='\0';

	*(chars+1)=(char*)malloc((strlen(ch2)+1)*sizeof(char*));
	strcpy(*(chars+1),ch2);
	*(*(chars+1)+strlen(ch2))='\0';

	*(chars+2)=(char*)malloc((strlen(ch3)+1)*sizeof(char*));
	strcpy(*(chars+2),ch3);
	*(*(chars+2)+strlen(ch3))='\0';
}

int main(int argc,char** argv){
	// Test Cases
	char** a=(char**)malloc(3*sizeof(char*));
	char** b=(char**)malloc(3*sizeof(char*));
	init(a,"aa", "bb", "cc");

	init(b,"aaa", "xx", "bb");
	printf("matchUp([\"aa\", \"bb\", \"cc\"], [\"aaa\", \"xx\", \"bb\"])=%d\n",matchUp(a,b,3));
	init(b,"aaa", "b", "bb");
	printf("matchUp([\"aa\", \"bb\", \"cc\"], [\"aaa\", \"b\", \"bb\"])=%d\n",matchUp(a,b,3));
	init(b,"", "", "ccc");
	printf("matchUp([\"aa\", \"bb\", \"cc\"], [\"\", \"\", \"ccc\"])=%d\n",matchUp(a,b,3));
	free(b);

	free(a);
	return 0;
}
