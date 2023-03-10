/*  Accept character from user and display its ASCII value in decimal, 
octal and hexadecimal format. */

#include <stdio.h>
#include <stdbool.h>

void Display(char ch)
{
	printf("Decimal Value : %d\n",ch);
	printf("octal Value : %o\n",ch);
	printf("Hexadecimal Value : %x\n",ch);
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the Charecter\n");
	scanf("%c",&cValue);

	Display(cValue);
	return 0;
}