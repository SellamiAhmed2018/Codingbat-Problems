/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* front3(char* str) {
	char* res;
	int h;
	if(strlen(str)<3){
		res=(char*)malloc((strlen(str)*3+1)*sizeof(char));
		strcpy(res,str);
		strcat(res,str);
		strcat(res,str);
		h=strlen(str)*3;
	}else{
		res=(char*)malloc(10*sizeof(char));
		h=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				*(res+h)=*(str+j);
				h++;
			}
		}
	}
	*(res+h)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=front3("Java");
	printf("front3(\"Java\")=%s\n",result);
	free(result);

	result=front3("Chocolate");
	printf("front3(\"Chocolate\")=%s\n",result);
	free(result);

	result=front3("abc");
	printf("front3(\"abc\")=%s\n",result);
	free(result);

	result=front3("abcXYZ");
	printf("front3(\"abcXYZ\")=%s\n",result);
	free(result);

	result=front3("ab");
	printf("front3(\"ab\")=%s\n",result);
	free(result);

	result=front3("a");
	printf("front3(\"a\")=%s\n",result);
	free(result);

	result=front3("");
	printf("front3(\"\")=%s\n",result);
	free(result);

	return 0;
}
