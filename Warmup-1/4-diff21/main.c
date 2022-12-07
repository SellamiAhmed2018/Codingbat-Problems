/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h> // to use abs()

int diff21(int n) {
	return (n>21)?2*abs(n-21):abs(n-21);
}

int main(int argc,char** argv){
	// Test Cases
	printf("diff21(19)=%d\n",diff21(19));
	printf("diff21(10)=%d\n",diff21(10));
	printf("diff21(21)=%d\n",diff21(21));
	printf("diff21(22)=%d\n",diff21(22));
	printf("diff21(25)=%d\n",diff21(25));
	printf("diff21(30)=%d\n",diff21(30));
	printf("diff21(0)=%d\n",diff21(0));
	printf("diff21(1)=%d\n",diff21(1));
	printf("diff21(2)=%d\n",diff21(2));
	printf("diff21(-1)=%d\n",diff21(-1));
	printf("diff21(-2)=%d\n",diff21(-2));
	printf("diff21(50)=%d\n",diff21(50));
	return 0;
}
