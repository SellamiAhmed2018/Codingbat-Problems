/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* stringYak(char* str) {
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	int h,i;
	i=0;
	h=0;
	while(i<strlen(str)){
		if(i<strlen(str)-2&&*(str+i)=='y'&&*(str+i+2)=='k'){
			i+=3;
		}else{
			*(res+h)=*(str+i);
			h++;
			i++;
		}
	}
	*(res+h)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=stringYak("yakpak");
	printf("stringYak(\"yakpak\")=%s\n",result);
	free(result);

	result=stringYak("pakyak");
	printf("stringYak(\"pakyak\")=%s\n",result);
	free(result);

	result=stringYak("yak123ya");
	printf("stringYak(\"yak123ya\")=%s\n",result);
	free(result);

	result=stringYak("yak");
	printf("stringYak(\"yak\")=%s\n",result);
	free(result);

	result=stringYak("yakxxxyak");
	printf("stringYak(\"yakxxxyak\")=%s\n",result);
	free(result);

	result=stringYak("HiyakHi");
	printf("stringYak(\"HiyakHi\")=%s\n",result);
	free(result);

	result=stringYak("xxxyakyyyakzzz");
	printf("stringYak(\"xxxyakyyyakzzz\")=%s\n",result);
	free(result);

	return 0;
}
