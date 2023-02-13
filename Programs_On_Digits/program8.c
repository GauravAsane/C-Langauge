//accept number from user and return the count of digits in between 3 and 7

#include <stdio.h>

int CountRange(int iValue)
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

		if(iDigit > 3 && iDigit < 7)
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

	iRet = CountRange(iNo);

	printf("Number of Digits which are in between in 3 and 7 in number %d is : %d \n",iNo,iRet);


	
	return 0;
}