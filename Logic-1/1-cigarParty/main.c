/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool cigarParty(int cigars, bool isWeekend){
	return (isWeekend&&cigars>=40)||(!isWeekend&&cigars>=40&&cigars<=60);
}

int main(int argc,char** argv){
	// Test Cases
	printf("cigarParty(30, false)=%s\n",(cigarParty(30, false)==0)?"false":"true");
	printf("cigarParty(50, false)=%s\n",(cigarParty(50, false)==0)?"false":"true");
	printf("cigarParty(70, true)=%s\n",(cigarParty(70, true)==0)?"false":"true");
	return 0;
}
