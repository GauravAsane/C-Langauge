// Accept number from user and display its factors in decreasing order

#include <stdio.h>

void FactRev(int iValue)
{
	int iCnt = 0;
	int iMult = 1;

	printf("Factors of %d in reverse order\n",iValue);
	for(iCnt = iValue/2 ; iCnt > 0; iCnt--)
	{
		if(iValue % iCnt == 0)
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter the Number :\n");
	scanf("%d",&iNo);

	FactRev(iNo);

	return 0;
}