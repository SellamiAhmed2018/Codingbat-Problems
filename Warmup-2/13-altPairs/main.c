/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* altPairs(char* str) {
	char* res=(char*)malloc((strlen(str)+1)*sizeof(char));
	int h=0,toAdd=1;
	for(int i=0;i<strlen(str);i+=toAdd){
		*(res+h)=*(str+i);
		h++;
		toAdd=(i!=0&&toAdd==1)?3:1;
	}
	*(res+h)='\0';
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* result;

	result=altPairs("kitten");
	printf("altPairs(\"kitten\")=%s\n",result);
	free(result);

	result=altPairs("Chocolate");
	printf("altPairs(\"Chocolate\")=%s\n",result);
	free(result);

	result=altPairs("CodingHorror");
	printf("altPairs(\"CodingHorror\")=%s\n",result);
	free(result);

	result=altPairs("yak");
	printf("altPairs(\"yak\")=%s\n",result);
	free(result);

	result=altPairs("ya");
	printf("altPairs(\"ya\")=%s\n",result);
	free(result);

	result=altPairs("y");
	printf("altPairs(\"y\")=%s\n",result);
	free(result);

	result=altPairs("");
	printf("altPairs(\"\")=%s\n",result);
	free(result);

	result=altPairs("ThisThatTheOther");
	printf("altPairs(\"ThisThatTheOther\")=%s\n",result);
	free(result);
	
	return 0;
}
