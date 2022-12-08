/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int getLength(int x){
	int res=0;
	for(int i=0;i<=x;i++)
		res+=i;
	return res;
}

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++)
		*(res+i-start)=*(str+i);
	*(res+end-start)='\0';
	return res;
}

char* stringSplosion(char* str) {
	int len=getLength(strlen(str));
	char* res=(char*)malloc((len+1)*sizeof(char));
	char* sub;
	for(int i=1;i<=strlen(str);i++){
		sub=substring(str,0,i);
		(i==1)?strcpy(res,sub):strcat(res,sub);
		free(sub);
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=stringSplosion("Code");
	printf("stringSplosion(\"Code\")=%s\n",result);
	free(result);

	result=stringSplosion("abc");
	printf("stringSplosion(\"abc\")=%s\n",result);
	free(result);

	result=stringSplosion("ab");
	printf("stringSplosion(\"ab\")=%s\n",result);
	free(result);

	result=stringSplosion("x");
	printf("stringSplosion(\"x\")=%s\n",result);
	free(result);

	result=stringSplosion("fade");
	printf("stringSplosion(\"fade\")=%s\n",result);
	free(result);

	result=stringSplosion("There");
	printf("stringSplosion(\"There\")=%s\n",result);
	free(result);

	result=stringSplosion("Kitten");
	printf("stringSplosion(\"Kitten\")=%s\n",result);
	free(result);

	result=stringSplosion("Bye");
	printf("stringSplosion(\"Bye\")=%s\n",result);
	free(result);

	result=stringSplosion("Good");
	printf("stringSplosion(\"Good\")=%s\n",result);
	free(result);
	
	result=stringSplosion("Bad");
	printf("stringSplosion(\"Bad\")=%s\n",result);
	free(result);

	return 0;
}
