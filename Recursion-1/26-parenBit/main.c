/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++){
		*(res+i-start)=*(str+i);
	}
	*(res+end-start)='\0';
	return res;
}

void help(char* str,int* index,int* endIndex){
	if(*index>=strlen(str)||*index==*endIndex||(*(str+*index)=='('&&*(str+*endIndex)==')'))
		return;
	if(*(str+*index)!='('&&*(str+*endIndex)!=')'){
		*index+=1;
		*endIndex-=1;
	}else if(*(str+*endIndex)==')'){
		*index+=1;
	}else if(*(str+*index)=='('){
		*endIndex-=1;
	}
	help(str,index,endIndex);
}

char* parenBit(char* str){
	int start=0,end=strlen(str)-1;
	help(str,&start,&end);
	return substring(str,start,end+1);
}

int main(int argc,char** argv){
	// Test Cases
	char* res;

	res=parenBit("xyz(abc)123");
	printf("parenBit(\"xyz(abc)123\")=%s\n",res);
	free(res);

	res=parenBit("x(hello)");
	printf("parenBit(\"x(hello)\")=%s\n",res);
	free(res);

	res=parenBit("(xy)1");
	printf("parenBit(\"(xy)1\")=%s\n",res);
	free(res);

	res=parenBit("(abc)xyz");
	printf("parenBit(\"(abc)xyz\")=%s\n",res);
	free(res);

	return 0;
}
