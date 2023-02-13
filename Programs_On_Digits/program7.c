//accept number from user and return the count of odd digits

#include <stdio.h>

int OddDigits(int iValue)
{
	int iDigit = 0;
	int Count = 0;
	int Temp = iValue;

	if(Temp < 0)
	{
		Temp = -Temp;
	}

	while(Temp != 0)
	{
		iDigit = Temp % 10;

		if(iDigit % 2 != 0)
		{
			Count++;
		}

		Temp = Temp / 10;
	}

	return Count;
}

int main()
{
	int iNo = 0;
	int iRet = 0;

	printf("Enter the Number : \n");
	scanf("%d",&iNo);

	iRet = OddDigits(iNo);

	printf("Number of Odd Digits in number %d is : %d \n",iNo,iRet);


	
	return 0;
}