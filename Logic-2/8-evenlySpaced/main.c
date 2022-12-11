/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool evenlySpaced(int a, int b, int c){
	int max=a>=b&&a>=c?a:b>=a&&b>=c?b:c,
		min=a<=b&&a<=c?a:b<=a&&b<=c?b:c,
		mid=((max==a&&min==b)||(max==b&&min==a))?c:((max==c&&min==b)||(max==b&&min==c))?a:b;
	return max-mid==mid-min;
}

int main(int argc,char** argv){
	// Test Cases
	printf("evenlySpaced(2, 4, 6)=%s\n",(evenlySpaced(2, 4, 6)==0)?"false":"true");
	printf("evenlySpaced(4, 6, 2)=%s\n",(evenlySpaced(4, 6, 2)==0)?"false":"true");
	printf("evenlySpaced(4, 6, 3)=%s\n",(evenlySpaced(4, 6, 3)==0)?"false":"true");
	return 0;
}
