/*
	Q2. Input a number and display whether number is Even or Odd.
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	if( n%2 == 0)
		printf("Entered number is Even.\n");
	else
	 	printf("Entered number is Odd.\n");

	return 0;
}
