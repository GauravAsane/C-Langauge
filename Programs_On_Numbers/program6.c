// Accept two numbers from user and display first number in second number of times.

#include <stdio.h>


void Display(int iValue , int iFreq)
{
	int iCnt = 0;

	if(iFreq < 0)
	{
		printf("Enter Positive Frequency Number\n");
		return;
	}

	for(iCnt = 1; iCnt <= iFreq ; iCnt++)
	{
		printf("%d\t",iValue);
	}
	printf("\n");
}

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;

	printf("Enter the First Number :\n");
	scanf("%d",&iNo1);

	printf("Enter the Second Number :\n");
	scanf("%d",&iNo2);

	Display(iNo1,iNo2);


	return 0;
}