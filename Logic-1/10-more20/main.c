/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool more20(int n){
	return n%20>0&&n%20<=2;
}

int main(int argc,char** argv){
	// Test Cases
	printf("more20(20)=%s\n",(more20(20)==0)?"false":"true");
	printf("more20(21)=%s\n",(more20(21)==0)?"false":"true");
	printf("more20(22)=%s\n",(more20(22)==0)?"false":"true");
	return 0;
}
