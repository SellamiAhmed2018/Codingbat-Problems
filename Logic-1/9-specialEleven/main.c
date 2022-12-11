/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool specialEleven(int n){
	return n%11<=1;
}

int main(int argc,char** argv){
	// Test Cases
	printf("specialEleven(22)=%s\n",(specialEleven(22)==0)?"false":"true");
	printf("specialEleven(23)=%s\n",(specialEleven(23)==0)?"false":"true");
	printf("specialEleven(24)=%s\n",(specialEleven(24)==0)?"false":"true");
	return 0;
}
