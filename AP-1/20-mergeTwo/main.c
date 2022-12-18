/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char** mergeTwo(char** a, char** b, int n, int lengthA, int lengthB) {
	char** res=(char**)malloc(n*sizeof(char*));
	int indexA=0,indexB=0,h=0;
	while(h<n){
		if(indexA<lengthA&&indexB<lengthB&&strcmp(*(a+indexA),*(b+indexB))==0){
			*(res+h)=*(a+indexA);
			indexA++;
			indexB++;
			h++;
		}else if(indexB>=lengthB||strcmp(*(a+indexA),*(b+indexB))<0){
			*(res+h)=*(a+indexA);
			indexA++;
			h++;
		}else if(indexA>=lengthA||strcmp(*(a+indexA),*(b+indexB))>0){
			*(res+h)=*(b+indexB);
			indexB++;
			h++;
		}
	}
	return res;
}

void init(char** chars,char* ch1,char* ch2,char* ch3){
	*chars=(char*)malloc((strlen(ch1)+1)*sizeof(char*));
	strcpy(*chars,ch1);
	*(*chars+strlen(ch1))='\0';

	*(chars+1)=(char*)malloc((strlen(ch2)+1)*sizeof(char*));
	strcpy(*(chars+1),ch2);
	*(*(chars+1)+strlen(ch2))='\0';

	*(chars+2)=(char*)malloc((strlen(ch3)+1)*sizeof(char*));
	strcpy(*(chars+2),ch3);
	*(*(chars+2)+strlen(ch3))='\0';
}

int main(int argc,char** argv){
	// Test Cases
	char** res;

	char** a=(char**)malloc(3*sizeof(char*));
	char** b=(char**)malloc(3*sizeof(char*));
	
	init(a,"a", "c", "z");
	init(b,"b", "f", "z");
	res=mergeTwo(a,b,3,3,3);
	printf("mergeTwo([\"a\", \"c\", \"z\"], [\"b\",\"f\",\"z\"], 3)=[");
	for(int i=0;i<3;i++){
		printf((i==2?"\"%s\"":"\"%s\","),*(res+i));
	}
	printf("]\n");
	free(res);

	init(a,"a", "c", "z");
	init(b,"c", "f", "z");
	res=mergeTwo(a,b,3,3,3);
	printf("mergeTwo([\"a\", \"c\", \"z\"], [\"c\",\"f\",\"z\"], 3)=[");
	for(int i=0;i<3;i++){
		printf((i==2?"\"%s\"":"\"%s\","),*(res+i));
	}
	printf("]\n");
	free(res);

	init(a,"f", "g", "z");
	init(b,"c", "f", "g");
	res=mergeTwo(a,b,3,3,3);
	printf("mergeTwo([\"f\", \"g\", \"z\"], [\"c\",\"f\",\"g\"], 3)=[");
	for(int i=0;i<3;i++){
		printf((i==2?"\"%s\"":"\"%s\","),*(res+i));
	}
	printf("]\n");
	free(res);

	free(a);
	free(b);

	return 0;
}
