/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>

int help(char* str,int index){
	return index>=strlen(str)-1?0:*(str+index)=='1'&&*(str+index+1)=='1'?1+help(str,index+2):help(str,index+1);
}

int count11(char* str){
	return help(str,0);
}

int main(int argc,char** argv){
	// Test Cases
	printf("count11(\"11abc11\")=%d\n",count11("11abc11"));
	printf("count11(\"abc11x11x11\")=%d\n",count11("abc11x11x11"));
	printf("count11(\"111\")=%d\n",count11("111"));
	return 0;
}
