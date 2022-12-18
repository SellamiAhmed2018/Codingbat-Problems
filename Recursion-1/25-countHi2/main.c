/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>

int help(char* str,int index){
	return index>=strlen(str)-1?0:(index==0&&*(str+index)=='h'&&*(str+index+1)=='i')||(index<strlen(str)-2&&*(str+index)!='x'&&*(str+index+1)=='h'&&*(str+index+2)=='i')?1+help(str,index+1):help(str,index+1);
}

int countHi2(char* str){
	return help(str,0);
}

int main(int argc,char** argv){
	// Test Cases
	printf("countHi2(\"ahixhi\")=%d\n",countHi2("ahixhi"));
	printf("countHi2(\"ahibhi\")=%d\n",countHi2("ahibhi"));
	printf("countHi2(\"xhixhi\")=%d\n",countHi2("xhixhi"));
	printf("countHi2(\"hihihi\")=%d\n",countHi2("hihihi"));
	return 0;
}
