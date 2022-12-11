/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool squirrelPlay(int temp, bool isSummer){
	return temp>=60&&((isSummer&&temp<=100)||(!isSummer&&temp<=90));
}

int main(int argc,char** argv){
	// Test Cases
	printf("squirrelPlay(70, false)=%s\n",(squirrelPlay(70, false)==0)?"false":"true");
	printf("squirrelPlay(95, false)=%s\n",(squirrelPlay(95, false)==0)?"false":"true");
	printf("squirrelPlay(95, true)=%s\n",(squirrelPlay(95, true)==0)?"false":"true");
	return 0;
}
