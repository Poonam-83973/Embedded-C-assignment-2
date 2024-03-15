/*
	Section_2 : Q1.Write a program to display number of days in the given month and year using switch case
	statement.
*/

#include<stdio.h>
int main()
{
	int month ,year;
	printf("enter the month ");
	scanf("%d",&month);

	printf("Enter the year : ");
	scanf("%d",&year);

	switch (month)
	{
	case 1 :
	case 3 :
	case 5 :
	case 7 :
	case 8 :
	case 10:
	case 12:
				printf("The %dth month having 31 days.\n",month);
				break;
	
	case 4 :
	case 6 :
	case 9 :
	case 11:
				printf("The %dth month having 30 days.\n",month);
				break;

	case 2 :
			    if(((month == 2) && (year % 400== 0)) || ((year%100)  != 0) && (year % 4 == 0))
					printf("The %dnd month having 29 days.\n",month);

   				else 
	  				printf("The %dnd month having 28 days.\n",month);
				break;
	default :
				printf("Please enter month number in between 1 to 12\n");

	return 0;
	}
}
