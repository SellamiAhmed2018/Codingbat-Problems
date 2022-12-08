/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool endsLy(char* str) {
	return (strlen(str)>=2)&&(*(str+strlen(str)-2)=='l')&&(*(str+strlen(str)-1)=='y');
}

int main(int argc,char** argv){
	// Test Cases
	printf("endsLy(\"oddly\")=%s\n",(endsLy("oddly"))==0?"false":"true");
	printf("endsLy(\"y\")=%s\n",(endsLy("y")==0)?"false":"true");
	printf("endsLy(\"oddy\")=%s\n",(endsLy("oddy")==0)?"false":"true");
	return 0;
}
