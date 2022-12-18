/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void help(char* res,char* str,int index,int indexRes,int endRes){
	if(index>=strlen(str))
		return;
	if(*(str+index)=='x'){
		*(res+endRes)='x';
		help(res,str,index+1,indexRes,endRes-1);
	}else{
		*(res+indexRes)=*(str+index);
		help(res,str,index+1,indexRes+1,endRes);
	}
}

char* endX(char* str){
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	strcpy(res,"");
	help(res,str,0,0,strlen(str)-1);
	*(res+strlen(str))='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* res;

	res=endX("xxre");
	printf("endX(\"xxre\")=%s\n",res);
	free(res);

	res=endX("xxhixx");
	printf("endX(\"xxhixx\")=%s\n",res);
	free(res);

	res=endX("xhixhix");
	printf("endX(\"xhixhix\")=%s\n",res);
	free(res);

	return 0;
}
