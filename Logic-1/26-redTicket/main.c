/* © Ahmed Sellami */
#include<stdio.h>

int redTicket(int a, int b, int c){
	return a==2&&b==2&&c==2?10:(a==b&&a==c)?5:(a!=b&&a!=c)?1:0;
}

int main(int argc,char** argv){
	// Test Cases
	printf("redTicket(2, 2, 2)=%d\n",redTicket(2, 2, 2));
	printf("redTicket(2, 2, 1)=%d\n",redTicket(2, 2, 1));
	printf("redTicket(0, 0, 0)=%d\n",redTicket(0, 0, 0));
	return 0;
}
