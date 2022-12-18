/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

char* substring(char* str,int start,int end){
	char* res=(char*)malloc((end-start+1)*sizeof(char));
	for(int i=start;i<end;i++){
		*(res+i-start)=*(str+i);
	}
	*(res+end-start)='\0';
	return res;
}

void help(char* str,char* sub,int* start,int* end){
	if(strlen(str)<strlen(sub))
		return;
	char* sub1=substring(str,*start,*start+strlen(sub));
	char* sub2=substring(str,*end-strlen(sub),*end);
	bool cond1=strcmp(sub1,sub)==0?true:false,
		cond2=strcmp(sub2,sub)==0?true:false;
	free(sub1);
	free(sub2);
	if(cond1&&cond2)
		return;
	else if(cond1){
		*end-=1;
	}else if(cond2){
		*start+=1;
	}else{

		*end-=1;
		*start+=1;
	}
	help(str,sub,start,end);
}

int strDist(char* str,char* sub){
	int start=0,end=strlen(str);
	help(str,sub,&start,&end);
	return end-start>=0?end-start:0;
}

int main(int argc,char** argv){
	// Test Cases
	printf("strDist(\"catcowcat\", \"cat\")=%d\n",strDist("catcowcat", "cat"));
	printf("strDist(\"catcowcat\", \"cow\")=%d\n",strDist("catcowcat", "cow"));
	printf("strDist(\"cccatcowcatxx\", \"cat\")=%d\n",strDist("cccatcowcatxx", "cat"));
	printf("strDist(\"iiiijj\", \"ii\")=%d\n",strDist("iiiijj", "ii"));
	printf("strDist(\"xyx\", \"z\")=%d\n",strDist("xyx", "z"));
	return 0;
}
