/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool posNeg(int a, int b, bool negative) {
	 return (negative && (a<=0 && b<=0))||(!negative && a*b<=0); // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("posNeg(1, -1, false)=%s\n",(posNeg(1, -1, false))==0?"false":"true");
	printf("posNeg(-1, 1, false)=%s\n",(posNeg(-1, 1, false))==0?"false":"true");
	printf("posNeg(-4, -5, true)=%s\n",(posNeg(-4, -5, true))==0?"false":"true");
	printf("posNeg(-4, -5, false)=%s\n",(posNeg(-4, -5, false))==0?"false":"true");
	printf("posNeg(-4, 5, false)=%s\n",(posNeg(-4, 5, false))==0?"false":"true");
	printf("posNeg(-4, 5, true)=%s\n",(posNeg(-4, 5, true))==0?"false":"true");
	printf("posNeg(1, 1, false)=%s\n",(posNeg(1, 1, false))==0?"false":"true");
	printf("posNeg(-1, -1, false)=%s\n",(posNeg(-1, -1, false))==0?"false":"true");
	printf("posNeg(1, -1, true)=%s\n",(posNeg(1, -1, true))==0?"false":"true");
	printf("posNeg(-1, 1, true)=%s\n",(posNeg(-1, 1, true))==0?"false":"true");
	printf("posNeg(-1, -1, true)=%s\n",(posNeg(-1, -1, true))==0?"false":"true");
	printf("posNeg(5, -5, false)=%s\n",(posNeg(5, -5, false))==0?"false":"true");
	printf("posNeg(-6, 6, false)=%s\n",(posNeg(-6, 6, false))==0?"false":"true");
	printf("posNeg(-5, -6, false)=%s\n",(posNeg(-5, -6, false))==0?"false":"true");
	printf("posNeg(-2, -1, false)=%s\n",(posNeg(-2, -1, false))==0?"false":"true");
	printf("posNeg(1, 2, false)=%s\n",(posNeg(1, 2, false))==0?"false":"true");
	printf("posNeg(-5, 6, true)=%s\n",(posNeg(-5, 6, true))==0?"false":"true");
	printf("posNeg(-5, -5, true)=%s\n",(posNeg(-5, -5, true))==0?"false":"true");
	return 0;
}
