/* 
	Q1. Write a program to accept two numbers and display division of the two numbers. Check for
	divide by zero error. If divider is zero then display appropriate error message.
*/

#include<stdio.h>
int main()
{
	int n1, n2, div;
	printf("Enter 1st number: ");
	scanf("%d",&n1);
	printf("\nEnter 2nd number: ");
	scanf("%d",&n2);

	if(n2 != 0)
	{
		div = n1 / n2;
		printf("\n%d / %d = %d\n",n1,n2,div);
	}
	else
		printf("The denominator is 0\n");

	return 0;
}
