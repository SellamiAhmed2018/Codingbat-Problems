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


char* plusOut(char* str, char* word) {
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	char* sub;
	int i=0;
	strcpy(res,"");
	while(i<strlen(str)){
		if(i<=strlen(str)-strlen(word)){
			sub=substring(str,i,i+strlen(word));
			if(strcmp(sub,word)==0){
				for(int h=0;h<strlen(word);h++){
					*(res+i)=*(word+h);
					i++;
				}
				free(sub);
				continue;
			}
			free(sub);
		}
		*(res+i)='+';
		i++;
	}
	*(res+strlen(str))='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=plusOut("12xy34", "xy");
	printf("plusOut(\"12xy34\", \"xy\")=%s\n",result);
	free(result);

	result=plusOut("12xy34", "1");
	printf("plusOut(\"12xy34\", \"1\")=%s\n",result);
	free(result);

	result=plusOut("12xy34xyabcxy", "xy");
	printf("plusOut(\"12xy34xyabcxy\", \"xy\")=%s\n",result);
	free(result);

	return 0;
}
