/* © Ahmed Sellami */
#include<stdio.h>

int blackjack(int a, int b){
  return (a>21&&b>21)?0:(a>21||(a<=21&&b<=21&&21-b<=21-a))?b:a;
}

int main(int argc,char** argv){
	// Test Cases
	printf("blackjack(19, 21)=%d\n",blackjack(19, 21));
	printf("blackjack(21, 19)=%d\n",blackjack(21, 19));
	printf("blackjack(19, 22)=%d\n",blackjack(19, 22));
	return 0;
}
