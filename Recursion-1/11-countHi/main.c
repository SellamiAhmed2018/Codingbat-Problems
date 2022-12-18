/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>

int help(char* str,int index){
	return index>=strlen(str)-1?0:*(str+index)=='h'&&*(str+index+1)=='i'?1+help(str,index+2):help(str,index+1);
}

int countHi(char* str){
	return help(str,0);
}

int main(int argc,char** argv){
	// Test Cases
	printf("countHi(\"xxhixx\")=%d\n",countHi("xxhixx"));
	printf("countHi(\"xhixhix\")=%d\n",countHi("xhixhix"));
	printf("countHi(\"hi\")=%d\n",countHi("hi"));
	return 0;
}
