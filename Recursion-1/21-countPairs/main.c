/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>

int help(char* str,int index){
	return index>=strlen(str)-2?0:*(str+index)==*(str+index+2)?1+help(str,index+1):help(str,index+1);
}

int countPairs(char* str){
	return help(str,0);
}

int main(int argc,char** argv){
	// Test Cases
	printf("countPairs(\"axa\")=%d\n",countPairs("axa"));
	printf("countPairs(\"axax\")=%d\n",countPairs("axax"));
	printf("countPairs(\"axbx\")=%d\n",countPairs("axbx"));
	return 0;
}
