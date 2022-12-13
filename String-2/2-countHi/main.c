/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int countHi(char* str) {
	int res=0;
	for(int i=0;i<strlen(str)-1;i++){
		res+=(*(str+i)=='h'&&*(str+i+1)=='i')?1:0;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases

	printf("countHi(\"abc hi ho\")=%d\n",countHi("abc hi ho"));
	printf("countHi(\"ABChi hi\")=%d\n",countHi("ABChi hi"));
	printf("countHi(\"hihi\")=%d\n",countHi("hihi"));

	return 0;
}
