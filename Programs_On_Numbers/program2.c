// Accept one number from user and check whether is divisible by 5 or not

#include <stdio.h>
#include <stdbool.h>

bool Check(int Value)
{
	if(Value % 5 == 0)
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

	bRet = Check(No1);

	if(bRet == true)
	{
		printf("%d is divisible by 5\n",No1);
	}
	else
	{
		printf("%d is not divisible by 5\n",No1);
	}

	return 0;
}