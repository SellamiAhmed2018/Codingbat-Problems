/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool in3050(int a, int b) {
	return (a>=30&&a<=40&&b>=30&&b<=40)||(a>=40&&a<=50&&b>=40&&b<=50); // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("in3050(30, 31)=%s\n",(in3050(30, 31))==0?"false":"true");
	printf("in3050(30, 41)=%s\n",(in3050(30, 41)==0)?"false":"true");
	printf("in3050(40, 50)=%s\n",(in3050(40, 50)==0)?"false":"true");
	printf("in3050(40, 51)=%s\n",(in3050(40, 51)==0)?"false":"true");
	printf("in3050(39, 50)=%s\n",(in3050(39, 50)==0)?"false":"true");
	printf("in3050(50, 39)=%s\n",(in3050(50, 39)==0)?"false":"true");
	printf("in3050(40, 39)=%s\n",(in3050(40, 39)==0)?"false":"true");
	printf("in3050(49, 48)=%s\n",(in3050(49, 48)==0)?"false":"true");
	printf("in3050(50, 40)=%s\n",(in3050(50, 40)==0)?"false":"true");
	printf("in3050(50, 51)=%s\n",(in3050(50, 51)==0)?"false":"true");
	printf("in3050(35, 36)=%s\n",(in3050(35, 36)==0)?"false":"true");
	printf("in3050(35, 45)=%s\n",(in3050(35, 45)==0)?"false":"true");
	return 0;
}
