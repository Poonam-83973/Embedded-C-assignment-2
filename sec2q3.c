/*
	Q3. Write a program to accept Employee Id , Department No, Designation from user and display
	output with reference to following table.

	Example:
		If input given is
		Employee Id           : 101
		Dept No               : 30
		Designation Code	  : M
		Then output should be :	Employee with employee id 101 is working in "Sales" department as "Manager".
*/

#include<stdio.h>
int main()
{
	int Emp_id, Dept_no;
	char DC;

	printf("Enter Department Number = ");
	scanf("%d",&Dept_no);
	printf("Enter Employee ID = ");
	scanf("%d",&Emp_id);
	printf("Enter Designation code = ");
	scanf("%*c%c",&DC);

	switch (Dept_no)
	{
		case 10:
				printf("Employee with Employee id %d is working in 'Marketing' Department",Emp_id);
				break;

		case 20:
				printf("Employee with Employee id %d is working in 'Management' Department",Emp_id);
				break;

		case 30:
				printf("Employee with Employee id %d is working in 'Sales' Department",Emp_id);
				break;

		case 40:
				printf("Employee with Employee id %d is working in 'Designing' Department",Emp_id);
				break;
	}
	
	switch (DC)
	{
		case 'M':
					printf(" as Manager.\n");
					break;

		case 'S':
					printf(" as Superviser.\n");
					break;

		case 's':
					printf(" as Seurity Officer.\n");
					break;

		case 'C':
					printf(" as Clerk.\n");
					break; 
 	}

	return 0;
}
