/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void help(char* res,char* str,int index,int indexRes){
	if(index>=strlen(str))
		return;
	else{
		*(res+indexRes)=*(str+index);
		if(index!=strlen(str)-1){
			*(res+indexRes+1)='*';
			help(res,str,index+1,indexRes+2);
		}else{
			help(res,str,index+1,indexRes+1);
		}
	}
}

char* allStar(char* str){
	int len=2*strlen(str)-1;
	char* res=(char*)malloc((len+1)*sizeof(char));
	strcpy(res,"");
	help(res,str,0,0);
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* res;

	res=allStar("hello");
	printf("allStar(\"hello\")=%s\n",res);
	free(res);

	res=allStar("abc");
	printf("allStar(\"abc\")=%s\n",res);
	free(res);

	res=allStar("ab");
	printf("allStar(\"ab\")=%s\n",res);
	free(res);

	return 0;
}
