/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++)
		*(res+i-start)=*(str+i);
	*(res+end-start)='\0';
	return res;
}

char* makeOutWord(char* out, char* word) {
	char* res=(char*)malloc((strlen(out)+strlen(word)+1)*sizeof(char));
	char* sub=substring(out,0,strlen(out)/2);
	strcpy(res,sub);
	free(sub);
	strcat(res,word);
	sub=substring(out,strlen(out)/2,strlen(out));
	strcat(res,sub);
	free(sub);
	*(res+strlen(out)+strlen(word))='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=makeOutWord("<<>>", "Yay");
	printf("makeOutWord(\"<<>>\", \"Yay\")=%s\n",result);
	free(result);

	result=makeOutWord("<<>>", "WooHoo");
	printf("makeOutWord(\"<<>>\", \"WooHoo\")=%s\n",result);
	free(result);

	result=makeOutWord("[[]]", "word");
	printf("makeOutWord(\"[[]]\", \"word\")=%s\n",result);
	free(result);

	return 0;
}
