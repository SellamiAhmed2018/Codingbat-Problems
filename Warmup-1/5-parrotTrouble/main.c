/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool parrotTrouble(bool talking, int hour) {
	return talking && (hour<7 || hour>20);
}

int main(int argc,char** argv){
	// Test Cases
	printf("parrotTrouble(true, 6)=%s\n",(parrotTrouble(true, 6))==0?"false":"true");
	printf("parrotTrouble(true, 7)=%s\n",(parrotTrouble(true, 7)==0)?"false":"true");
	printf("parrotTrouble(false, 6)=%s\n",(parrotTrouble(false, 6)==0)?"false":"true");
	printf("parrotTrouble(true, 21)=%s\n",(parrotTrouble(true, 21)==0)?"false":"true");
	printf("parrotTrouble(false, 21)=%s\n",(parrotTrouble(false, 21)==0)?"false":"true");
	printf("parrotTrouble(false, 20)=%s\n",(parrotTrouble(false, 20)==0)?"false":"true");
	printf("parrotTrouble(true, 23)=%s\n",(parrotTrouble(true, 23)==0)?"false":"true");
	printf("parrotTrouble(false, 23)=%s\n",(parrotTrouble(false, 23)==0)?"false":"true");
	printf("parrotTrouble(true, 20)=%s\n",(parrotTrouble(true, 20)==0)?"false":"true");
	printf("parrotTrouble(false, 12)=%s\n",(parrotTrouble(false, 12)==0)?"false":"true");
	return 0;
}
