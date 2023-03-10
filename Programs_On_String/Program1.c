// Accept Charecter from user and check whether it is alphabet or not

#include <stdio.h>
#include <stdbool.h>

bool ChkAlpha(char ch)
{
	if((ch >= 'A' && ch <= 'Z')|| (ch >= 'a' && ch <= 'z'))
	{
		
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	char cValue = '\0';
	bool bRet = false;

	printf("Enter the Value\n");
	scanf("%c",&cValue);

	bRet = ChkAlpha(cValue);

	if(bRet == true)
	{
		printf(" %c is an Charecter\n",cValue);
	}
	else
	{
		printf(" %c is Not an Charecter\n",cValue);
	}


	return 0;
}