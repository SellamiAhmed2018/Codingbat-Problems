/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int maxBlock(char* str) {
	if(strlen(str)==0) return 0;
	int res=0,max=0;
	char old=*str;
	for(int i=0;i<strlen(str);i++){
		if(i==0||*(str+i)!=old){
			old=*(str+i);
			res=max>res?max:res;
			max=1;
		}else{
			max++;
		}
	}
	res=max!=0&&max>res?max:res;
	return res;
}

int main(int argc,char** argv){
	// Test Cases

	printf("maxBlock(\"hoopla\")=%d\n",maxBlock("hoopla"));
	printf("maxBlock(\"abbCCCddBBBxx\")=%d\n",maxBlock("abbCCCddBBBxx"));
	printf("maxBlock(\"\")=%d\n",maxBlock(""));

	return 0;
}
