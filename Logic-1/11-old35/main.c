/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool old35(int n){
	return n%15!=0&&(n%3==0||n%5==0);
}

int main(int argc,char** argv){
	// Test Cases
	printf("old35(3)=%s\n",(old35(3)==0)?"false":"true");
	printf("old35(10)=%s\n",(old35(10)==0)?"false":"true");
	printf("old35(15)=%s\n",(old35(15)==0)?"false":"true");
	return 0;
}
