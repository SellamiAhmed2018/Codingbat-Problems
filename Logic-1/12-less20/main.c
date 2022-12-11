/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool less20(int n){
	return (n+1)%20==0||(n+2)%20==0;
}

int main(int argc,char** argv){
	// Test Cases
	printf("less20(18)=%s\n",(less20(18)==0)?"false":"true");
	printf("less20(19)=%s\n",(less20(19)==0)?"false":"true");
	printf("less20(20)=%s\n",(less20(20)==0)?"false":"true");
	return 0;
}
