// Accept Charecter from user and check whether it is Capital or not

#include <stdio.h>
#include <stdbool.h>

bool ChkCapital(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
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

	bRet = ChkCapital(cValue);

	if(bRet == true)
	{
		printf("'%c' is an Capital Charecter\n",cValue);
	}
	else
	{
		printf("'%c' is Not an Capital Charecter\n",cValue);
	}


	return 0;
}