/*
	Q4. Write a program to find maximum of two numbers using
	a. If – else
	b. conditional operator.
*/

#include<stdio.h>
int main()
{
	int n1, n2;
	printf("Enter first number : ");
	scanf("%d",&n1);

	printf("\nEnter second number : ");
	scanf("%d",&n2);

	if( n1>n2 )
		printf("\nThe %d is greater than %d",n1,n2);
	else
		printf("\nThe %d is grater than %d\n",n2,n1);

	return 0;
}
