/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* seriesUp(int n){
	int* res=(int*)malloc(((n*(n+1))/2)*sizeof(int));
	int h=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			*(res+h)=j;
			h++;
		}
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	int* nums;
	int n,len;

	n=3;
	nums=seriesUp(n);
	len=(n*(n+1))/2;
	printf("seriesUp(3)=[");
	for(int i=0;i<len;i++){
		printf(i==(len)-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	n=4;
	nums=seriesUp(n);
	len=(n*(n+1))/2;
	printf("seriesUp(4)=[");
	for(int i=0;i<len;i++){
		printf(i==(len)-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	n=2;
	nums=seriesUp(n);
	len=(n*(n+1))/2;
	printf("seriesUp(2)=[");
	for(int i=0;i<len;i++){
		printf(i==(len)-1?"%d":"%d,",*(nums+i));
	}
	printf("]\n");
	free(nums);

	return 0;
}
