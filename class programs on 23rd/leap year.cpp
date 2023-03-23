#include<stdio.h>
main()
{
	int year;
	
	printf("enter year:");
	scanf("%d",&year);
	
	if(year%4==0)
	printf("year %d is leap year",year);
	else
	printf("year %d is not leap year",year);
	
}
