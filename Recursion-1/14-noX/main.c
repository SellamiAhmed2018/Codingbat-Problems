/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int getLength(char* str){
	int len=strlen(str);
	for(int i=0;i<strlen(str);i++){
		len-=*(str+i)=='x'?1:0;
	}
	return len;
}

void help(char* res,char* str,int index,int indexRes){
	if(index>=strlen(str))
		return;
	if(*(str+index)!='x'){
		*(res+indexRes)=*(str+index);
		help(res,str,index+1,indexRes+1);
	}else{
		help(res,str,index+1,indexRes);
	}
}

char* noX(char* str){
	int len=getLength(str);
	char* res=(char*)malloc((len+1)*sizeof(char));
	strcpy(res,"");
	help(res,str,0,0);
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* res;

	res=noX("xaxb");
	printf("noX(\"xaxb\")=%s\n",res);
	free(res);

	res=noX("abc");
	printf("noX(\"abc\")=%s\n",res);
	free(res);

	res=noX("xx");
	printf("noX(\"xx\")=%s\n",res);
	free(res);

	return 0;
}
