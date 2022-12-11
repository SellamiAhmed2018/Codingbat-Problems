/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

int withoutDoubles(int die1, int die2, bool noDoubles){
	return (noDoubles&&die1==die2)?((die1==6)?7:die1+die2+1):die1+die2;
}

int main(int argc,char** argv){
	// Test Cases
	printf("withoutDoubles(2, 3, true)=%d\n",withoutDoubles(2, 3, true));
	printf("withoutDoubles(3, 3, true)=%d\n",withoutDoubles(3, 3, true));
	printf("withoutDoubles(3, 3, false)=%d\n",withoutDoubles(3, 3, false));
	return 0;
}
