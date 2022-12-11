/* © Ahmed Sellami */
#include<stdio.h>

int blueTicket(int a, int b, int c){
	return (a+b==10||a+c==10||b+c==10)?10:(a+b-10>=b+c||a+b-10>=a+c)?5:0;
}

int main(int argc,char** argv){
	// Test Cases
	printf("blueTicket(9, 1, 0)=%d\n",blueTicket(9, 1, 0));
	printf("blueTicket(9, 2, 0)=%d\n",blueTicket(9, 2, 0));
	printf("blueTicket(6, 1, 4)=%d\n",blueTicket(6, 1, 4));
	return 0;
}
