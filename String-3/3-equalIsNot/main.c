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

bool equalIsNot(char* str) {
	int numb1=0, // appearances of "is"
		numb2=0, // appearances of "not"
		i=0;
	char* sub;
	while(i<strlen(str)){
		if(i<=strlen(str)-2){
			sub=substring(str,i,i+2);
			if(strcmp(sub,"is")==0){
				numb1++;
				i+=2;
				free(sub);
				continue;
			}
			free(sub);
		}
		if(i<=strlen(str)-3){
			sub=substring(str,i,i+3);
			if(strcmp(sub,"not")==0){
				numb2++;
				i+=3;
				free(sub);
				continue;
			}
			free(sub);
		}
		i++;
	}
	return numb1==numb2;
}

int main(int argc,char** argv){
	// Test Cases

	printf("equalIsNot(\"This is not\")=%s\n",(equalIsNot("This is not")==0)?"false":"true");
	printf("equalIsNot(\"This is notnot\")=%s\n",(equalIsNot("This is notnot")==0)?"false":"true");
	printf("equalIsNot(\"noisxxnotyynotxisi\")=%s\n",(equalIsNot("noisxxnotyynotxisi")==0)?"false":"true");

	return 0;
}
