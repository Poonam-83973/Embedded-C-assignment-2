/*
	Q9.Write a program to display number of days in the given month and year using
		a. Using If else ladder.
		b. Using logical operators.
*/

#include<stdio.h>
int main()
{
	int month ,year;
	printf("enter the month ");
	scanf("%d",&month);

	printf("Enter the year : ");
	scanf("%d",&year);

	if((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
		printf("The %dth month having 31 days.\n",month);

	else if((month == 4) || (month == 6) || (month == 9) || (month == 11))
		printf("The %dth month having 30 days.\n",month);

	else if(((month == 2) && (year % 400== 0)) || ((year%100)  != 0) && (year % 4 == 0))
		printf("The %dnd month having 29 days.\n",month);

	else 
		printf("The %dnd month having 28 days.\n",month);
	

	return 0;
}
