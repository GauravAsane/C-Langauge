// Accept one number from user and display its factors in decreasing order on screen.

#include <stdio.h>


void DisplayFactRev(int iValue)
{
	int iCnt = 0;
	int iMult = 1;

	if(iValue <= 0)
	{
		printf("Enter valid number\n");
		return;
	}

	printf("Reverse Factors of %d :\n",iValue);
	for(iCnt = iValue-1; iCnt > 0; iCnt--)
	{
		if( iValue % iCnt == 0)
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

	DisplayFactRev(iNo);


	return 0;
}