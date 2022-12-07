/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool makes10(int a, int b) {
  return (a==10 || b==10 || a+b==10);
}

int main(int argc,char** argv){
	// Test Cases
	printf("makes10(9, 10)=%s\n",(makes10(9, 10))==0?"false":"true");
	printf("makes10(9, 9)=%s\n",(makes10(9, 9)==0)?"false":"true");
	printf("makes10(1, 9)=%s\n",(makes10(1, 9)==0)?"false":"true");
	printf("makes10(10, 1)=%s\n",(makes10(10, 1)==0)?"false":"true");
	printf("makes10(10, 10)=%s\n",(makes10(10, 10)==0)?"false":"true");
	printf("makes10(8, 2)=%s\n",(makes10(8, 2)==0)?"false":"true");
	printf("makes10(8, 3)=%s\n",(makes10(8, 3)==0)?"false":"true");
	printf("makes10(10, 42)=%s\n",(makes10(10, 42)==0)?"false":"true");
	printf("makes10(12, -2)=%s\n",(makes10(12, -2)==0)?"false":"true");
	return 0;
}
