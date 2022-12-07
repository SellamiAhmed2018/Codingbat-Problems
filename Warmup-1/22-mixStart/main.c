/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool mixStart(char* str) {
	return (strlen(str)>=3 && *(str+1)=='i' && *(str+2)=='x'); // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("mixStart(\"mix snacks\")=%s\n",(mixStart("mix snacks"))==0?"false":"true");
	printf("mixStart(\"pix snacks\")=%s\n",(mixStart("pix snacks")==0)?"false":"true");
	printf("mixStart(\"piz snacks\")=%s\n",(mixStart("piz snacks")==0)?"false":"true");
	printf("mixStart(\"nix\")=%s\n",(mixStart("nix")==0)?"false":"true");
	printf("mixStart(\"ni\")=%s\n",(mixStart("ni")==0)?"false":"true");
	printf("mixStart(\"n\")=%s\n",(mixStart("n")==0)?"false":"true");
	printf("mixStart(\"\")=%s\n",(mixStart("")==0)?"false":"true");

	return 0;
}
