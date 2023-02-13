//accept number from user and return the multiplication of all digits

#include <stdio.h>

int MultDigits(int iValue)
{
	int iDigit = 0;
	int Count = 0;
	int iMult = 1;
	int Temp = iValue;

	if(Temp < 0)
	{
		Temp = -Temp;
	}

	while(Temp != 0)
	{
		iDigit = Temp % 10;

		if(iDigit != 0)
		{
			iMult = iMult * iDigit;
		}
		

		Temp = Temp / 10;
	}

	return iMult;
}

int main()
{
	int iNo = 0;
	int iRet = 0;

	printf("Enter the Number : \n");
	scanf("%d",&iNo);

	iRet = MultDigits(iNo);

	printf("Multiplication of Digits in number %d is : %d \n",iNo,iRet);


	
	return 0;
}