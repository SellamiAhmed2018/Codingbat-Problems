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

char* minCat(char* a, char* b) {
	int state=(strlen(a)==strlen(b))?0:(strlen(a)>strlen(b))?-1:1;
	char* res;
	int len;
	char* sub;
	switch(state){
		case 0:{ // len(a)==len(b)
			len=strlen(a)+strlen(b);
			res=(char*)malloc((len+1)*sizeof(char));
			strcpy(res,a);
			strcat(res,b);
			break;
		}
		case -1:{ // len(a)>len(b)
			len=2*strlen(b);
			res=(char*)malloc((len+1)*sizeof(char));
			sub=substring(a,strlen(a)-strlen(b),strlen(a));
			strcpy(res,sub);
			free(sub);
			strcat(res,b);
			break;
		}
		case 1:{ // len(a)<len(b)
			len=2*strlen(a);
			res=(char*)malloc((len+1)*sizeof(char));
			strcpy(res,a);
			sub=substring(b,strlen(b)-strlen(a),strlen(b));
			strcat(res,sub);
			free(sub);
			break;
		}
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=minCat("Hello","Hi");
	printf("minCat(\"Hello\",\"Hi\")=%s\n",result);
	free(result);

	result=minCat("Hello","java");
	printf("minCat(\"Hello\",\"java\")=%s\n",result);
	free(result);

	result=minCat("java","Hello");
	printf("minCat(\"java\",\"Hello\")=%s\n",result);
	free(result);

	result=minCat("","");
	printf("minCat(\"\",\"\")=%s\n",result);
	free(result);
	
	return 0;
}
