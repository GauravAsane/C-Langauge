// Accept one number from user and display difference between summation of all  its factors and non factors on screen.

#include <stdio.h>


int FactDiff(int iValue)
{
	int iCnt = 0;
	int iSum1 = 0;
	int iSum2 = 0;
	int Diff = 0;

	if(iValue <= 0)
	{
		return -1 ;
	}

	for(iCnt = 1 ; iCnt < iValue ; iCnt++)
	{
		if( iValue % iCnt != 0)
		{
			iSum1 = iSum1 + iCnt;		
		}
		else
		{
			iSum2 = iSum2 + iCnt;
		}
	}

	Diff = iSum2 - iSum1;

	return Diff;
		
}

int main()
{
	int iNo = 0;
	int iRet = 0;
	
	printf("Enter the Number :\n");
	scanf("%d",&iNo);

	iRet = FactDiff(iNo);

	if(iRet == -1)
	{
		printf("Enter Valid Number\n");
	}
	else
	{
		printf("Difference of factors and non factors of %d is : %d\n",iNo, iRet);
	}


	return 0;
}