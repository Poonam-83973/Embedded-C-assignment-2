/*
	Q3. Write a program to accept number and check whether the number is +ve, -ve and zero.
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	if( n > 0 )
		printf("%d is positive number.\n",n);
	else if(n < 0)
		printf("%d is negative number.\n",n);
	else
		printf("%d is 0.\n",n);
	return 0;
}
