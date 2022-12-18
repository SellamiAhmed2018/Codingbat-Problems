/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>

int help(char* str,int index){
	return index==strlen(str)?0:*(str+index)=='x'?1+help(str,index+1):help(str,index+1);
}

int countX(char* str){
	return help(str,0); // need help function because the memory problem when substringing ; also this one is faster than substring
}

int main(int argc,char** argv){
	// Test Cases
	printf("countX(\"xxhixx\")=%d\n",countX("xxhixx"));
	printf("countX(\"xhixhix\")=%d\n",countX("xhixhix"));
	printf("countX(\"hi\")=%d\n",countX("hi"));
	return 0;
}
