/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

int caughtSpeeding(int speed, bool isBirthday){
	return ((isBirthday&&speed<=65)||(!isBirthday&&speed<=60))?0:(((isBirthday&&speed<=85)||(!isBirthday&&speed<=80)))?1:2;
}

int main(int argc,char** argv){
	// Test Cases
	printf("caughtSpeeding(60, false)=%d\n",caughtSpeeding(60, false));
	printf("caughtSpeeding(65, false)=%d\n",caughtSpeeding(65, false));
	printf("caughtSpeeding(65, true)=%d\n",caughtSpeeding(65, true));
	return 0;
}
