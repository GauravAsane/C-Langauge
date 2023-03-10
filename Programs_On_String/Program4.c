// Accept Charecter from user and check whether it is small case or not

#include <stdio.h>
#include <stdbool.h>


bool ChkSmall(char ch)
{
	if(ch >= 'a' && ch <= 'z')
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

	bRet = ChkSmall(cValue);

	if(bRet == true)
	{
		printf("'%c' is an Small Case Charecter\n",cValue);
	}
	else
	{
		printf("'%c' is Not an Small Case Charecter\n",cValue);
	}


	return 0;
}