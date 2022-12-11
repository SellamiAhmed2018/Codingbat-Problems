/* © Ahmed Sellami */
#include<stdio.h>

int maxMod5(int a, int b){
	return (a==b)?0:(a%5==b%5)?(a<b?a:b):(a<b?b:a);
}

int main(int argc,char** argv){
	// Test Cases
	printf("maxMod5(2, 3)=%d\n",maxMod5(2, 3));
	printf("maxMod5(6, 2)=%d\n",maxMod5(6, 2));
	printf("maxMod5(3, 2)=%d\n",maxMod5(3, 2));
	return 0;
}
