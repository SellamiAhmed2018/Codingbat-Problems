/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sumDigits(char* str) {
	int res=0;
	for(int i=0;i<strlen(str);i++){
		res+=*(str+i)>='0'&&*(str+i)<='9'?*(str+i)-'0':0;
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases

	printf("sumDigits(\"aa1bc2d3\")=%d\n",sumDigits("aa1bc2d3"));
	printf("sumDigits(\"aa11b33\")=%d\n",sumDigits("aa11b33"));
	printf("sumDigits(\"Chocolate\")=%d\n",sumDigits("Chocolate"));

	return 0;
}
