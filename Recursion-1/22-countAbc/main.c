/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>

int help(char* str,int index){
	return index>=strlen(str)-2?0:*(str+index)=='a'&&*(str+index+1)=='b'&&(*(str+index+2)=='a'||*(str+index+2)=='c')?1+help(str,index+1):help(str,index+1);
}

int countAbc(char* str){
	return help(str,0);
}

int main(int argc,char** argv){
	// Test Cases
	printf("countAbc(\"abc\")=%d\n",countAbc("abc"));
	printf("countAbc(\"abcxxabc\")=%d\n",countAbc("abcxxabc"));
	printf("countAbc(\"abaxxaba\")=%d\n",countAbc("abaxxaba"));
	return 0;
}
