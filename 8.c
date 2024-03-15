/*
	Q8. Write a program that will calculate the price for a quantity entered from the keyboard, given
	that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
	percent discount for quantities over 50.
*/


#include<stdio.h>
int main()
{
	float quantity, amount, discount=0, total_amount;
	
	printf("Enter the quantity : ");
	scanf("%f",&quantity);

	if(quantity <= 30)
	{
		amount = quantity * 5;
		printf("\nThe total price is %.2f\n",amount);
	}

	else if(quantity >= 30 && quantity <=50)
	{
		amount = quantity * 5;
		discount = amount * 0.1;
		total_amount = amount - discount;
		printf("The final price after 10 percent discount is %.2f\n",total_amount);
	}
		

	else
	{
		amount = quantity * 5;
		discount = amount * 0.15;
		total_amount = amount - discount;
		printf("The final price after 15 percent discount is %.2f\n",total_amount);
	}

	return 0;
}
