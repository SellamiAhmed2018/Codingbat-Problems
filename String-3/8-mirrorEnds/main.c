/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	int len=(end<=start)?0:end-start+1;
	char* res=(char*)malloc(len*sizeof(char));
	for(int i=start;i<end;i++)
		*(res+i-start)=*(str+i);
	*(res+(len==0?0:len-1))='\0';
	return res;
}

char* reverse(char* str,int end,int start){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	int h=0;
	for(int i=end-1;i>=start;i--){
		*(res+h)=*(str+i);
		h++;
	}
	*(res+h)='\0';
	return res;
}

char* mirrorEnds(char* string) {
	char* res=(char*)malloc((strlen(string)+1)*sizeof(char));
	char* sub1;
	char* sub2;
	int i;
	for(i=1;i<strlen(string)+1;i++){
		sub1=substring(string,0,i);
		sub2=reverse(string,strlen(string),strlen(string)-i);
		if(strcmp(sub1,sub2)!=0){
			free(sub1);
			free(sub2);
			break;
		}else{
			strcpy(res,sub1);
		}
		free(sub1);
		free(sub2);
	}
	*(res+i)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=mirrorEnds("abXYZba");
	printf("mirrorEnds(\"abXYZba\")=%s\n",result);
	free(result);
	
	result=mirrorEnds("abca");
	printf("mirrorEnds(\"abca\")=%s\n",result);
	free(result);
	
	result=mirrorEnds("aba");
	printf("mirrorEnds(\"aba\")=%s\n",result);
	free(result);
	
	return 0;
}
