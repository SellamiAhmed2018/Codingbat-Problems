/* © Ahmed Sellami */
#include<stdio.h>

int bunnyEars2(int n){
	return bunnies==0?0:bunnies%2==0?3+bunnyEars2(bunnies-1):2+bunnyEars2(bunnies-1);
}

int main(int argc,char** argv){
	// Test Cases
	printf("bunnyEars2(0)=%d\n",bunnyEars2(0));
	printf("bunnyEars2(1)=%d\n",bunnyEars2(1));
	printf("bunnyEars2(2)=%d\n",bunnyEars2(2));
	printf("bunnyEars2(3)=%d\n",bunnyEars2(3));
	return 0;
}
