/*
	Q7. Write a program to display number of days in the given year. Check condition for leap year. A
	year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
	years.
		a.Without using logical operators
		b.Using logical operators
		c.Conditional operator
*/

#include<stdio.h>
int main()
{
	int year;

	printf("Enter the year : ");
	scanf("%d",&year);

	//without using logical operators......
	if((year%4)==0)
			printf("The %d is leap year and it has 366 days\n",year);
	
	else if((year%400)==0)
     	    printf("The %d is leap year and it has 366 days\n",year);
  	
	else
 		printf("%d is a not leap year and hence it has 365 days\n",year);

	//Using logical operator....

	if(((year%4)==0) || ((year%400)==0 && (year%100) != 0))
			printf("The %d is leap year and it has 366 days\n",year);

	else
 		printf("%d is a not leap year and hence it has 365 days\n",year);

	//Using conditional operator.....

    (year%4 == 0 && year%100 != 0) ? printf("leap year having 366 days\n") : (year % 400 == 0) ? printf("leap year having 366 days\n") : printf("regular year having 365 days\n"); 


return 0;
}
