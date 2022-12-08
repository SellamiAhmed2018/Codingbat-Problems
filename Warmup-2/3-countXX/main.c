/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>

int countXX(char* str) {
	int count=0,i;
	for(i=0;strlen(str)>=2&&i<strlen(str)-1;i++)
		count+=(*(str+i)=='x'&&*(str+i+1)=='x')?1:0;
	return count;
}

int main(int argc,char** argv){
	// Test Cases
	printf("countXX(\"abcxx\")=%d\n",countXX("abcxx"));
	printf("countXX(\"xxx\")=%d\n",countXX("xxx"));
	printf("countXX(\"xxxx\")=%d\n",countXX("xxxx"));
	printf("countXX(\"abc\")=%d\n",countXX("abc"));
	printf("countXX(\"Hello there\")=%d\n",countXX("Hello there"));
	printf("countXX(\"Hexxo thxxe\")=%d\n",countXX("Hexxo thxxe"));
	printf("countXX(\"\")=%d\n",countXX(""));
	printf("countXX(\"Kittens\")=%d\n",countXX("Kittens"));
	printf("countXX(\"Kittensxxx\")=%d\n",countXX("Kittensxxx"));
	
	return 0;
}
