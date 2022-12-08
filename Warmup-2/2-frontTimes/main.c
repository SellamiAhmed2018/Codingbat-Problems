/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* frontTimes(char* str,int n) {
	int len=(strlen(str)<3?strlen(str):3)*n;
	char* res=(char*)malloc((len+1)*sizeof(char));
	int h=0;
	for(int i=0;i<n;i++){
		if(strlen(str)>=3){
			*(res+h)=*str;
			*(res+h+1)=*(str+1);
			*(res+h+2)=*(str+2);
			h+=3;
		}else{
			(i==0)?strcpy(res,str):strcat(res,str);
		}
	}
	*(res+len)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=frontTimes("Chocolate", 2);
	printf("frontTimes(\"Chocolate\", 2)=%s\n",result);
	free(result);

	result=frontTimes("Chocolate", 3);
	printf("frontTimes(\"Chocolate\", 3)=%s\n",result);
	free(result);

	result=frontTimes("Abc", 3);
	printf("frontTimes(\"Abc\", 3)=%s\n",result);
	free(result);

	result=frontTimes("Ab", 4);
	printf("frontTimes(\"Ab\", 4)=%s\n",result);
	free(result);

	result=frontTimes("A", 4);
	printf("frontTimes(\"A\", 4)=%s\n",result);
	free(result);

	result=frontTimes("", 4);
	printf("frontTimes(\"\", 4)=%s\n",result);
	free(result);

	result=frontTimes("Abc", 0);
	printf("frontTimes(\"Abc\", 0)=%s\n",result);
	free(result);

	return 0;
}
