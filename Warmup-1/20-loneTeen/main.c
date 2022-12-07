/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool loneTeen(int a, int b) {
	return ((a>=13&&a<=19) && (b<13||b>19))||((b>=13&&b<=19) && (a<13||a>19)); // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("loneTeen(13, 99)=%s\n",(loneTeen(13, 99))==0?"false":"true");
	printf("loneTeen(21, 19)=%s\n",(loneTeen(21, 19)==0)?"false":"true");
	printf("loneTeen(13, 13)=%s\n",(loneTeen(13, 13)==0)?"false":"true");
	printf("loneTeen(14, 20)=%s\n",(loneTeen(14, 20)==0)?"false":"true");
	printf("loneTeen(20, 15)=%s\n",(loneTeen(20, 15)==0)?"false":"true");
	printf("loneTeen(16, 17)=%s\n",(loneTeen(16, 17)==0)?"false":"true");
	printf("loneTeen(16, 9)=%s\n",(loneTeen(16, 9)==0)?"false":"true");
	printf("loneTeen(16, 18)=%s\n",(loneTeen(16, 18)==0)?"false":"true");
	printf("loneTeen(13, 19)=%s\n",(loneTeen(13, 19)==0)?"false":"true");
	printf("loneTeen(13, 20)=%s\n",(loneTeen(13, 20)==0)?"false":"true");
	printf("loneTeen(6, 18)=%s\n",(loneTeen(6, 18)==0)?"false":"true");
	printf("loneTeen(99, 13)=%s\n",(loneTeen(99, 13)==0)?"false":"true");
	printf("loneTeen(99, 99)=%s\n",(loneTeen(99, 99)==0)?"false":"true");

	return 0;
}
