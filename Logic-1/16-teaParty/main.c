/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

int teaParty(int tea, int candy){
	return (tea<5||candy<5)?0:((tea>=2*candy||candy>=2*tea))?2:1;
}

int main(int argc,char** argv){
	// Test Cases
	printf("teaParty(6, 8)=%d\n",teaParty(6, 8));
	printf("teaParty(3, 8)=%d\n",teaParty(3, 8));
	printf("teaParty(20, 6)=%d\n",teaParty(20, 6));
	return 0;
}
