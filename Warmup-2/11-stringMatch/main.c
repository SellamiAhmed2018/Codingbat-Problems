/* © Ahmed Sellami */
#include<stdio.h>
#include<string.h>

int stringMatch(char* a, char* b) {
	int count=0,i;
	for(i=0;strlen(a)>=2&&strlen(b)>=2&&i<((strlen(a)>=strlen(b))?strlen(b)-1:strlen(a)-1);i++)
		count+=(*(a+i)==*(b+i)&&*(a+i+1)==*(b+i+1))?1:0;
	return count;
}

int main(int argc,char** argv){
	// Test Cases
	printf("stringMatch(\"xxcaazz\",\"xxbaaz\")=%d\n",stringMatch("xxcaazz","xxbaaz"));
	printf("stringMatch(\"abc\",\"abc\")=%d\n",stringMatch("abc","abc"));
	printf("stringMatch(\"abc\",\"axc\")=%d\n",stringMatch("abc","axc"));
	printf("stringMatch(\"hello\",\"he\")=%d\n",stringMatch("hello","he"));
	printf("stringMatch(\"he\",\"hello\")=%d\n",stringMatch("he","hello"));
	printf("stringMatch(\"h\",\"hello\")=%d\n",stringMatch("h","hello"));
	printf("stringMatch(\"\",\"hello\")=%d\n",stringMatch("","hello"));
	printf("stringMatch(\"aabbccdd\",\"abbbxxd\")=%d\n",stringMatch("aabbccdd","abbbxxd"));
	printf("stringMatch(\"aaxxaaxx\",\"iaxxai\")=%d\n",stringMatch("aaxxaaxx","iaxxai"));
	printf("stringMatch(\"iaxxai\",\"aaxxaaxx\")=%d\n",stringMatch("iaxxai","aaxxaaxx"));
	
	return 0;
}
