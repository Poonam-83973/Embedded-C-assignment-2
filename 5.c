/*
	Q5. Write a program to find maximum of three numbers using
	a. If – else
	b. conditional operator.
*/

#include<stdio.h>
int main()
{
	//(a): using if-else statement.....
/*
      int n1, n2, n3;
      printf("Enter first number : ");
      scanf("%d",&n1);
      printf("\nEnter second number : ");
      scanf("%d",&n2);
  	  printf("\nEnter third number : ");
      scanf("%d",&n3);
      
	  if( n1>n2)
	  	if(n1>n3)
       		 printf("\nThe %d is greater than %d and %d",n1,n3,n2);
		else
			 printf("\nThe %d is greater than %d and %d\n",n3,n1,n2);

	  else if( n2>n1 && n2>n3)
          printf("\nThe %d is greater than %d and %d\n",n2,n1,n3);
	  
	  else
	  	  printf("%d is greater than %d and %d\n",n3,n1,n2);
*/
	//(b): using conditional statement....
	
      int n1, n2, n3, largest;
      printf("Enter first number : ");
      scanf("%d",&n1);
  
      printf("Enter second number : ");
      scanf("%d",&n2);
  
      printf("Enter third number : ");
      scanf("%d",&n3);

	  largest = (n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3); 

	  printf("The greater number is %d\n",largest);
			
	return 0;
}
	
