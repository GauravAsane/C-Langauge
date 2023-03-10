// Accept Charecter from user and check whether it is Digit or not

#include <stdio.h>
#include <stdbool.h>

bool ChkDigit(int no)
{
	if(no >= 0 && no <= 9)
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
	int iValue = 0;
	bool bRet = false;

	printf("Enter the Value\n");
	scanf("%d",&iValue);

	bRet = ChkDigit(iValue);

	if(bRet == true)
	{
		printf("It is Digit\n",iValue);
	}
	else
	{
		printf("It is Not Digit\n",iValue);
	}


	return 0;
}