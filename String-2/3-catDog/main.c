/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

bool catDog(char* str) {
	int cats=0,dogs=0;
	for(int i=0;i<strlen(str)-2;i++){
		cats+=(*(str+i)=='c'&&*(str+i+1)=='a'&&*(str+i+2)=='t')?1:0;
		dogs+=(*(str+i)=='d'&&*(str+i+1)=='o'&&*(str+i+2)=='g')?1:0;
	}
	return cats==dogs;
}

int main(int argc,char** argv){
	// Test Cases

	printf("catDog(\"catdog\")=%s\n",(catDog("catdog")==0)?"false":"true");
	printf("catDog(\"catcat\")=%s\n",(catDog("catcat")==0)?"false":"true");
	printf("catDog(\"1cat1cadodog\")=%s\n",(catDog("1cat1cadodog")==0)?"false":"true");

	return 0;
}
