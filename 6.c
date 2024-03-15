/*
	Q6. Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
	reversed number is same as entered number it is called palindrome).
*/

#include<stdio.h>
int main()
{
	int num, temp, rev=0, remainder;
	
	printf("Enter the number : ");
	scanf("%d",&num);

	temp = num;

	while(num != 0)
		{
			remainder = num % 10;
			rev = (rev * 10) + remainder;
			num = num /10;
		}

	if(temp == rev)
		printf("The number is palindrome.\n");
	else
		printf("The number is not palindrome\n");

	return 0;
}
