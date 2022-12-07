/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* delDel(char* str) {
	char* res;
	int h;
	if(strlen(str)>=4 && *(str+1)=='d' && *(str+2)=='e' && *(str+3)=='l'){
		res=(char*)malloc((strlen(str)-2)*sizeof(char)); // -3 "del" + 1 '\0' == -2
		*res=*str;
		h=1;
		for(int i=4;i<strlen(str);i++){
			*(res+h)=*(str+i);
			h++;
		}
	}else{
		res=(char*)malloc((strlen(str)+1)*sizeof(char));
		strcpy(res,str);
		h=strlen(str);
	}
	*(res+h)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=delDel("adelbc");
	printf("delDel(\"adelbc\")=%s\n",result);
	free(result);

	result=delDel("adelHello");
	printf("delDel(\"adelHello\")=%s\n",result);
	free(result);

	result=delDel("adedbc");
	printf("delDel(\"adedbc\")=%s\n",result);
	free(result);

	result=delDel("abcdel");
	printf("delDel(\"abcdel\")=%s\n",result);
	free(result);

	result=delDel("add");
	printf("delDel(\"add\")=%s\n",result);
	free(result);

	result=delDel("ad");
	printf("delDel(\"ad\")=%s\n",result);
	free(result);

	result=delDel("a");
	printf("delDel(\"a\")=%s\n",result);
	free(result);

	result=delDel("");
	printf("delDel(\"\")=%s\n",result);
	free(result);
	
	result=delDel("del");
	printf("delDel(\"del\")=%s\n",result);
	free(result);
	
	result=delDel("adel");
	printf("delDel(\"adel\")=%s\n",result);
	free(result);
	
	result=delDel("aadelbb");
	printf("delDel(\"aadelbb\")=%s\n",result);
	free(result);

	return 0;
}
