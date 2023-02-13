// Accept one number from user and display its all non factors on screen.

#include <stdio.h>


void DisplayNonFact(int iValue)
{
	int iCnt = 0;
	int iMult = 1;

	if(iValue <= 0)
	{
		printf("Enter valid number\n");
		return;
	}

	printf(" Non Factors of %d :\n",iValue);
	for(iCnt = 1 ; iCnt < iValue ; iCnt++)
	{
		if( iValue % iCnt != 0)
		{
			printf("%d\t",iCnt);		
		}
	}
	printf("\n");
	

	
}

int main()
{
	int iNo = 0;
	
	printf("Enter the Number :\n");
	scanf("%d",&iNo);

	DisplayNonFact(iNo);


	return 0;
}