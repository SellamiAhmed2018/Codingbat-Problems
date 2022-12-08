/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++)
		*(res+i-start)=*(str+i);
	*(res+end-start)='\0';
	return res;
}

char* seeColor(char* str) {
	char* sub1=(strlen(str)>=4)?substring(str,0,4):NULL;
	char* sub2=(strlen(str)>=3)?substring(str,0,3):NULL;
	if(sub1!=NULL&&strcmp(sub1,"blue")==0){
		free(sub2);
		return sub1;
	}else if(sub2!=NULL&&strcmp(sub2,"red")==0){
		free(sub1);
		return sub2;
	}
	free(sub1);
	free(sub2);
	char* res=(char*)malloc(sizeof(char));
	*res='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=seeColor("redxx");
	printf("seeColor(\"redxx\")=%s\n",result);
	free(result);

	result=seeColor("xxred");
	printf("seeColor(\"xxred\")=%s\n",result);
	free(result);

	result=seeColor("blueTimes");
	printf("seeColor(\"blueTimes\")=%s\n",result);
	free(result);
	
	return 0;
}
