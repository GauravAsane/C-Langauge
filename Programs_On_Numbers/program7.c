// Accept one number from user and display that number of even numbers on screen.

#include <stdio.h>


void DisplayEven(int iValue)
{
	int iCnt = 0;

	if(iValue < 0)
	{
		printf("Enter valid number\n");
		return;
	}

	for(iCnt = 2; iCnt <= (iValue*2); iCnt+=2)
	{
		if(iCnt % 2 == 0)
		{
			printf("%d\t",iCnt);
		}
	}

	
}

int main()
{
	int iNo = 0;
	
	printf("Enter the First Number :\n");
	scanf("%d",&iNo);

	DisplayEven(iNo);

	return 0;
}