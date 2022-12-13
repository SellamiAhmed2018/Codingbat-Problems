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

char* lowerCase(char* str){
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	for(int i=0;i<strlen(str);i++){
		*(res+i)=*(str+i)>='A'&&*(str+i)<='Z'?*(str+i)+32:*(str+i);
	}
	*(res+strlen(str))='\0';
	return res;
}

char* wordEnds(char* str, char* word) {
	word=lowerCase(word);
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	char* sub1;
	char* sub2;
	int i=0,h=0;
	while(i<=strlen(str)-strlen(word)){
		sub1=substring(str,i,i+strlen(word));
		sub2=lowerCase(sub1);
		free(sub1);
		if(strcmp(sub2,word)==0){
			if(i>0){
				*(res+h)=*(str+i-1);
				h++;
			}
			if(i<strlen(str)-strlen(word)){
				*(res+h)=*(str+i+strlen(word));
				h++;
			}
			i+=strlen(word);
			free(sub2);
			continue;
		}
		free(sub2);
		i++;
	}
	free(word);
	*(res+h)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=wordEnds("abcXY123XYijk", "XY");
	printf("wordEnds(\"abcXY123XYijk\", \"XY\")=%s\n",result);
	free(result);

	result=wordEnds("XY123XY", "XY");
	printf("wordEnds(\"XY123XY\", \"XY\")=%s\n",result);
	free(result);

	result=wordEnds("XY1XY", "XY");
	printf("wordEnds(\"XY1XY\", \"XY\")=%s\n",result);
	free(result);

	result=wordEnds("abc1xyz1i1j", "1");
	printf("wordEnds(\"abc1xyz1i1j\", \"1\")=%s\n",result);
	free(result);

	return 0;
}
