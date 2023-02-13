//accept number from user and Count Frequency such a digits which are less than 6

#include <stdio.h>

int BelowSix(int iValue)
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

		if(iDigit < 6)
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

	iRet = BelowSix(iNo);

	printf("Frequency of number which is less than 6 in number %d is : %d \n",iNo,iRet);


	
	return 0;
}