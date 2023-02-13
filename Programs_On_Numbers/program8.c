// Accept one number from user and display even factors of that number on screen.

#include <stdio.h>


void DisplayEvenFact(int iValue)
{
	int iCnt = 0;

	if(iValue < 0)
	{
		printf("Enter valid number\n");
		return;
	}

	for(iCnt = 2; iCnt <= iValue/2; iCnt+=2)
	{
		if( iValue % iCnt == 0)
		{
			if(iCnt % 2 == 0)
			{
				printf("%d\t",iCnt);
			}
			
		}
	}

	
}

int main()
{
	int iNo = 0;
	
	printf("Enter the First Number :\n");
	scanf("%d",&iNo);

	DisplayEvenFact(iNo);

	return 0;
}