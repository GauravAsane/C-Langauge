// Accept one number from user and display its summation of all non factors on screen.

#include <stdio.h>


int NonFactSum(int iValue)
{
	int iCnt = 0;
	int iSum = 0;

	if(iValue <= 0)
	{
		return -1 ;
	}

	for(iCnt = 1 ; iCnt < iValue ; iCnt++)
	{
		if( iValue % iCnt != 0)
		{
			iSum = iSum + iCnt;		
		}
	}
	return iSum;
		
}

int main()
{
	int iNo = 0;
	int iRet = 0;
	
	printf("Enter the Number :\n");
	scanf("%d",&iNo);

	iRet = NonFactSum(iNo);

	if(iRet == -1)
	{
		printf("Enter Valid Number\n");
	}
	else
	{
		printf("Addition of non factors of %d is : %d\n",iNo, iRet);
	}


	return 0;
}