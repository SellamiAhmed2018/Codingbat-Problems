/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool nearTen(int n){
	return n%10<=2||n%10>=8;
}

int main(int argc,char** argv){
	// Test Cases
	printf("nearTen(12)=%s\n",(nearTen(12)==0)?"false":"true");
	printf("nearTen(17)=%s\n",(nearTen(17)==0)?"false":"true");
	printf("nearTen(19)=%s\n",(nearTen(19)==0)?"false":"true");
	return 0;
}
