/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++)
		*(res+i-start)=*(str+i);
	*(res+end-start)='\0';
	return res;
}

int last2(char* str) {
	int count=0,i;
	char* sub1=strlen(str)>=2?substring(str,strlen(str)-2,strlen(str)):NULL;
	char* sub2;
	for(i=0;strlen(str)>=2&&i<strlen(str)-2;i++){
		sub2=substring(str,i,i+2);
		count+=(strcmp(sub1,sub2)==0)?1:0;
		free(sub2);
	}
	free(sub1);
	return count;
}

int main(int argc,char** argv){
	// Test Cases
	printf("last2(\"hixxhi\")=%d\n",last2("hixxhi"));
	printf("last2(\"xaxxaxaxx\")=%d\n",last2("xaxxaxaxx"));
	printf("last2(\"axxxaaxx\")=%d\n",last2("axxxaaxx"));
	printf("last2(\"xxaxxaxxaxx\")=%d\n",last2("xxaxxaxxaxx"));
	printf("last2(\"xaxaxaxx\")=%d\n",last2("xaxaxaxx"));
	printf("last2(\"xxxx\")=%d\n",last2("xxxx"));
	printf("last2(\"13121312\")=%d\n",last2("13121312"));
	printf("last2(\"11212\")=%d\n",last2("11212"));
	printf("last2(\"13121311\")=%d\n",last2("13121311"));
	printf("last2(\"1717171\")=%d\n",last2("1717171"));
	printf("last2(\"hi\")=%d\n",last2("hi"));
	printf("last2(\"h\")=%d\n",last2("h"));
	printf("last2(\"\")=%d\n",last2(""));
	
	return 0;
}
