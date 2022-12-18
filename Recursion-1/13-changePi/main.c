/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int getLength(char* str){
	int len=strlen(str);
	for(int i=0;i<strlen(str)-1;i++){
		len+=(*(str+i)=='p'&&*(str+i+1)=='i')?2:0;
	}
	return len;
}

void help(char* res,char* str,int index,int indexRes){
	if(index>=strlen(str))
		return;
	if(index<strlen(str)-1&&*(str+index)=='p'&&*(str+index+1)=='i'){
		strcat(res,"3.14");
		help(res,str,index+2,indexRes+4);
	}else{
		*(res+indexRes)=*(str+index);
		help(res,str,index+1,indexRes+1);
	}
}

char* changePi(char* str){
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

	res=changePi("xpix");
	printf("changePi(\"xpix\")=%s\n",res);
	free(res);

	res=changePi("pipi");
	printf("changePi(\"pipi\")=%s\n",res);
	free(res);

	res=changePi("pip");
	printf("changePi(\"pip\")=%s\n",res);
	free(res);

	return 0;
}
