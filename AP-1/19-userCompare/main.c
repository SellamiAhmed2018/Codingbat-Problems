/* © Ahmed Sellami */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

int userCompare(char* aName, int aId, char* bName, int bId) {
	return strcmp(aName,bName)<0?-1:strcmp(aName,bName)>0?1:aId>bId?1:aId<bId?-1:0;
}

int main(int argc,char** argv){
	// Test Cases

	printf("userCompare(\"bb\", 1, \"zz\", 2)=%d\n",userCompare("bb", 1, "zz", 2));
	printf("userCompare(\"bb\", 1, \"aa\", 2)=%d\n",userCompare("bb", 1, "aa", 2));
	printf("userCompare(\"bb\", 1, \"bb\", 1)=%d\n",userCompare("bb", 1, "bb", 1));
	
	return 0;
}
