/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool answerCell(bool isMorning, bool isMom, bool isAsleep){
	return !isAsleep&&((isMom&&isMorning)||!isMorning);
}

int main(int argc,char** argv){
	// Test Cases
	printf("answerCell(false, false, false)=%s\n",(answerCell(false, false, false)==0)?"false":"true");
	printf("answerCell(false, false, true)=%s\n",(answerCell(false, false, true)==0)?"false":"true");
	printf("answerCell(true, false, false)=%s\n",(answerCell(true, false, false)==0)?"false":"true");
	return 0;
}
