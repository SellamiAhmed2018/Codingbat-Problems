/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool makeBricks(int small, int big, int goal){
	return (goal/5<=big && goal%5<=small)||(goal>=5*big && small>=goal-5*big);
}

int main(int argc,char** argv){
	// Test Cases
	printf("makeBricks(3, 1, 8)=%s\n",(makeBricks(3, 1, 8)==0)?"false":"true");
	printf("makeBricks(3, 1, 9)=%s\n",(makeBricks(3, 1, 9)==0)?"false":"true");
	printf("makeBricks(3, 2, 10)=%s\n",(makeBricks(3, 2, 10)==0)?"false":"true");
	return 0;
}
