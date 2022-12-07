/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool or35(int n) {
	return n%3==0 || n%5==0; // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("or35(3)=%s\n",(or35(3))==0?"false":"true");
	printf("or35(10)=%s\n",(or35(10)==0)?"false":"true");
	printf("or35(8)=%s\n",(or35(8)==0)?"false":"true");
	printf("or35(15)=%s\n",(or35(15)==0)?"false":"true");
	printf("or35(5)=%s\n",(or35(5)==0)?"false":"true");
	printf("or35(9)=%s\n",(or35(9)==0)?"false":"true");
	printf("or35(4)=%s\n",(or35(4)==0)?"false":"true");
	printf("or35(7)=%s\n",(or35(7)==0)?"false":"true");
	printf("or35(6)=%s\n",(or35(6)==0)?"false":"true");
	printf("or35(17)=%s\n",(or35(17)==0)?"false":"true");
	printf("or35(18)=%s\n",(or35(18)==0)?"false":"true");
	printf("or35(29)=%s\n",(or35(29)==0)?"false":"true");
	printf("or35(20)=%s\n",(or35(20)==0)?"false":"true");
	printf("or35(21)=%s\n",(or35(21)==0)?"false":"true");
	printf("or35(22)=%s\n",(or35(22)==0)?"false":"true");
	printf("or35(45)=%s\n",(or35(45)==0)?"false":"true");
	printf("or35(99)=%s\n",(or35(99)==0)?"false":"true");
	printf("or35(100)=%s\n",(or35(100)==0)?"false":"true");
	printf("or35(101)=%s\n",(or35(101)==0)?"false":"true");
	printf("or35(121)=%s\n",(or35(121)==0)?"false":"true");
	printf("or35(122)=%s\n",(or35(122)==0)?"false":"true");
	printf("or35(123)=%s\n",(or35(123)==0)?"false":"true");

	return 0;
}
