/* © Ahmed Sellami */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

char* alarmClock(int day, bool vacation){
	char* res;

	if((vacation&&day>=1&&day<=5)||(!vacation&&(day==0||day==6))){
		res=(char*)malloc(6*sizeof(char));
		strcpy(res,"10:00");
		*(res+5)='\0';		
	}else if(vacation){
		res=(char*)malloc(4*sizeof(char));
		strcpy(res,"off");
		*(res+3)='\0';
	}else{
		res=(char*)malloc(5*sizeof(char));
		strcpy(res,"7:00");
		*(res+4)='\0';
	}
	return res;
}

int main(int argc,char** argv){
	// Test Cases
	char* res;

	res=alarmClock(1, false);
	printf("alarmClock(1, false)=%s\n",res);
	free(res);

	res=alarmClock(5, false);
	printf("alarmClock(5, false)=%s\n",res);
	free(res);

	res=alarmClock(0, false);
	printf("alarmClock(0, false)=%s\n",res);
	free(res);
	
	return 0;
}
