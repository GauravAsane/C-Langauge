// Accept one number from user and display its multiplication of factors on screen.

#include <stdio.h>


int DisplayMultFact(int iValue)
{
	int iCnt = 0;
	int iMult = 1;

	if(iValue <= 0)
	{
		return -1;
	}

	for(iCnt = 1; iCnt <= iValue/2; iCnt++)
	{
		if( iValue % iCnt == 0)
		{
			iMult = iMult * iCnt;		
		}
	}
	return iMult;

	
}

int main()
{
	int iNo = 0;
	int iRet = 0;
	
	printf("Enter the Number :\n");
	scanf("%d",&iNo);

	iRet = DisplayMultFact(iNo);

	if(iRet == -1)
	{
		printf("Enter valid number\n");
	}
	else
	{
		printf("Multiplication of factors of %d is : %d",iNo,iRet);
	}

	return 0;
}