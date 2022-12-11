/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool closeFar(int a, int b, int c){
	return (abs(a-b)<=1&&abs(a-c)>=2&&abs(b-c)>=2)||(abs(a-c)<=1&&abs(a-b)>=2&&abs(b-c)>=2);
}

int main(int argc,char** argv){
	// Test Cases
	printf("closeFar(1, 2, 10)=%s\n",(closeFar(1, 2, 10)==0)?"false":"true");
	printf("closeFar(1, 2, 3)=%s\n",(closeFar(1, 2, 3)==0)?"false":"true");
	printf("closeFar(4, 1, 3)=%s\n",(closeFar(4, 1, 3)==0)?"false":"true");
	return 0;
}
