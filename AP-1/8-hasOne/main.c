/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>

bool hasOne(int n) {
	while(n!=0){
		if(n%10==1)
			return true;
		n/=10;
	}
	return false;
}

int main(int argc,char** argv){
	// Test Cases
	printf("hasOne(10)=%s\n",(hasOne(10))==0?"false":"true");
	printf("hasOne(22)=%s\n",(hasOne(22))==0?"false":"true");
	printf("hasOne(220)=%s\n",(hasOne(220))==0?"false":"true");

	return 0;
}
