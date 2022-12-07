/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool sleepIn(bool weekday, bool vacation) {
	return !weekday || vacation; // could be done with 'if' instead
}

int main(int argc,char** argv){
	// Test Cases
	printf("sleepIn(false,false)=%s\n",(sleepIn(false,false))==0?"false":"true");
	printf("sleepIn(true,false)=%s\n",(sleepIn(true,false)==0)?"false":"true");
	printf("sleepIn(false,true)=%s\n",(sleepIn(false,true)==0)?"false":"true");
	printf("sleepIn(true,true)=%s\n",(sleepIn(true,true)==0)?"false":"true");
	return 0;
}
