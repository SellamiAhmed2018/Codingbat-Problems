/* © Ahmed Sellami */
#include<stdio.h>

int bunnyEars(int bunnies){
	/*if(bunnies==0)
		return 0;
	return 2+bunnyEars(bunnies-1);*/
	return (bunnies==0)?0:2+bunnyEars(bunnies-1);
}

int main(int argc,char** argv){
	// Test Cases
	printf("bunnyEars(0)=%d\n",bunnyEars(0));
	printf("bunnyEars(1)=%d\n",bunnyEars(1));
	printf("bunnyEars(2)=%d\n",bunnyEars(2));
	return 0;
}
