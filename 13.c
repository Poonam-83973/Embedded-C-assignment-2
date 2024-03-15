/*
	Q13. Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
	which the point lies. Also check for special cases point lies on x-axis, y-axis and origin.
*/


#include<stdio.h>
int main()
{
	int x, y;
	printf("Enter the x cartesian co-ordinate : ");
	scanf("%d",&x);

	printf("Enter the y cartesian co-ordinate : ");
	scanf("%d",&y);

	printf("The cartesian co-ordinate is (%d, %d)\n",x,y);

	if((x>0) && (y>0))
		printf("The cartesian co-ordinate lies in 1st quadrant\n");
		
	else if((x<0) && (y>0))
		printf("The cartesian co-ordinate lies in 2nd quadrant\n");

	else if((x<0) && (y<0))
		printf("The cartesian co-ordinate lies in 3rd quadrant\n");

	else if((x>0) && (y<0))
		printf("The cartesian co-ordinate lies in 4th quadrant\n");

	else if((x==0) && (y>0))
		printf("The cartesian co-ordinate is on Y-axis\n");

	else if((x>0) && (y==0))
		printf("The cartesian co-ordinate is on X-axis\n");

	else
		printf("It is origin\n");

	return 0;
}
