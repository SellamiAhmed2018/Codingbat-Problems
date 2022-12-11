/* © Ahmed Sellami */
#include<stdio.h>

int dateFashion(int you, int date){
	return (you<=2||date<=2)?0:(you>=8||date>=8)?2:1;
}

int main(int argc,char** argv){
	// Test Cases
	printf("dateFashion(5, 10)=%d\n",dateFashion(5, 10));
	printf("dateFashion(5, 2)=%d\n",dateFashion(5, 2));
	printf("dateFashion(5, 5)=%d\n",dateFashion(5, 5));
	return 0;
}
