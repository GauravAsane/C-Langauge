//accept number from user and display and check whether it contains zerp in it or not

#include <stdio.h>
#include <stdbool.h>

bool CheckBool(int iValue)
{

	int iDigit = 0;
	int Temp = iValue;
	bool bret = false;

	if(Temp < 0)
	{
		Temp = -Temp;
	}

	while(Temp != 0)
	{
		iDigit = Temp % 10;

		if(iDigit == 0)
		{
			bret = true;
			break;
		}

		Temp = Temp / 10;
	}

	return bret;
}

int main()
{
	int iNo = 0;
	bool bRet = false;

	printf("Enter the Number : \n");
	scanf("%d",&iNo);

	bRet = CheckBool(iNo);

	if(bRet == true)
	{
		printf("it contains Zero in %d\n",iNo);
	}
	else
	{
		printf("There is No Zero in %d\n",iNo);
	}
	
	return 0;
}