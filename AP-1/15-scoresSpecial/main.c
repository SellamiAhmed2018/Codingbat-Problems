/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

int helper(int scores[],int length){
	int max=0;
	for(int i=0;i<length;i++){
		max=*(scores+i)%10==0&&*(scores+i)>max?*(scores+i):max;
	}
	return max;
}

int scoresSpecial(int a[], int b[], int lengthA, int lengthB) {
	return helper(a,lengthA)+helper(b,lengthB);
}

int main(int argc,char** argv){
	// Test Cases

	int a1[]={12, 10, 4},b1[]={2, 20, 30};
	printf("scoresSpecial([12, 10, 4], [2, 20, 30])=%d\n",scoresSpecial(a1,b1,3,3));
	
	int a2[]={20, 10, 4},b2[]={2, 20, 10};
	printf("scoresSpecial([20, 10, 4], [2, 20, 10])=%d\n",scoresSpecial(a2,b2,3,3));

	int a3[]={12, 11, 4},b3[]={2, 20, 31};
	printf("scoresSpecial([12, 11, 4], [2, 20, 31])=%d\n",scoresSpecial(a3,b3,3,3));

	return 0;
}
