/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int wordsCount(char words[4][10], int length,int len) {
	int res=0;
	for(int i=0;i<length;i++){
		res+=strlen(*(words+i))==len?1:0;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char chars1[4][10]={{'a','\0'}, {'b','b','\0'}, {'b','\0'}, {'c','c','c','\0'}};
	printf("wordsCount([\"a\", \"bb\", \"b\", \"ccc\"])=%d\n",wordsCount(chars1,4,1));

	char chars2[4][10]={{'a','\0'}, {'b','b','\0'}, {'b','\0'}, {'c','c','c','\0'}};
	printf("wordsCount([\"a\", \"bb\", \"b\", \"ccc\"])=%d\n",wordsCount(chars2,4,3));

	char chars3[4][10]={{'a','\0'}, {'b','b','\0'}, {'b','\0'}, {'c','c','c','\0'}};
	printf("wordsCount([\"a\", \"bb\", \"b\", \"ccc\"])=%d\n",wordsCount(chars3,4,4));

	return 0;
}
