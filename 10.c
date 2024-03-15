/*
	Q10. Write a program to accept a character c and display category of the input character.
	ALPHABET  : c is a letter (65 to 90 or 97 to 122)
	UPPERCASE : c is an uppercase letter (65 to 90)
	LOWERCASE : c is a lowercase letter (97 to 122)
	DIGIT     : c is a digit (48 to 57)
	SPACE     : c is a space(32), tab(9), carriage return(13), new line(10)
	OTHER     : Not listed above
*/


#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c); 
  
  	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		if(c >= 65 && c <= 90)
			printf("The entered character %c is Uppercase character\n",c);
		else
			printf("The entered character %c is Lowercase character\n",c);
	
	else if(c >= 48 && c <= 57)
		printf("The entered character %c is digit\n",c);
		
	else if(c== 32)
		printf("The space is entered\n");
	
	else if(c == 9)
		printf("tab is pressed\n");

	else if(c == 13)
		printf("carraige return\n");

	else if(c == 10)
		printf("New line\n");

	else
		printf("character not in list\n");

	return 0;
}
