// Accept number from user and check whether is Even or odd

#include <stdio.h>
#include <stdbool.h>

bool CheckEven(int Value)
{
	if(Value % 2 == 0)
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
	int No1 = 0;
	bool bRet = false;

	printf("Enter the Number :\n");
	scanf("%d",&No1);

	bRet = CheckEven(No1);

	if(bRet == true)
	{
		printf("%d is Even Number\n",No1);
	}
	else
	{
		printf("%d is odd number\n",No1);
	}

	return 0;
}