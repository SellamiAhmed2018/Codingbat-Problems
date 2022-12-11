/* © Ahmed Sellami */
#include<stdio.h>

int greenTicket(int a, int b, int c){
	return (a!=b&&a!=c&&b!=c)?0:(a==b&&a==c)?20:10;
}

int main(int argc,char** argv){
	// Test Cases
	printf("greenTicket(1, 2, 3)=%d\n",greenTicket(1, 2, 3));
	printf("greenTicket(2, 2, 2)=%d\n",greenTicket(2, 2, 2));
	printf("greenTicket(1, 1, 2)=%d\n",greenTicket(1, 1, 2));
	return 0;
}
