/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h> // So that we can use the 'bool' data type

bool monkeyTrouble(bool aSmile, bool bSmile) {
	//return (aSmile && bSmile)||(!aSmile && !bSmile); // could be done with 'if' instead
	return !(aSmile^bSmile); // Best Solution; '^' is XOR ; it's equivalent to the last
}

int main(int argc,char** argv){
	// Test Cases
	printf("monkeyTrouble(true, true)=%s\n",(monkeyTrouble(true, true)==0)?"false":"true");
	printf("monkeyTrouble(false, false)=%s\n",(monkeyTrouble(false, false)==0)?"false":"true");
	printf("monkeyTrouble(true, false)=%s\n",(monkeyTrouble(true, false)==0)?"false":"true");
	printf("monkeyTrouble(false, true)=%s\n",(monkeyTrouble(false, true)==0)?"false":"true");
	return 0;
}
