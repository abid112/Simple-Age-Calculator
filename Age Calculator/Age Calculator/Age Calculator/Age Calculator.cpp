// Age Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int age,day,hour,min,sec;
	printf("Enter Your Age \n");
    scanf("%d",&age);
	day= age*365;
    hour=day*24;
	min=hour*60;
	sec=min*60;
	printf("So Total Day= %d \n",day);
	printf("So Total Hour= %d \n",hour);
	printf("So Total Min= %d \n",min);
	printf("So Total Sec= %d \n",sec);


	return 0;
}

