/* © Ahmed Sellami */
#include<stdio.h>

int makeChocolate(int small, int big, int goal){
	return (goal%5!=0&&goal/5<=big&&small<goal%5)||(5*big+small<goal)?-1:(big>=goal/5)?goal-5*(goal/5):goal-5*big;
}

int main(int argc,char** argv){
	// Test Cases
	printf("makeChocolate(4, 1, 9)=%d\n",makeChocolate(4, 1, 9));
	printf("makeChocolate(4, 1, 10)=%d\n",makeChocolate(4, 1, 10));
	printf("makeChocolate(4, 1, 7)=%d\n",makeChocolate(4, 1, 7));
	return 0;
}
