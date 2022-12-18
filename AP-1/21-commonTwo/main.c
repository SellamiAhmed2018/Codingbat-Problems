/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int commonTwo(char** a, char** b, int lengthA, int lengthB) {
	int res=0,indexA=0,indexB=0;
	char* old=NULL;
	while(indexA!=lengthA&&indexB!=lengthB){
		if(strcmp(*(a+indexA),*(b+indexB))<0){
			indexA++;
		}else if(strcmp(*(a+indexA),*(b+indexB))>0){
			indexB++;
		}else{
			if(old==NULL||(old!=NULL&&strcmp(*(a+indexA),old)!=0)){
				res++;
				old=*(a+indexA);
			}
			indexA++;
			indexB++;
		}
	}
	return res;
}

void add(char** strings,int index,char* str2){
	*(strings+index)=(char*)malloc((strlen(str2)+1)*sizeof(char));
	strcpy(*(strings+index),str2);
	*(*(strings+index)+strlen(str2))='\0';
}

int main(int argc,char** argv){
	// Test Cases
	char** a;
	char** b;

	a=(char**)malloc(3*sizeof(char*));
	b=(char**)malloc(4*sizeof(char*));
	add(a,0,"a");
	add(a,1,"c");
	add(a,2,"x");
	add(b,0,"b");
	add(b,1,"c");
	add(b,2,"d");
	add(b,3,"x");
	printf("commonTwo([\"a\", \"c\", \"x\"], [\"b\", \"c\", \"d\", \"x\"])=%d\n",commonTwo(a,b,3,4));
	free(a);
	free(b);

	a=(char**)malloc(3*sizeof(char*));
	b=(char**)malloc(5*sizeof(char*));
	add(a,0,"a");
	add(a,1,"c");
	add(a,2,"x");
	add(b,0,"a");
	add(b,1,"b");
	add(b,2,"c");
	add(b,3,"x");
	add(b,4,"z");
	printf("commonTwo([\"a\", \"c\", \"x\"], [\"a\", \"b\", \"c\", \"x\", \"z\"])=%d\n",commonTwo(a,b,3,5));
	free(a);
	free(b);

	a=(char**)malloc(3*sizeof(char*));
	b=(char**)malloc(3*sizeof(char*));
	add(a,0,"a");
	add(a,1,"b");
	add(a,2,"c");
	add(b,0,"a");
	add(b,1,"b");
	add(b,2,"c");
	printf("commonTwo([\"a\", \"b\", \"c\"], [\"a\", \"b\", \"c\"])=%d\n",commonTwo(a,b,3,3));
	free(a);
	free(b);

	a=(char**)malloc(5*sizeof(char*));
	b=(char**)malloc(5*sizeof(char*));
	add(a,0,"a");
	add(a,1,"a");
	add(a,2,"b");
	add(a,3,"b");
	add(a,4,"c");
	add(b,0,"a");
	add(b,1,"b");
	add(b,2,"b");
	add(b,3,"b");
	add(b,4,"c");
	printf("commonTwo([\"a\", \"a\", \"b\", \"b\", \"c\"], [\"a\", \"b\", \"b\", \"b\", \"c\"])=%d\n",commonTwo(a,b,5,5));
	free(a);
	free(b);

	return 0;
}
