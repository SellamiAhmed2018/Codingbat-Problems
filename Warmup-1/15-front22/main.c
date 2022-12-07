/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* front22(char* str) {
	char* res;
	int h;
	if(strlen(str)<=2){
		res=(char*)malloc((strlen(str)*3+1)*sizeof(char)); // 1 '\0'
		strcpy(res,str);
		strcat(res,str);
		strcat(res,str);
		h=strlen(str)*3;
	}else{
		res=(char*)malloc((strlen(str)+5)*sizeof(char)); // 2*2 chars + 1 '\0'
		*res=*str;
		*(res+1)=*(str+1);
		h=2;
		for(int i=0;i<strlen(str);i++){
			*(res+h)=*(str+i);
			h++;
		}
		*(res+h)=*str;
		*(res+h+1)=*(str+1);
		h+=2;
	}
	*(res+h)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=front22("kitten");
	printf("front22(\"kitten\")=%s\n",result);
	free(result);

	result=front22("Ha");
	printf("front22(\"Ha\")=%s\n",result);
	free(result);

	result=front22("abc");
	printf("front22(\"abc\")=%s\n",result);
	free(result);

	result=front22("ab");
	printf("front22(\"ab\")=%s\n",result);
	free(result);

	result=front22("a");
	printf("front22(\"a\")=%s\n",result);
	free(result);

	result=front22("");
	printf("front22(\"\")=%s\n",result);
	free(result);

	result=front22("Logic");
	printf("front22(\"Logic\")=%s\n",result);
	free(result);
	
	return 0;
}
