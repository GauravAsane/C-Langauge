/* Accept Character from user and check whether it is special symbol 
or not (!, @, #, $, %, ^, &, *). */

#include <stdio.h>
#include <stdbool.h>

bool ChkSpecial(char ch)
{
	if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	char cValue = '\0';
	bool bret = false;

	printf("Enter the Charecter\n");
	scanf("%c",&cValue);

	bret = ChkSpecial(cValue);
	if(bret == true)
	{
		printf("it is special symbol");
	}
	else
	{
		printf("it is not special symbol");
	}
	return 0;
}