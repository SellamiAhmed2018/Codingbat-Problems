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


char* withoutString(char* base, char* remove) {
	char* res=(char*)malloc((strlen(base)+1)*sizeof(char));
	char* sub;
	char* sub2;
	int h=0,i=0;
	remove=lowerCase(remove);
	while(i<strlen(base)){
		if(i<=strlen(base)-strlen(remove)){
			sub=substring(base,i,i+strlen(remove));
			sub2=lowerCase(sub);
			free(sub);
			if(strcmp(sub2,remove)==0){
				i+=strlen(remove);
				free(sub2);
				continue;
			}
			free(sub2);
		}
		*(res+h)=*(base+i);
		h++;
		i++;
	}
	free(remove);
	*(res+h)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=withoutString("Hello there", "llo");
	printf("withoutString(\"Hello there\", \"llo\")=%s\n",result);
	free(result);
	
	result=withoutString("Hello there", "e");
	printf("withoutString(\"Hello there\", \"e\")=%s\n",result);
	free(result);

	result=withoutString("Hello there", "x");
	printf("withoutString(\"Hello there\", \"x\")=%s\n",result);
	free(result);

	return 0;
}
